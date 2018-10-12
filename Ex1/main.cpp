#include <iostream>
#include "Enemy.h"
#include "Poring.h"
#include "Balrog.h"

using namespace std;

int main()
{
    Poring p; // Cria um poring inimigo
    Balrog b; // Cria um balrog inimigo

    Enemy *enemy1 = &p; // Cria um ponteiro para um o poring inimigo
    Enemy *enemy2 = &b; // Cria um ponteiro para um o balrog inimigo

    enemy1->setAttackPower(5); // Define "dano"
    enemy2->setAttackPower(10000); // Define "dano"

    p.attack(); // Aplica dano
    b.attack(); // Aplica dano

    return 0;
}
