#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
#include <vector>
#include "Role.h"

class Person
{
public:
	Person() {};
	Person(std::vector<Role*> Roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email);
	void setCNP(std::string);
	void setFirstName(std::string);
	void setLastName(std::string);
	void setEmail(std::string);
	void addRole(Role*);
	std::string getCNP();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmail();
	friend std::istream& operator >> (std::istream& stream, Person& p);
	friend std::ostream& operator << (std::ostream& stream, const Person& p);
protected:
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector<Role*> mRoles;
};


#endif // PERSON_H_INCLUDED
