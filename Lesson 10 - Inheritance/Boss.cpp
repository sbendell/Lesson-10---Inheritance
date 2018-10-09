#include "stdafx.h"
#include "Boss.h"


Boss::Boss(int hps, int ammo, int armor):
	ArmedEnemy(hps, ammo),
	armorLevel(armor)
{
}

int Boss::getArmor() const {
	return armorLevel;
}

void Boss::setArmor(int value) {
	armorLevel = value;
}

Boss::~Boss()
{
}
