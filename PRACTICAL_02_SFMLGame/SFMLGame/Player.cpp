#include <Player.h>

Player::Player(){};
Player::~Player(){};

void Player::initialize()
{
	if (!texture.loadFromFile("ASSETS/MegaMan.png"))
	{
		std::cout << "Player Texture Failed To Load" << std::endl;
	}
	shape.setTexture(texture);
	shape.setOrigin(420, 348);
	shape.setPosition(400, 400);
	cout << "Player initialize" << endl;
}
void Player::update()
{
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* const t_window)
{
	t_window->draw(shape);
	//cout << "Player drawing" << endl;
}