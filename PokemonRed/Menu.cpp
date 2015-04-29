#include "Menu.h"


Menu::Menu() 
	: menuAlign(CENTER)
	, menuDispo(VERTICAL) 
{

}


Menu::Menu(const char* const path) 
	: menuAlign(CENTER)
	, menuDispo(VERTICAL) 
{

}

Menu::Menu(const char* const path, const Dispo dispo) 
	: menuAlign(CENTER)
{

}

Menu::Menu(const char* const path, const Alignement align) 
	: menuDispo(VERTICAL) 
{

}

Menu::Menu(const char* const path, const Alignement align, const Dispo dispo) {

}

Menu::Menu(const char* const path, const Alignement align, const Dispo dispo, const int const width, const int const height) {
	menuSprite = new Sprite(path);
	menuSize = menuSprite->GetSize();
	menuCoord;
	switch(align) {
	case CENTER: { 
		menuCoord.x = ((width / 2) - (menuSize.x / 2));
		menuCoord.y = ((height / 2) - (menuSize.y / 2));
		break;
		}
	case TOP: { 
		menuCoord.x = ((width / 2) - (menuSize.x / 2)) - MENU_MARGIN;
		menuCoord.y = MENU_MARGIN;
		break;
		}
	case TOP_RIGHT: {
		menuCoord.x = (width - menuSize.x) - MENU_MARGIN;
		menuCoord.y = MENU_MARGIN;
		break;
		}
	case RIGHT: {
		menuCoord.x = (width - menuSize.x) - MENU_MARGIN;
		menuCoord.y = ((height / 2) - (menuSize.y / 2)) - MENU_MARGIN;
		break;
		}
	case BOT_RIGHT: { 
		menuCoord.x = (width - menuSize.x) - MENU_MARGIN;
		menuCoord.y = (height - menuSize.y) - MENU_MARGIN;
		break;
		}
	case BOTTOM: {
		menuCoord.x = ((width / 2) - (menuSize.x / 2)) - MENU_MARGIN;
		menuCoord.y = (height - menuSize.y) - MENU_MARGIN;
		break;
		}
	case BOT_LEFT: {
		menuCoord.x = MENU_MARGIN;
		menuCoord.y = (height - menuSize.y) - MENU_MARGIN;
		break;
		}
	case LEFT: {
		menuCoord.x = MENU_MARGIN;
		menuCoord.y = ((height / 2) - (menuSize.y / 2)) - MENU_MARGIN;
		break;
		}
	case TOP_LEFT: {
		menuCoord.x = MENU_MARGIN;
		menuCoord.y = MENU_MARGIN;
		break;
		}
	}
	menuSprite->SetPosition(menuCoord);
	cursor = new Sprite(CURSOR_PATH);
	cursor->SetVisibility(false);
}

Menu::~Menu() {

}

void Menu::ShowMenu(const bool show) {
	menuSprite->SetVisibility(show);
	cursor->SetVisibility(show);
	cursorIndex = 0;
	cursor->SetPosition(menuCoord.x + optionCoord[cursorIndex].x, menuCoord.y + optionCoord[cursorIndex].y);
}

void Menu::SetOption(const MenuStyle style) {
	switch (style) {
	case MAIN: {
		optionCoord[0].x = 8;
		optionCoord[0].y = 14;
		optionCoord[1].x = 8;
		optionCoord[1].y = 30;
		optionCoord[2].x = 56;
		optionCoord[2].y = 14;
		optionCoord[3].x = 56;
		optionCoord[3].y = 30;
		optionLen = 3;
		cursorIndex = 0;
		}
	case ATTACK: {
		optionCoord[0].x = 7;
		optionCoord[0].y = 8;
		optionCoord[1].x = 7;
		optionCoord[1].y = 16;
		optionLen = 1;
		cursorIndex = 0;
		}
	}
}

void Menu::SetCursor(const Dir dir) {
	int inc = 0;
	switch (dir){
	case DIR_LEFT: { inc = -2; break; }
	case DIR_RIGHT: { inc = 2; break; }
	case DIR_UP: { inc = -1; break; }
	case DIR_DOWN: { inc = 1; break; }
	}
	for (int i = 0; i < abs(inc); i++) {
		cursorIndex += inc/abs(inc);
		if (cursorIndex < 0) {
			cursorIndex = optionLen;
		} else if (cursorIndex > optionLen) {
			cursorIndex = 0;
		}
	}
	cursor->SetPosition(menuCoord.x + optionCoord[cursorIndex].x, menuCoord.y + optionCoord[cursorIndex].y);
}