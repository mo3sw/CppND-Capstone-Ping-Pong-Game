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
  if(this->keys_type == 0){
    SDL_Event e;
    while(SDL_PollEvent(&e)){
        if(e.type == SDL_QUIT){
          running = false;
        }
        else if(e.type == SDL_KEYDOWN){
          switch(e.key.keysym.sym){
            int y;
            case SDLK_s:
              y = player.getY();
              y++;
              player.setY(y);
              break;
            case SDLK_w:
              y = player.getY();
              y--;
              player.setY(y);
              break;
          }
        }
    }
  }
  else if(this->keys_type == 1){
        SDL_Event e;
    while(SDL_PollEvent(&e)){
        if(e.type == SDL_QUIT){
          running = false;
        }
        else if(e.type == SDL_KEYDOWN){
          switch(e.key.keysym.sym){
            int y;
            case SDLK_UP:
            y = player.getY();
            y--;
            player.setY(y);
            break;
          case SDLK_DOWN:
            y = player.getY();
            y++;
            player.setY(y);
            break;
          }
        }
      return;
    }
  }
    else{
      std::cout << "Invalid input keys type. Need Developer attention!" << std::endl;
    }
}