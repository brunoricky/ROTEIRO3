#ifndef BALROG_H
#define BALROG_H
#include <iostream>

#include <Enemy.h>

using namespace std;

class Balrog : public Enemy
{
    public:
        Balrog();
        void attack();
};

#endif // BALROG_H
