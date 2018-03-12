#pragma once
#include "Weapon.h"
namespace GAME {
	class Player
	{
	public:
		Player();
		~Player();

		void equipPri(Weapon w);
		void equipSec(Weapon w);

		void Shoot(Weapon* w);
	};
}
