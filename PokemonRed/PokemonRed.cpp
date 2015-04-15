#include "PokemonRed.h"

PokemonRed::PokemonRed()
{

	player = new Player();
	opponent = new Opponent();
}

PokemonRed::~PokemonRed()
{
	delete player;
	delete opponent;
}
