#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <string>
#include "Person.h"
class Student : public Person{
private:
	std::string Birthdate;
	int NrMatricol;
	int AnStudii;
	std::string FormaFinantare;
public:
	Student();
	std::string get_occupation() override;

};

#endif // STUDENT_H_INCLUDED
