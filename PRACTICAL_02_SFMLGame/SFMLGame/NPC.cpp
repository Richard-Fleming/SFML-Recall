#include <NPC.h>

NPC::NPC(){};
NPC::~NPC(){};

void NPC::initialize()
{
	if (!texture.loadFromFile("ASSETS/MET.png"))
	{
		std::cout << "NPC Texture Failed To Load" << std::endl;
	}
	shape.setTexture(texture);
	shape.setOrigin(120, 120);
	shape.setPosition(400, 300);
	cout << "NPC initialize" << endl;
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* const t_window)
{
	t_window->draw(shape);
	//cout << "NPC drawing" << endl;
}