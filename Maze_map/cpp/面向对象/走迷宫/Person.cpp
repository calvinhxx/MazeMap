#include "person.h"

Person::Person(string person_char): _string_person_char(person_char)
{
}
string& Person::get_person_char()
{
	return this->_string_person_char;
}
