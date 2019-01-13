class Hero {
protected:
	std::string nameHero_;
	int widthHero_;
	int lengthHero_;
	unsigned long long targetMoneyHero_;
	unsigned short minimalDamageHero_;
	unsigned short maximalDamageHero_;
	unsigned short damageHero_;
	unsigned short defenceHero_;
	unsigned short lifeHero_;
	unsigned short manaPointsHero_;
	unsigned char strengthHero_;
	unsigned char staminaHero_;
	unsigned char sleightHero_;
	unsigned char intelligenceHero_;
	unsigned short levelHero_;
	unsigned short pointForStatystickHero_;
    unsigned int moneyForSkillsUpgrade_;
    unsigned short criticalDamage_;
	bool living_;
    bool criticalDamageTrueFalse_; 
    
	int lifeHero_;
	int manaPointsHero_;

///stats
    int defeatedCharacter_;
    int defeatedMob_;
    int defeatedBoss_;
    int defeatedLegendaryBoss_;

///strong against...

	
public:
	void setNameHero (std::string);
	void setPositionHero (int, int);
	void moveHero (int, int);
	void upStrengthHero (int);
	void upStaminaHero (int);
	void upSleightHero (int);
    void setLifeHero ();
    void setLevelHero (int);
    
    
    int 
	
	
	int getWidthHero (int);
	int getLengthHero (int);
	
    Hero();
   ~Hero();

	void drawHero(sf::RenderWindow &);  ///rysowanie postaci
    void drawHits(sf::RenderWindow &); ///rysowanie uderzenia gracza
    void drawDeath(sf::RenderWindow &); ///gracz zginal
};
