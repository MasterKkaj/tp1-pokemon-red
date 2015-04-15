#pragma once

#include "Player.h"
#include "Opponent.h"

class PokemonRed: Component

{
public:
	PokemonRed();
	~PokemonRed();

	void Start(){}
	void Update(){}
	void Stop(){}

private:

	Player* player;
	Opponent* opponent;
};

