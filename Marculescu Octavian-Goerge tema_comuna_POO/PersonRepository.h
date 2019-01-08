#ifndef PERSONREPOSITORY_H_INCLUDED
#define PERSONREPOSITORY_H_INCLUDED

#include <vector>
#include "Repository.h"
#include "Person.h"

class PersonRepository : public Repository<Person>
{
public:
	Person* findByFullName(std::string lName, std::string fName);
	Person* findByCNP(std::string cnp);
};


#endif // PERSONREPOSITORY_H_INCLUDED
