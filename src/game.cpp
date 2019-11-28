#include "game.h"

Game::Game(){
  
}

Game::~Game(){
  
}

void Game::Run(){
  Uint32 title_timestamp = SDL_GetTicks();
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;
  int frame_count = 0;
  bool running = true;
  
  while(running){
    frame_start = SDL_GetTicks();
    
    // Input
//     player1_controller.HandleInput(running, p1);
//     player2_controller.HandleInput2(running, p2);
    player1_controller.HandleInput(running, p1, p2);
    
    // Should Update the locations somewhere
    
    //Render
    renderer.Render(p1, p2, ball);
    
    frame_count++;
    frame_duration = frame_end - frame_start;
    if (frame_end - title_timestamp >= 1000) {
//       renderer.UpdateWindowTitle(score, frame_count);
      frame_count = 0;
      title_timestamp = frame_end;
    }

    // If the time for this frame is too small (i.e. frame_duration is
    // smaller than the target ms_per_frame), delay the loop to
    // achieve the correct frame rate.
    std::size_t target_frame_duration = 1000/60;
    if (frame_duration < target_frame_duration) {
      SDL_Delay(target_frame_duration - frame_duration);
    }
  }
}

void Game::GetScore(){
  
}

void Game::Update(){
  
}