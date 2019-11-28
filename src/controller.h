#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>

#include "SDL.h"
#include "player_paddle.h"

class Controller{
  public:
  	Controller(int keys_type);
  	~Controller();
//   	void HandleInput(bool& running, Player_Paddle& player) const;
//   	void HandleInput1(bool& running, Player_Paddle& player) const;
//  	void HandleInput2(bool& running, Player_Paddle& player) const;
 	void HandleInput(bool& running, Player_Paddle& player1, Player_Paddle& player2) const;
  private:
  	int keys_type;
};

#endif