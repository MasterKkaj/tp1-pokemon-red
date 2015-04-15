#include "Engine.h"
#include "PokemonRed.h"

int main(int argc, char* args[])
{	
	// Init with custom resolution. Proportional resolution for NES (default: 256 * 240 or 800 x 750)
	Engine::GetInstance()->Init(160, 144); 
	
	PokemonRed* game = new PokemonRed();

	// L'engin vire
	Engine::GetInstance()->Run();

	delete game;

	return 0;
}
