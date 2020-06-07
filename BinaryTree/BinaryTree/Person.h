#ifndef __PERSON_H__
#define __PERSON_H__

#include "BinaryTree.h"
string names[10] = {"Rosa       ", "Ariana     ", "Carrasquito", "Sebastian  ", "Juan       ", "Roberto    ", "Piero      ", "Rita       ", "Cesar      ", "Alfredo    "};
string careersss[10]={"Ing Ambiental","Fisica","Derecho","Matematica pura","Ingenieria de sistemas","Civil","Reposteria","Medicina"};

class Person
{
private:
    unsigned short age;
    string name;
    char sex;
    string career;

public:
    Person()
    {
        name = names[rand() % 10];
        age = rand() % 50 + 1;
        if (rand() % 2 == 0)
        {
            sex = 'M';
        }
        else
        {
            sex = 'F';
        }
        career = careersss[rand()%10];
    }
    char getsex() { return sex; }
    unsigned short getage() { return age; }
    string getname(){return name;}
    string getcareer(){return career;}
};
#endif