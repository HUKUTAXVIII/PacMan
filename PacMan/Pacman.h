#pragma once
#include <SFML/Graphics.hpp>
#include "Sources.h"

enum Dir {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	NONE
};


class Pacman : public sf::Sprite
{
private:
	int score;
	float speed;
	bool BeastMode;
	float mouseOpn;
	Dir dir;
	sf::Texture textureOpn;
	sf::Texture textureCls;
public:
	Pacman();
	Pacman(int x,int y);

	int getScore();
	float getSpeed();
	bool getMode();
	
	void appScore(int add);
	void SetDir(Dir dir);
	Dir getDir();
	void Move();

	~Pacman();

};

