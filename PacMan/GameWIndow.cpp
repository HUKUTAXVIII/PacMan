#include "GameWIndow.h"


GameWIndow::GameWIndow() : sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Pac-Man")
{
	this->pacman = new Pacman(WIDTH/2,HEIGHT/2);

}

void GameWIndow::Play()
{
	while (this->isOpen())
	{
		sf::Event event;
		while (this->pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				this->close();
			}
		}

		Dir dir = this->pacman->getDir();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			dir = LEFT;
		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			dir = UP;
		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			dir = DOWN;
		}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			dir = RIGHT;
		}
		this->pacman->SetDir(dir);
		this->pacman->Move();

		this->clear(sf::Color(0,0,0));
		this->draw(*this->pacman);
		this->display();
		sf::sleep(sf::milliseconds(50));


	}


}

GameWIndow::~GameWIndow()
{

}
