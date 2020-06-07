#include "BinaryTree.h"
string names[10] = {"Rosa", "Ariana", "Carrasquito", "Sebastian", "Juan", "Roberto", "Piero", "Rita", "Cesar", "Alfredo"};

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
        career = "Ingeieria";
    }
    char getsex() { return sex; }
    unsigned short getage() { return age; }
};
