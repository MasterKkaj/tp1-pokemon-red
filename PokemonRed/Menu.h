#pragma once

#include "Sprite.h"

class Menu :
	public Sprite
{
public:
	enum Alignement {
		CENTER,
		TOP,
		TOP_RIGHT,
		RIGHT,
		BOT_RIGHT,
		BOTTOM,
		BOT_LEFT,
		LEFT,
		TOP_LEFT
	};
	enum Dispo {
		HORIZONTAL,
		VERTICAL,
		TWO_BY_TWO
	};
	enum MenuStyle {
		MAIN,
		ATTACK,
		ITEM,
		POKEMON
	};
	enum Dir {
		DIR_LEFT,
		DIR_RIGHT,
		DIR_UP,
		DIR_DOWN
	};
	Menu();
	Menu(const char* const path);
	Menu(const char* const path, const Dispo dispo);
	Menu(const char* const path, const Alignement align);
	Menu(const char* const path, const Alignement align, const Dispo dispo);
	Menu(const char* const path, const Alignement align, const Dispo dispo, const int const width, const int const height);
	~Menu();

	void ShowMenu(const bool show);
	void SetOption(const MenuStyle style);
	void SetCursor(const Dir dir);
private:
	//Const
	const char* CURSOR_PATH = "images/Cursor.png";
	const int MENU_MARGIN = 2;
	//Enum
	Alignement menuAlign;
	Dispo menuDispo;
	//Sprites
	Sprite* cursor;
	Sprite* menuSprite;
	//Points
	point<int> menuCoord;
	point<int> menuSize;
	point<int> optionCoord[6];
		int optionLen;
		int cursorIndex;
};

