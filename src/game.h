#ifndef GAME_H
#define GAME_H

#include <chrono>
#include <thread>
#include "SDL.h"
#include "player_paddle.h"
#include "ball.h"
#include "controller.h"
#include "game_renderer.h"

class Game{
  public:
  	Game();
  	~Game();
  	void Run();
  	void GetScore();
  private:
  	Player_Paddle p1{20, 0, 20, 50};
  	Player_Paddle p2{600, 0, 20, 50};
    Ball ball{315, 315, 10, 10};
  	Controller player1_controller{1};
  	Controller player2_controller{2};
//   	constexpr std::size_t kFramesPerSecond{60};
//   	constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
//   	constexpr std::size_t kScreenWidth{640};
//   	constexpr std::size_t kScreenHeight{640};
//   	constexpr std::size_t kGridWidth{32};
//   	constexpr std::size_t kGridHeight{32};
  	Game_Renderer renderer{640, 640, 32, 32};//kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  	
  	int score{0};
  	void Update();
};

#endif