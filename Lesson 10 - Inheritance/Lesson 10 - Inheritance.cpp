// Lesson 10 - Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Boss.h"

using namespace std;

void some_function(Enemy& enemy) {
	enemy.set_score(6);
}

int main(void) {

	ArmedEnemy* ae = new ArmedEnemy(2, 5);
	ae->set_hit_points(3);
	cout << "hit points = " << ae->get_hit_points() << "\n";

	ae->shoot();

	some_function(*ae);

	Boss* boss = new Boss(600, 50, 100);

	cout << "Boss stats > Health: " << boss->get_hit_points() << "  Armor: " << boss->getArmor() << "\n";
	cout << "You hit the boss for massive damage\n";
	cout << "He's lost a piece of armor\n";
	boss->set_hit_points(250);
	boss->setArmor(60);

	cout << "Boss stats > Health: " << boss->get_hit_points() << "  Armor: " << boss->getArmor() << "\n";

	delete ae;
	delete boss;
	ae = NULL;

	int x;
	cin >> x;
	return 0;
}

