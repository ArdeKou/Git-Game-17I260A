#include "Monster.h"

Monster::Monster()
{
}


int Monster::addHealth(int toHealth)
{
	this->health += toHealth;
	return this->health;
}

int Monster::reduceHealth(int fromHealth)
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

int Monster::setStrength(int strength)
{
	this->strength = strength;
	return this->strength;
}

int Monster::getStrength()
{
	return this->strength;
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

int Monster::setIntelligence(int intelligence)
{
	this->intelligence = intelligence;
	return this->intelligence;
}

int Monster::getIntelligence()
{
	return this->intelligence;
}
Monster::~Monster()
{
}
