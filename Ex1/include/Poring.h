#ifndef PORING_H
#define PORING_H
#include <iostream>

#include <Enemy.h>

using namespace std;

class Poring : public Enemy
{
    public:
        Poring();
        void attack();

};

#endif // PORING_H
