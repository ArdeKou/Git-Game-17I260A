#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster
{
public:
	Monster();

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





	~Monster ();




private:

	int health;
	int maxHealth;

	int strength;
	int agility;
	int intelligence;


};

