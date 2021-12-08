#pragma once
#include <SFML/Graphics.hpp>
#include "Pacman.h"
#include "Sources.h"

class GameWIndow: public sf::RenderWindow
{
private:
	Pacman* pacman;
public:
	GameWIndow();

	void Play();

	~GameWIndow();
};

