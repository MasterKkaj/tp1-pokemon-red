#include "Engine.h"

int main(int argc, char* args[])
{	
	// Proportional resolution for NES (default: 256 * 240) (only to show it's working, default "Init()" has the same size as before (800 * 600))
	Engine::GetInstance()->Init(800, 750); 
	
	// L'engin vire
	Engine::GetInstance()->Run();

	return 0;
}
