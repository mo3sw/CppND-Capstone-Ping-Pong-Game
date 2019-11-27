#include "ball.h"

Ball::Ball(int x, int y, int width, int height){
  sdlRect.x = x;
  sdlRect.y = y;
  sdlRect.w = width;
  sdlRect.h = height;
}

Ball::~Ball(){
  
}

void Ball::setX(int x){
  sdlRect.x = x;
}

void Ball::setY(int y){
  sdlRect.y = y;
}

void Ball::setWidth(int width){
  sdlRect.w = width;
}

void Ball::setHeight(int height){
  sdlRect.h = height;
}

SDL_Rect* Ball::getSDLRect(){
  return &this->sdlRect;
}