#include <iostream>
#include "Person.h"
#include "Person.cpp"
#include "Role.h"
#include "Role.cpp"
#include "Activity.h"
#include "Activity.cpp"
#include "Room.h"
#include "Room.cpp"
#include "PersonRepository.h"
#include "PersonRepository.cpp"
#include "RoomRepository.h"
#include "RoomRepository.cpp"
#include "Repository.h"
#include "Repository.cpp"
#include "TeacherRole.h"
#include "TeacherRole.cpp"
#include "AdministrativeRole.h"
#include "AdministrativeRole.cpp"
#include "GuestRole.h"
#include "GuestRole.cpp"




int main(){
std::vector<Person*> persons;
std::vector<Activity*> activities;
//rooms.push_back(new Room("321"));
//persons.push_back(new Person("","octav","0123456789","octav@yahoo.com"));
//activities.push_back(new Activity("laborator"));
RoomRepository rooms;
rooms.add(new Room("Titeica"));
rooms.add(new Room("Haret"));
std::cout <<"Sali:\n";
rooms.print();
PersonRepository teachers;
//teachers.add(new Person({new TeacherRole()}, "543", "Preda", "Marin", "pmarin@yahoo.com"));
//teachers.add(new Person({new TeacherRole()}, "812", "Vaduva", "Alin", "valin@gmail.com"));
//teachers.add(new Person({new TeacherRole()}, "432", "Rapeanu", "Stefan", "rstefan@gmail.com"));

//std::cout << "Profesori:\n";
//teachers.print();

















}


