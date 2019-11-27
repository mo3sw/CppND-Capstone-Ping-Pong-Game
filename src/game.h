#ifndef GAME_H
#define GAME_H

#include "SDL.h"
#include "player_paddle.h"
#include "ball.h"

class Game{
  public:
  	Game();
  	~Game();
  	void Run();
  	void GetScore();
  private:
  	Player_Paddle p1{0,0,0,0};
  	Player_Paddle p2{0,0,0,0};
    Ball ball{0,0,0,0};
  	int score{0};
  	void Update();
};

#endif