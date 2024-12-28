#include <iostream>
#include <stdio.h>
#include <stdbool.h>


struct Inventory
{
	int count;
	int current;
};

struct Enemy
{
	int x, y;
	int max_health;
	int cur_health;
	int damage;
};

struct Chest
{
	int x, y;
	int weapon;
};

struct Weapon
{
	int multiplier_damage;
};

struct Coin
{
	int x, y;
	bool collected;
};

struct Player
{
	int x, y;
	int max_health;
	int cur_health;
	int damage;
	int weapon;
	Inventory inventory;
};