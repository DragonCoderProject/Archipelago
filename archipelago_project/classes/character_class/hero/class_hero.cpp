#include "class_hero.h"



void Hero::randomForClass()
{
    srand(time(NULL));
}

Hero::Hero()
{
    nameHero = "noname";
    strengthHero = 1;
	staminaHero = 1;
	sleightHero = 1;
	intelligenceHero = 1;
	stateMoneyOfBeginHero = 1;
	pointForStatystickHero = 5;
	lvlHero = 1;
	widthHero = 1;
    lengthHero = 1;
	minimalDamageHero = strengthHero * 1;
	maximalDamageHero = strengthHero * 1;
	damageHero = (std::rand() % maximalDamageHero) + minimalDamageHero;
    defenceHero = sleightHero * 1;
	lifeHero = staminaHero * 1;
	manaPointsHero = intelligenceHero * 1;
}

void Hero::setName(std::string nameHero)
{
    this->nameHero=nameHero;
}

void Hero::moving(int widthHero, int lengthHero)
{
    spriteHero.move(widthHero, lengthHero);
}

void Hero::setPosition(int widthHero, int lengthHero)
{
    spriteHero.setPosition(widthHero, lengthHero);
}

