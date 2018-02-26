#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster
{
public:
	Monster();

	int addHealth(int toHealth);
	int recudeHealth(int fromHealth);
	int setHealth(int health);
	int getHealth();

	int setMaxHealth(int maxHealth);
	int getMaxHealth();


	int setStrenght(int strenght);
	int getStrenght();

	int setAgility(int agility);
	int getAgility();

	int setIntelligency(int intelligency);
	int getIntelligency();





	~Monster ();




private:

	int health;
	int maxHealth;

	int strenght;
	int agility;
	int intelligency;


};

