#include "PokemonRed.h"
#include "SDL_Keycode.h"

PokemonRed::PokemonRed()
{
	battleState = MAIN_MENU;
	battleBG = new SceneBG();
	player = new Player();
	opponent = new Opponent();
}

PokemonRed::~PokemonRed()
{
	delete battleBG;
	delete player;
	delete opponent;
}

void PokemonRed::Update() {
	switch (battleState) {
	case (MAIN_MENU) : {
		break;
		}

	case (ATTACK_MENU) : {
		break;
		}

	case (POKEMON_MENU) : {
		break;
		}

	case (ITEM_MENU) : {
		break;
		}
	}
}