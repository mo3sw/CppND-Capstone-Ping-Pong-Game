#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <chrono>
#include <thread>
#include "game_renderer.h"
#include "player_paddle.h"
#include "ball.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};
  
//   Game_Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  
//   Controller player1_controller{0};
//   Controller player2_controller{1};
  
//   Player_Paddle p1(20, 0, 20, 50);
//   Player_Paddle p2(600, 0, 20, 50);
//   Ball ball(315, 315, 10, 10);
  
//   renderer.Render(p1, p2, ball);
  std::this_thread::sleep_for(std::chrono::milliseconds(10000));
  
  return 0;
}

#endif