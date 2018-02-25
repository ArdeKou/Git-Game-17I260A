#include "Player.h"
#include <string>


Player::Player()
{
	string storageString;
	int storageInt;

	giveName(printQuestion("What would be our heros name?", ""));
	storageInt = stoi(printQuestion("What would be our " + this->name + "s sex?", "1) Male\n2) Female\n3) Other"));
	switch (storageInt) {
	case 1:
		giveSex("Male");
		break;
	case 2:
		giveSex("Female");
		break;
	default:
		giveSex("Other");
	}
	setStrenght(stoi(printQuestion("What would be our " + this->name + "s strenght?", "0 - 99")));
	setAgility(stoi(printQuestion("What would be our " + this->name + "s agility?", "0 - 99")));
	setIntelligency(stoi(printQuestion("What would be our " + this->name + "s intelligency?", "0 - 99")));
}

void Player::giveName(string name)
{
	this->name = name;
}

string Player::getName()
{
	return string(this->name);
}

void Player::giveSex(string sex)
{
	this->sex = sex;
}

string Player::getSex()
{
	return string(this->sex);
}

int Player::addHealth(int toHealth)
{
	this->health += toHealth;
	return this->health;
}

int Player::recudeHealth(int fromHealth)
{
	this->health -= fromHealth;
	return this->health;
}

int Player::setHealth(int health)
{
	this->health = health;
	return this->health;
}

int Player::getHealth()
{
	return this->health;
}

int Player::setMaxHealth(int maxHealth)
{
	this->maxHealth = maxHealth;
	return this->maxHealth;
}

int Player::getMaxHealth()
{
	return this->maxHealth;
}

int Player::setStrenght(int strenght)
{
	this->strenght = strenght;
	return this->strenght;
}

int Player::getStrenght()
{
	return this->strenght;
}

int Player::setAgility(int agility)
{
	this->agility = agility;
	return this->agility;
}

int Player::getAgility()
{
	return this->agility;
}

int Player::setIntelligency(int intelligency)
{
	this->intelligency = intelligency;
	return this->intelligency;
}

int Player::getIntelligency()
{
	return this->intelligency;
}

void Player::printStats()
{
	string storageString = "";

	storageString += "Name: " + this->name + "\n";
	storageString += "Sex: " + this->sex + "\n";

	storageString += "Strenght: " + to_string(this->strenght) + "\n";
	storageString += "Agility: " + to_string(this->agility) + "\n";
	storageString += "Intelligency: " + to_string(this->intelligency) + "\n";

	printPause(storageString);
	system("cls");
}



Player::~Player()
{
}
