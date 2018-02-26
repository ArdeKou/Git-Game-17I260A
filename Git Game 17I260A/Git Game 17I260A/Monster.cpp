#include "Monster.h"

Monster::Monster()
{
}


int Monster::addHealth(int toHealth)
{
	this->health += toHealth;
	return this->health;
}

int Monster::recudeHealth(int fromHealth)
{
	this->health -= fromHealth;
	return this->health;
}

int Monster::setHealth(int health)
{
	this->health = health;
	return this->health;
}

int Monster::getHealth()
{
	return this->health;
}

int Monster::setMaxHealth(int maxHealth)
{
	this->maxHealth = maxHealth;
	return this->maxHealth;
}

int Monster::getMaxHealth()
{
	return this->maxHealth;
}

int Monster::setStrenght(int strenght)
{
	this->strenght = strenght;
	return this->strenght;
}

int Monster::getStrenght()
{
	return this->strenght;
}

int Monster::setAgility(int agility)
{
	this->agility = agility;
	return this->agility;
}

int Monster::getAgility()
{
	return this->agility;
}

int Monster::setIntelligency(int intelligency)
{
	this->intelligency = intelligency;
	return this->intelligency;
}

int Monster::getIntelligency()
{
	return this->intelligency;
}
Monster::~Monster()
{
}
