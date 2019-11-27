#ifndef PLAYER_PADDLE_H
#define PLAYER_PADDLE_H

#include "SDL.h"

class Player_Paddle{
  public:
  	Player_Paddle(int x, int y, int width, int height);
  	~Player_Paddle();
  	void setX(int x);
  	void setY(int y);
  	int getY();
  	void setWidth(int width);
  	void setHeight(int height);
  	SDL_Rect* getSDLRect();
  private:
  	SDL_Rect sdlRect;
};

#endif