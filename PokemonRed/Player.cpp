#include "Player.h"
#include "Common.h"

Player::Player()
	: Trainer(Trainer::BACK)
{
	std::stringstream ss;
	ss << "images/" << (side == Trainer::BACK ? "back" : "front") << "/1.png";
	
	image = LoadImage(ss.str());
	SetSrcFrame(0, 0, 32, 32);
	SetDstFrame(0, 0, DEFAULT_WIN_W, DEFAULT_WIN_H);

}

Player::~Player()
{
}
