#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>

using namespace std;

class Enemy
{
    public:
        Enemy();
        void setAttackPower(int);

    protected:
        int attackPower=0;

};

#endif // ENEMY_H
