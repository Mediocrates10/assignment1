#include "Engine.h"
#include "Weapon.h"
#include "Player.h"
#include <stdio.h>
using namespace GAME;

int main(int argc, char* argv[]) {
	Engine en;
	Player player;
	Weapon w1;
	Weapon w2;

	player.equipPri(w1);
	player.equipSec(w2);

	player.Shoot(&w1);
	en.print();
	getchar();
	return 0;

}