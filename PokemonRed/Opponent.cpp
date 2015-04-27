#include "Opponent.h"

Opponent::Opponent()
	:Trainer(Trainer::FRONT)
{
	std::stringstream ss;
	ss << "images/" << (side == Trainer::BACK ? "back" : "front") << "/4.png";
	Sprite* mon = new Sprite(ss.str());
	mon->SetPosition(110, 10);
}

Opponent::~Opponent()
{
}
