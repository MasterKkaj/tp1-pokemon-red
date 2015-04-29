#pragma once

#include "Common.h"
#include "Player.h"
#include "Opponent.h"
#include "SceneBG.h"
#include "SDL_Keycode.h"

class PokemonRed: Component

{
public:

	PokemonRed();
	~PokemonRed();

	void Start(){}
	void Update();
	void Stop(){}
	void Kill() { delete this; }

private:
	SceneBG* battleBG;
	Player* player;
	Opponent* opponent;
};

