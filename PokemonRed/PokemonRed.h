#pragma once

#include "Player.h"
#include "Opponent.h"
#include "SceneBG.h"

class PokemonRed: Component

{
public:
	enum Battle_State {
		MAIN_MENU,
		ATTACK_MENU,
		POKEMON_MENU,
		ITEM_MENU
	};

	PokemonRed();
	~PokemonRed();

	void Start(){}
	void Update();
	void Stop(){}
	void Kill() { delete this; }

private:
	Battle_State battleState;
	SceneBG* battleBG;
	Player* player;
	Opponent* opponent;
};

