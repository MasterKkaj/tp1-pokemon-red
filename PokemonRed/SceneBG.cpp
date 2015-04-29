#include "SceneBG.h"

SceneBG::SceneBG() {
	battleBG = new Sprite("images/BattleBG.png");
}

SceneBG::~SceneBG() {

}

void SceneBG::CreateMenu() {
	point<int> size = battleBG->GetSize();
	battleMenu = new Menu("images/BattleMenu.png", Menu::BOT_RIGHT, Menu::TWO_BY_TWO, size.x, size.y);
	battleMenu->SetOption(Menu::MAIN);
	battleMenu->ShowMenu(false);
	attackMenu = new Menu("images/AttackMenu.png", Menu::BOT_RIGHT, Menu::VERTICAL, size.x, size.y);
	attackMenu->SetOption(Menu::ATTACK);
	attackMenu->ShowMenu(false);
	typeMenu = new Menu("images/TypeMenu.png", Menu::CENTER, Menu::VERTICAL, size.x, size.y);
	typeMenu->ShowMenu(false);
}

void SceneBG::ShowMenu(const Battle_State menu) {
	currMenu->ShowMenu(false);
	switch (menu) {
	case MAIN_MENU: {
		battleMenu->ShowMenu(true);
		currMenu = battleMenu;
		break;
		}
	case ATTACK_MENU: {
		attackMenu->ShowMenu(true);
		currMenu = attackMenu;
		break;
		}
	case ITEM_MENU: {
		break;
		}
	case POKEMON_MENU: {
		break;
		}
	}
}

void SceneBG::SetCursor(const Menu::Dir dir) {
	battleMenu->SetCursor(dir);
}