#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>

#include "SDL.h"
#include "player_paddle.h"

class Controller{
  public:
  	Controller(int keys_type);
  	~Controller();
  	void HandleInput(bool& running, Player_Paddle& player) const;
  private:
  	int keys_type;
};

#endif