#include "Person.h"

Person::Person(std::vector<Role*> Roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email = ""):mEmail(Email)
{
    mRoles=Roles;
    mCNP=CNP;
    mLastName=LastName;
    mFirstName=FirstName;
}

void Person::setCNP(std::string CNP)
{
    mCNP = CNP;
}

std::string Person::getCNP()
{
    return mCNP;
}

void Person::setFirstName(std::string FirstName)
{
    mFirstName = FirstName;
}

std::string Person::getFirstName()
{
    return mFirstName;
}

void Person::setLastName(std::string LastName)
{
    mLastName = LastName;
}

std::string Person::getLastName()
{
    return mLastName;
}

void Person::setEmail(std::string Email)
{
    mEmail = Email;
}

std::string Person::getEmail()
{
    return mEmail;
}

void Person::addRole(Role *role)
{
    mRoles.push_back(role);
}

std::istream& operator>>(std::istream& stream, Person& p)
{
    stream >> p.mCNP >> p.mFirstName >> p.mLastName >> p.mEmail;
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Person& p)
{
    stream << p.mCNP << ", " << p.mFirstName << " " << p.mLastName << ", " << p.mEmail << "\n";
    return stream;
}
