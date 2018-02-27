#pragma once
#include <iostream>
#include <string>
#include "screen.h"

using namespace std;

class Player
{
public:
	Player();

	void giveName(string name);
	string getName();
	void giveSex(string sex);
	string getSex();

	string setClass(string playerClass);   // warrior, mage, roggue
	string getClass();

	int addHealth(int toHealth);
	int reduceHealth(int fromHealth);
	int setHealth(int health);
	int getHealth();

	int setMaxHealth(int maxHealth);
	int getMaxHealth();


	int setStrength(int strength);
	int getStrength();

	int setAgility(int agility);
	int getAgility();

	int setIntelligence(int intelligence);
	int getIntelligence();

	

	void printStats();


	~Player();
	



private:
	string name;
	string sex;
	string playerClass;

	int health;
	int maxHealth;

	int strength;
	int agility;
	int intelligence;


};

