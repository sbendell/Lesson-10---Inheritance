// Lesson 10 - Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Boss.h"
#include "BinaryTree.h"

using namespace std;

void some_function(Enemy& enemy) {
	enemy.set_score(6);
}

void hitEnemy(Enemy& enemy) {
	enemy.set_hit_points(enemy.get_hit_points() - 1);
}

int main(void) {

	ArmedEnemy* ae = new ArmedEnemy(2, 5);
	ae->set_hit_points(3);
	cout << "hit points = " << ae->get_hit_points() << "\n";

	ae->shoot();

	some_function(*ae);

	Boss boss(600, 50, 100);
	ArmedEnemy ae1(100, 20);
	ArmedEnemy ae2(90, 20);
	ArmedEnemy ae3(80, 20);
	ArmedEnemy ae4(70, 20);
	ArmedEnemy ae5(60, 20);
	ArmedEnemy ae6(50, 20);
	ArmedEnemy ae7(40, 20);
	ArmedEnemy ae8(30, 20);
	ArmedEnemy ae9(20, 20);
	ArmedEnemy ae10(10, 20);

	Enemy enemies[11] = { boss, ae1, ae2, ae3, ae4, ae5, ae6, ae7, ae8, ae9, ae10 };

	cout << "all mobs hp:\n";

	for (int i = 0; i < 11; i++)
	{
		cout << enemies[i].get_hit_points() << "\n";
		hitEnemy(enemies[i]);
	}

	cout << "all mobs hp after get hit:\n";

	for (int i = 0; i < 11; i++)
	{
		cout << enemies[i].get_hit_points() << "\n";
	}

	cout << "Comparing 2 enemies:\nFirst HP: " << enemies[4].get_hit_points() << "\n";
	cout << "First HP: " << enemies[5].get_hit_points() << "\n";
	cout << enemies[4].compare_to(enemies[5]) << "\n";

	cout << "\n\nBinary Tree: \n";

	BinaryTree tree(&enemies[5]);
	tree.insert_integer(tree.get_primary_node(), &enemies[3]);
	tree.insert_integer(tree.get_primary_node(), &enemies[1]);
	tree.insert_integer(tree.get_primary_node(), &enemies[2]);
	tree.insert_integer(tree.get_primary_node(), &enemies[4]);
	tree.insert_integer(tree.get_primary_node(), &enemies[0]);
	tree.insert_integer(tree.get_primary_node(), &enemies[7]);
	tree.insert_integer(tree.get_primary_node(), &enemies[9]);
	tree.insert_integer(tree.get_primary_node(), &enemies[8]);
	tree.insert_integer(tree.get_primary_node(), &enemies[10]);
	tree.insert_integer(tree.get_primary_node(), &enemies[6]);

	tree.print_tree(tree.get_primary_node());

	delete ae;
	ae = NULL;

	int x;
	cin >> x;
	return 0;
}

