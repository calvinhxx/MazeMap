#ifndef  _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class Person
{
private:
	string _string_person_char;
public:
	Person( string person_char);
	string& get_person_char();
};
#endif
