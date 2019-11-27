#include "game_renderer.h"
#include <iostream>

Game_Renderer::Game_Renderer(const std::size_t ScreenWidth, const std::size_t ScreenHeight, const std::size_t GridWidth, const std::size_t GridHeight) : screen_width(ScreenWidth),
      screen_height(ScreenHeight),
      grid_width(GridWidth),
      grid_height(GridHeight){ //Signature ends here
        
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    		std::cerr << "SDL could not initialize.\n";
    		std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  		}
        
        sdl_window = SDL_CreateWindow("Ping Pong Game", SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);
        if (sdl_window == nullptr) {
		    std::cerr << "Window could not be created.\n";
    		std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  		}
        
        sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
        if (sdl_renderer == nullptr) {
		    std::cerr << "Renderer could not be created.\n";
		    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  		}
}

Game_Renderer::~Game_Renderer(){
  SDL_DestroyWindow(sdl_window);
  SDL_Quit();
}

void Game_Renderer::Render(Player_Paddle player_1, Player_Paddle player_2, Ball ball){
  
  // Clear screen
  SDL_SetRenderDrawColor(sdl_renderer, 0x00, 0x00, 0x00, 0xFF);
  SDL_RenderClear(sdl_renderer);
  
  // Render Player 1
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  SDL_RenderFillRect(sdl_renderer, player_1.getSDLRect());
  
  // Render Player 2
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  SDL_RenderFillRect(sdl_renderer, player_2.getSDLRect());
  
  // Render Ball
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
  SDL_RenderFillRect(sdl_renderer, ball.getSDLRect());
  
  SDL_RenderPresent(sdl_renderer);
}

void Game_Renderer::UpdateWindowTitle(){
  
}