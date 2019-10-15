#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"

using namespace std;

class Player : public Character
{
public:
	Player();
	~Player();
	void initialize();
	void update();
	void draw(sf::RenderWindow* const t_window);
};
#endif