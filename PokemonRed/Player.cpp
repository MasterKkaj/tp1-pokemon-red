#include "Player.h"


Player::Player()
	: Trainer(Trainer::BACK)
{
	std::stringstream ss;
	ss << "images/" << (side == Trainer::BACK ? "back" : "front") << "/1.png";
	Sprite* mon = new Sprite(ss.str());
	mon->SetPosition(20, 65);
}

Player::~Player()
{

}
