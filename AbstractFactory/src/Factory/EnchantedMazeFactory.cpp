#include "EnchantedMazeFactory.h"
Spell* EnchantedMazeFactory::CastSpell() const
{
	return new Spell();
}
