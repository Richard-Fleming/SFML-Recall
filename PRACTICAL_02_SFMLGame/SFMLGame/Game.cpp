#include <Game.h>
#include <SFML/Graphics.hpp>

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;

Game::Game(){}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();
	player->initialize();
	npc->initialize();
	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");
}

void Game::run()
{
	initialize();

	while (window->isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();
		if (player->shape.getGlobalBounds().intersects(npc->shape.getGlobalBounds()))
		player->update();
		npc->update();
	}
	{
		cout << "Intersecting" << std::endl;
	}

}

void Game::draw()
{
	window->clear();
	//window->draw(shape);
	player->draw(window);
	npc->draw(window);
	window->display();
}


