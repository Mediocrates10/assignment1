#include "Player.h"
#include <stdio.h>
using namespace GAME;


Player::Player()
{
}


Player::~Player() {

}

void Player::Shoot(Weapon* w) {
	if (w) {
		printf("Weapon Fired");
	}
}

void Player::equipPri(Weapon w) {
	w.Primary();
}

void Player::equipSec(Weapon w) {
	w.Secondary();
}
