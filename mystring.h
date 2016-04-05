#ifndef MYSTRING_H_
#define MYSTRING_H_
#include <string.h>
#include <assert.h>
#include <stdio.h>

class mystring
{
	unsigned int max_size = 0;

public:
	char* str;
	mystring()//empty constructor
	{
		max_size = 0;
		str = NULL;
	}
	mystring(const char* s1)//constructor
	{
		assert(s1 != 0);
		int length = strlen(s1);
		max_size = length + 1;
		str = new char[max_size];
		strcpy_s(this->str, max_size, s1);
	}
	mystring(const mystring& s2)//cpy constructor
	{
		max_size = s2.length() + 1;
		str = new char[max_size];
		strcpy_s(this->str, max_size, s2.str);
	}

	~mystring() //destructor
	{
		//freeing the memory from the strings created
		delete[] str;
	}
	const char* c_str() const //printing strings
	{
		return str;
	}
	unsigned int length() const //returns the length of a string
	{
		return strlen(str);
	}
	bool empty() const //looks if the first character is null
	{
		return str[0] == 0;
	}
	bool operator==(const mystring& s2) const //compares two strings
	{
		return (strcmp(str, s2.str) == 0);
	}
	bool operator==(const char* s1) const //compares two strings, one of them, a C string
	{
		return (strcmp(str, s1) == 0);
	}
	const mystring& operator=(const mystring& s2)//assigning string
	{
		if (max_size < (s2.length() + 1))
		{
			delete[] str;
			max_size = s2.length() + 1;
			str = new char[max_size];
		}

		strcpy_s(this->str, max_size, s2.str);

		return (*this);

	}
	const mystring& operator=(const char* s1)//assigning C string
	{
		if (max_size < (length() + 1))
		{
			delete[] str;
			max_size = length() + 1;
			str = new char[max_size];
		}

		strcpy_s(this->str, max_size, s1);

		return (*this);

	}
	const mystring& operator+=(const mystring& s2)//concatenating a string with itself
	{

		max_size = s2.length() + 1;
		unsigned int new_max_size = ((2 * max_size) - 1);

		if (new_max_size > max_size)
		{
			char* original = str;
			str = new char[new_max_size];
			strcpy_s(str, new_max_size, original);
			delete[] str;
		}
		strcat_s(str, new_max_size, s2.str);
		return (*this);
	}


	//operator+

};

#endif