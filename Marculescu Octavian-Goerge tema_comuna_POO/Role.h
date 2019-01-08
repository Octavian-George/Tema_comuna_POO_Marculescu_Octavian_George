#ifndef ROLE_H_INCLUDED
#define ROLE_H_INCLUDED
#include <iostream>

typedef enum Roletype{
        STUDENT_ROLE,
        TEACHER_ROLE,
        GUEST_ROLE,
        ADMINISTRATIVE_ROLE
}RoleType;

class Role{
protected:
    RoleType mType;

public:
    Role(RoleType types):mType(types){}
};

#endif // ROLE_H_INCLUDED
