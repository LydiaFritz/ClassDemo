#include "Die.h"
#include <ctime>
#include <stdlib.h>

Die::Die(int s)
{
	sides = s;
}

Die::Die()
{
	sides = 6;
}

void Die::rollDice()
{
	value = rand() % sides + 1;
}

int Die::getValue() const
{
	return value;
}
