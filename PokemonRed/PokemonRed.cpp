#include "PokemonRed.h"

PokemonRed::PokemonRed()
{
	battleBG = new SceneBG();
	battleBG->CreateMenu();
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
	if (ThisKeyPressed(SDL_SCANCODE_A)) {
		battleBG->ShowMenu(SceneBG::MAIN_MENU);
	}
	if (ThisKeyPressed(SDL_SCANCODE_LEFT)) {
		battleBG->SetCursor(Menu::DIR_LEFT);
	}
	else if (ThisKeyPressed(SDL_SCANCODE_RIGHT)) {
		battleBG->SetCursor(Menu::DIR_RIGHT);
	}
	else if (ThisKeyPressed(SDL_SCANCODE_UP)) {
		battleBG->SetCursor(Menu::DIR_UP);
	}
	else if (ThisKeyPressed(SDL_SCANCODE_DOWN)) {
		battleBG->SetCursor(Menu::DIR_DOWN);
	}
}