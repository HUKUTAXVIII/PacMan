#include "Pacman.h"


Pacman::Pacman(): Sprite()
{
	
	textureOpn.loadFromFile(PACMANOPENEDTEXTURE);
	textureCls.loadFromFile(PACMANCLOSEDTEXTURE);
	this->score = 0;
	this->speed = CELL/4;
	this->dir = NONE;
	this->mouseOpn = 0.0f;
	this->setTexture(textureOpn);
	this->setTextureRect(sf::IntRect(0, 0, CELL * 2, CELL * 2));
	this->setOrigin(CELL,CELL);
}

Pacman::Pacman(int x, int y):Pacman()
{
	this->setPosition(x,y);
}

int Pacman::getScore()
{
	return this->score;
}

float Pacman::getSpeed()
{
	return this->speed;
}

bool Pacman::getMode()
{
	return this->BeastMode;
}

void Pacman::appScore(int add)
{
	this->score += add;
}

void Pacman::SetDir(Dir dir)
{
	this->dir = dir;
}

Dir Pacman::getDir()
{
	return this->dir;
}

void Pacman::Move()
{

	this->mouseOpn += 0.3;
	if (this->mouseOpn > 1.0) {
		this->mouseOpn = -1.0;
	}

	if (this->mouseOpn>0.0) {
		this->setTexture(this->textureCls);
	}
	else {
		this->setTexture(this->textureOpn);
	}

	switch (this->dir)
	{	
	case UP:
		this->move(0,-this->speed);
		this->setRotation(-90);
		break;
	case DOWN:
		this->move(0, this->speed);
		this->setRotation(90);
		break;
	case LEFT:
		this->move(-this->speed,0);
		this->setRotation(-180);
		break;
	case RIGHT:
		this->setRotation(0);
		this->move(this->speed, 0);
		break;
	default:
		break;
	}
}

Pacman::~Pacman()
{

}
