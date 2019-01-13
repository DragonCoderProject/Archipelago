#include "class_susanoo.h"
#include "class_hero.h"
#include <iostream>
#include <stdio.h>

Susanoo::Susanoo (){
	minimalDamageHero = strengthHero * 1;
	maximalDamageHero = strengthHero * 2;
	///damageHero = random(maximalDamageHero) + minimalDamageHero;
	defenceHero = sleightHero * 1;
	manaPointsHero = intelligenceHero * 10;
	lifeHero = staminaHero * 10;
}
