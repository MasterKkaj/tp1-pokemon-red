#pragma once

#include "Sprite.h"
#include "Menu.h"

class SceneBG :
	public Sprite
{
public:
	enum Battle_State {
		MAIN_MENU,
		ATTACK_MENU,
		POKEMON_MENU,
		ITEM_MENU,
		WAIT
	};

	SceneBG();
	~SceneBG();

	void CreateMenu();
	void ShowMenu(const Battle_State menu);
	void SetCursor(const Menu::Dir dir);
protected:
	Sprite* battleBG;
private:
	Menu* currMenu;
	Menu* battleMenu;
	Menu* attackMenu;
	Menu* typeMenu;
};

