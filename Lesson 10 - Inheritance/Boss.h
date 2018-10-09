#pragma once
#include "ArmedEnemy.h"

class Boss : public ArmedEnemy
{
public:
	Boss(int hps, int ammo, int armor);
	virtual ~Boss();
	virtual int getArmor() const;
	virtual void setArmor(int value);
private:
	int armorLevel;
};

