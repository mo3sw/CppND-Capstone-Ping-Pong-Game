#ifndef BALL_H
#define BALL_H

#include "SDL.h"

class Ball{
  public:
  	Ball(int x, int y, int width, int height);
  	~Ball();
  	void setX(int x);
  	void setY(int y);
  	void setWidth(int width);
  	void setHeight(int height);
  	SDL_Rect* getSDLRect();
  private:
  	SDL_Rect sdlRect;
};

#endif