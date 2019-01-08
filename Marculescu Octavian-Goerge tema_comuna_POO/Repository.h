#ifndef REPOSITORY_H_INCLUDED
#define REPOSITORY_H_INCLUDED

#include<vector>

template<class T>
class Repository
{
protected:
std::vector<T*> mEntities;

public:
     void add(T* p);
     void print();


};


#endif // REPOSITORY_H_INCLUDED
