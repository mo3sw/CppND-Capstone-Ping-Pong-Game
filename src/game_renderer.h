#ifndef GAME_RENDERER_H
#define GAME_RENDERER_H

#include "SDL.h"
#include "player_paddle.h"
#include "ball.h"

class Game_Renderer{
  public:
  	Game_Renderer(const std::size_t ScreenWidth, const std::size_t ScreenHeight, const std::size_t GridWidth, const std::size_t GridHeight);
  	~Game_Renderer();
  	void Render(Player_Paddle player_1, Player_Paddle player_2, Ball ball);
  	void UpdateWindowTitle();
  private:
  	SDL_Window *sdl_window;
	SDL_Renderer *sdl_renderer;

	const std::size_t screen_width;
	const std::size_t screen_height;
	const std::size_t grid_width;
	const std::size_t grid_height;




};

#endif