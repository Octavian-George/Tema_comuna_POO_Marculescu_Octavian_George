#ifndef GUESTROLE_H_INCLUDED
#define GUESTROLE_H_INCLUDED

#include "Role.h"

class GuestRole : public Role
{
public:
    GuestRole() : Role(GUEST_ROLE) {};
};


#endif // GUESTROLE_H_INCLUDED
