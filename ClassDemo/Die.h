#ifndef DIE_H
#define DIE_H

class Die {
private:
	int sides, value;	
public:
	Die(int s);
	Die();
	void rollDice();
	int getValue()const;
};


#endif
