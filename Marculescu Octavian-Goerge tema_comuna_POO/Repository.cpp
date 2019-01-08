#include<iostream>
#include "Repository.h"

template<class T>
void Repository<T>::add(T* p)
{
    mEntities.push_back(p);
}

template<class T>
void Repository<T>::print()
{
    for(unsigned int i =0; i < mEntities.size(); i++)
        std::cout <<*mEntities[i]<<"";
    std::cout <<'\n';

}
