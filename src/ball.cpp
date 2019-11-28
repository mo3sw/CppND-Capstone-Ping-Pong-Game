#include "ball.h"

Ball::Ball(int x, int y, int width, int height){
  sdlRect.x = x;
  initX = x;
  sdlRect.y = y;
  initY = y;
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

void Ball::BallReset(){
  sdlRect.x = initX;
  sdlRect.y = initY;
  srand(time(NULL));
  xVelocity = rand() % 2 + 2;
  if(rand()%2 == 0){
    xVelocity = -xVelocity;
  }
  yVelocity = rand() % 2 + 2;
  if(rand()%2 == 0){
    yVelocity = -yVelocity;
  }
}

bool Ball::Update(Player_Paddle p1, Player_Paddle p2){
  bool check = false;
  sdlRect.x += xVelocity;
  sdlRect.y += yVelocity;
  if(CheckCollision(*p1.getSDLRect())){
    xVelocity = -xVelocity;
  }
  else if(CheckCollision(*p2.getSDLRect())){
    xVelocity = -xVelocity;
  }
  else if(sdlRect.y < 0){
    sdlRect.y = 0;
    yVelocity = -yVelocity;
  }
  else if(sdlRect.y > 640 - sdlRect.h){
    sdlRect.y = 640 - sdlRect.h;
    yVelocity = -yVelocity;
  }
  else if(sdlRect.x < 0){
    BallReset();
    check = true;
  }
  else if(sdlRect.x - sdlRect.w > 640){
    BallReset();
    check = true;
  }
  return check;
}

bool Ball::PointInRect(int x, int y, SDL_Rect rec){
  if(x > rec.x && y > rec.y && x < rec.x + rec.w && y < rec.y + rec.h){
    return true;
  }
  return false;
}

bool Ball::CheckCollision(SDL_Rect rec){
  if(PointInRect(sdlRect.x, sdlRect.y, rec) || 
     PointInRect(sdlRect.x + sdlRect.w, sdlRect.y, rec) || 
     PointInRect(sdlRect.x, sdlRect.y + sdlRect.h, rec) || 
     PointInRect(sdlRect.x+ sdlRect.w, sdlRect.y + sdlRect.h, rec)){
    return true;
  }
  return false;
}