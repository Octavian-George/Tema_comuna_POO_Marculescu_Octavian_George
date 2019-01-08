#include "PersonRepository.h"

Person* PersonRepository::findByFullName(std::string lastName, std::string firstName)
{
    for ( unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getLastName() == lastName && mEntities[i]->getFirstName() == firstName)
            return mEntities[i];
    return NULL;
}

Person* PersonRepository::findByCNP(std::string cnp)
{
    for (unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getCNP() == cnp)
            return mEntities[i];
    return NULL;
}
