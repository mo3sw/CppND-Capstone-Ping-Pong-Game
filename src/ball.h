#ifndef BALL_H
#define BALL_H

#include "SDL.h"
#include "player_paddle.h"
#include <stdlib.h>
#include <ctime>

class Ball{
  public:
  	Ball(int x, int y, int width, int height);
  	~Ball();
  	void setX(int x);
  	void setY(int y);
  	void setWidth(int width);
  	void setHeight(int height);
  	void BallReset();
  	bool Update(Player_Paddle p1, Player_Paddle p2);
  	SDL_Rect* getSDLRect();
  private:
  	SDL_Rect sdlRect;
  	int initX;
  	int initY;
  	int xVelocity = 0;
  	int yVelocity = 0;
  	bool PointInRect(int x, int y, SDL_Rect rec);
  	bool CheckCollision(SDL_Rect rec);
};

#endif