#include "player_paddle.h"

Player_Paddle::Player_Paddle(int x, int y, int width, int height){
  sdlRect.x = x;
  sdlRect.y = y;
  sdlRect.w = width;
  sdlRect.h = height;
}

Player_Paddle::~Player_Paddle(){
  
}

void Player_Paddle::setX(int x){
  sdlRect.x = x;
}

void Player_Paddle::setY(int y){
  sdlRect.y = y;
}

void Player_Paddle::setWidth(int width){
  sdlRect.w = width;
}

void Player_Paddle::setHeight(int height){
  sdlRect.h = height;
}

SDL_Rect* Player_Paddle::getSDLRect(){
  return &(this->sdlRect);
}