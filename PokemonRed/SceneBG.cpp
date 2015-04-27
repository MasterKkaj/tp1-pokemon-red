#include "SceneBG.h"

SceneBG::SceneBG() {
	battleBG = new Sprite("images/BattleBG.png");
	battleMenu = new Sprite("images/BattleMenu.png");
	battleMenu->SetVisibility(false);
}

SceneBG::~SceneBG() {

}

void SceneBG::ShowMenu(bool show) {
	if (show) {
		point<int> bgCoord = battleBG->GetSize();
		point<int> menuCoord = battleMenu->GetSize();
		menuCoord.x = (bgCoord.x - menuCoord.x) - 2;
		menuCoord.y = (bgCoord.y - menuCoord.y) - 2;
		battleMenu->SetPosition(menuCoord);
		battleMenu->SetVisibility(true);
	} else {
		battleMenu->SetVisibility(false);
	}
}