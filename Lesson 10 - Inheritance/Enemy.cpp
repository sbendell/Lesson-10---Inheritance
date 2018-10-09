#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy(int hps) :
	hit_points(hps) {
	score = new int(0);
}

Enemy::~Enemy() {
	delete score;
}

int Enemy::get_hit_points() const {
	return hit_points;
}

int Enemy::get_score() const {
	return *score;
}

void Enemy::set_hit_points(const int new_hit_points) {
	hit_points = new_hit_points;
}

void Enemy::set_score(const int new_score) {
	*score = new_score;
}

int Enemy::compare_to(Comparable& rhs) {
	Enemy* enemy = dynamic_cast<Enemy*>(&rhs);
	
	if (enemy->get_hit_points() < get_hit_points()) {
		return 1;
	}
	else if (enemy->get_hit_points() == get_hit_points()) {
		return 0;
	}
	else if(enemy->get_hit_points() > get_hit_points()) {
		return -1;
	}
}