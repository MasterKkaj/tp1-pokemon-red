#pragma once
#include "Sprite.h"

class SceneBG :
	public Sprite
{
public:
	SceneBG();
	~SceneBG();
	void ShowMenu(bool show = false);
	void SetCursor() {}
protected:
	Sprite* battleBG;
private:
	Sprite* battleMenu;
};

