#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>

class Character
{
public:
	sf::Sprite shape;
	sf::Texture texture;
	Character();
	~Character();
	void initialize();
	void update();
	void draw();
};
#endif