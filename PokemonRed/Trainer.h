#pragma once

#include "Sprite.h"
#include "Common.h"

class Trainer :
	public Sprite
{
public:
	enum TrainerSide { FRONT, BACK };

	Trainer();
	Trainer(TrainerSide side);

	virtual ~Trainer();

protected:
	TrainerSide side;
};

