// Lesson 10 - Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void some_function(Enemy& enemy) {
	enemy.set_score(6);
}

int main(void) {

	ArmedEnemy* ae = new ArmedEnemy(2, 5);
	ae->set_hit_points(3);
	cout << "hit points = " << ae->get_hit_points() << "\n";

	ae->shoot();

	some_function(*ae);

	delete ae;
	ae = NULL;
	return 0;
}

