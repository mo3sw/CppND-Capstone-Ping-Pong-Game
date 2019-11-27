#include "controller.h"

Controller::Controller(int keys_type){
  if(keys_type != 0 && keys_type != 1){
  	this->keys_type = -1;
  }
  else{
    this->keys_type = keys_type;
  }
}

Controller::~Controller(){
  
}

void Controller::HandleInput(bool& running, Player_Paddle& player) const{
  SDL_Event e;
  while(SDL_PollEvent(&e)){
    if(this->keys_type == 0){
      if(e.type == SDL_QUIT){
        running = false;
      }
      else if(e.type == SDL_KEYDOWN){
        switch(e.key.keysym.sym){
          case SDLK_s:
            break;
          case SDLK_w:
            break;
        }
      }
    }
    else if(this->keys_type == 1){
      if(e.type == SDL_QUIT){
        running = false;
      }
      else if(e.type == SDL_KEYDOWN){
        switch(e.key.keysym.sym){
          case SDLK_UP:
            break;
          case SDLK_DOWN:
            break;
        }
      }
    }
    else{
      std::cout << "Invalid input keys type. Need Developer attention!" << std::endl;
    }
  }
}