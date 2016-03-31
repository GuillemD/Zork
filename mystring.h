#ifndef MYSTRING_H_
#define MYSTRING_H_
#include <string.h>
#include <assert.h>
#include <stdio.h>

class mystring
{
public:
	char* str;

	mystring(const char* s1)//constructor
	{
		assert(s1 != 0);
		int length = strlen(s1);
		str = new char[length + 1];
		strcpy_s(str, (length + 1), s1);
	}
	mystring(const mystring& s2)//cpy constructor
	{
		int length = strlen(s2.str);
		str = new char[length + 1];
		strcpy_s(str, (length + 1), s2.str);
	}

	~mystring() //destructor
	{
		//freeing the memory from the strings created
		delete[] str;
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
	bool operator==(const char* s2) const //compares two strings, one of them, a C string
	{
		return (strcmp(str, s2) == 0);
	}
	void operator=(const mystring& s2)//assigning string
	{
		delete[] str;
		int length = strlen(s2.str);
		str = new char[length + 1];
		strcpy_s(str, (length + 1), s2.str);

	}
	void operator=(const char* s1)//assigning C string
	{
		delete[] str;
		int length = strlen(s1);
		str = new char[length + 1];
		strcpy_s(str, (length + 1), s1);
	}

	//operator+ strcat
};

#endif