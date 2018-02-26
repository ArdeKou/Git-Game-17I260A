#include "Player.h"
#include <string>


Player::Player()
{
	string storageString;
	int storageInt;
	bool storageBool;

	bool characterReady = false;

	while (!characterReady) {

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
		storageBool = true;
		while (storageBool) {
			storageInt = stoi(printQuestion("What would be our " + this->name + "s class?", "1) Warrior\n2) Mage\n3) Rogue"));
			switch (storageInt) {
			case 1:
				setClass("warrior");
				setStrenght(20);
				setAgility(15);
				setIntelligency(10);

				storageBool = false;
				break;
			case 2:
				setClass("mage");
				setStrenght(10);
				setAgility(15);
				setIntelligency(20);
				storageBool = false;
				break;
			case 3:
				setClass("rogue");
				setStrenght(15);
				setAgility(20);
				setIntelligency(10);
				storageBool = false;
				break;
			default:
				printPause("That was invalid choice, try again!");
				break;


			}

		}

		storageBool = true;
		while (storageBool) {
			printStats();
			storageInt = stoi(printQuestion("Were you satisfied with your character?", "1) Yes\n2) No, lets start from begining!\n3) Show again"));
			switch (storageInt) {
			case 1:
				characterReady = true;

				storageBool = false;
				break;
			case 2:
				characterReady = false;

				storageBool = false;
				break;
			case 3:
				break;
			default:
				printPause("That was invalid choice, try again!");
				break;


			}

		}
	}
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

string Player::setClass(string playerClass)
{
	this->playerClass = playerClass;
	return string(this->playerClass);
}

string Player::getClass()
{
	return string(this->playerClass);
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

	storageString += "Name: " + getName() +"\n";
	storageString += "Sex: " + getSex() + "\n";
	storageString += "Class: " + getClass() + "\n";
	storageString += "\n";
	storageString += "Strenght: " + to_string(getStrenght()) + "\n";
	storageString += "Agility: " + to_string(getAgility()) + "\n";
	storageString += "Intelligency: " + to_string(getIntelligency()) + "\n";

	printPause(storageString);
	system("cls");
}



Player::~Player()
{
}
