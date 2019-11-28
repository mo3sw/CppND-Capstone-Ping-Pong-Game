#include "controller.h"

Controller::Controller(int keys_type){
  if(keys_type != 1 && keys_type != 2){
  	this->keys_type = -1;
  }
  else{
    this->keys_type = keys_type;
  }
}

Controller::~Controller(){
  
}

void Controller::HandleInput(bool& running, Player_Paddle& player1, Player_Paddle& player2) const{
  SDL_Event e;
    while(SDL_PollEvent(&e)){
      if(e.type == SDL_QUIT){
          running = false;
      }
    }
  const Uint8 *keystates = SDL_GetKeyboardState( NULL );
  int y;
  if(keystates[SDL_SCANCODE_W]){
    std::cout << "Here1\n";
    y = player1.getY();
    y -= 5;
    player1.setY(y);
  }
  if(keystates[SDL_SCANCODE_S]){
//     std::cout << "Here2\n";
    y = player1.getY();
    y += 5;
    player1.setY(y);
  }
//   std::cout << "Here3\n";
  if(keystates[SDL_SCANCODE_UP]){
    y = player2.getY();
    y -= 5;
    player2.setY(y);
  }
//   std::cout << "Here4\n";
  if(keystates[SDL_SCANCODE_DOWN]){
    y = player2.getY();
    y += 5;
    player2.setY(y);
  }
//   std::cout << "Here5\n";
}

// void Controller::HandleInput(bool& running, Player_Paddle& player1, Player_Paddle& player2) const{
//   SDL_Event e;
//     while(SDL_PollEvent(&e)){
//         if(e.type == SDL_QUIT){
//           running = false;
//         }
//         else if(e.type == SDL_KEYDOWN){
//           switch(e.key.keysym.sym){
//             int y;
//             case SDLK_s:
//               y = player1.getY();
//               y++;
//               player1.setY(y);
// //               std::cout << "Handle input type: " << keys_type << " button s" << std::endl;
//               break;
//             case SDLK_w:
//               y = player1.getY();
//               y--;
//               player1.setY(y);
// //               std::cout << "Handle input type: " << keys_type << " button w" << std::endl;
//               break;
//             case SDLK_UP:
//             	y = player2.getY();
//            	 y--;
//            	 player2.setY(y);
// //            	   std::cout << "Handle input type: " << keys_type << " button up" << std::endl;
//            	 break;
//           case SDLK_DOWN:
//             y = player2.getY();
//             y++;
//             player2.setY(y);
// //               std::cout << "Handle input type: " << keys_type << " button down" << std::endl;
//             break;
//           }
//         }
//     }
// }

// void Controller::HandleInput(bool& running, Player_Paddle& player) const{
//   if(this->keys_type == 1){
//     SDL_Event e;
//     while(SDL_PollEvent(&e)){
//         if(e.type == SDL_QUIT){
//           running = false;
//         }
//         else if(e.type == SDL_KEYDOWN){
//           switch(e.key.keysym.sym){
//             int y;
//             case SDLK_s:
//               y = player.getY();
//               y++;
//               player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button s" << std::endl;
//               break;
//             case SDLK_w:
//               y = player.getY();
//               y--;
//               player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button w" << std::endl;
//               break;
//           }
//         }
//       return;
//     }
//   }
//   else if(this->keys_type == 2){
//         SDL_Event e;
//     while(SDL_PollEvent(&e)){
//         if(e.type == SDL_QUIT){
//           running = false;
//         }
//         else if(e.type == SDL_KEYDOWN){
//           switch(e.key.keysym.sym){
//             int y;
//             case SDLK_UP:
//             y = player.getY();
//             y--;
//             player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button up" << std::endl;
//             break;
//           case SDLK_DOWN:
//             y = player.getY();
//             y++;
//             player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button down" << std::endl;
//             break;
//           }
//         }
//       return;
//     }
//   }
//     else{
//       std::cout << "Invalid input keys type. Need Developer's attention!" << std::endl;
//     }
// }

// void Controller::HandleInput2(bool& running, Player_Paddle& player) const{
// //   std::cout << "HandleInput 2" << std::endl;
//   SDL_Event e;
//     while(SDL_PollEvent(&e)){
//         if(e.type == SDL_QUIT){
//           running = false;
//         }
//         else if(e.type == SDL_KEYDOWN){
//           std::cout << "HandleInput 2 " << e.key.keysym.sym << std::endl;
//           switch(e.key.keysym.sym){
//             int y;
//             case SDLK_UP:
//             y = player.getY();
//             y--;
//             player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button up" << std::endl;
//             break;
//           case SDLK_DOWN:
//             y = player.getY();
//             y++;
//             player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button down" << std::endl;
//             break;
//           }
//         }
//       return;
//     }
// }

// void Controller::HandleInput1(bool& running, Player_Paddle& player) const{
// //   std::cout << "HandleInput 1" << std::endl;
//   SDL_Event e;
//     while(SDL_PollEvent(&e)){
//         if(e.type == SDL_QUIT){
//           running = false;
//         }
//         else if(e.type == SDL_KEYDOWN){
//           std::cout << "HandleInput 1 " << e.key.keysym.sym << std::endl;
//           switch(e.key.keysym.sym){
//             int y;
//             case SDLK_w:
//             y = player.getY();
//             y--;
//             player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button up" << std::endl;
//             break;
//           case SDLK_s:
//             y = player.getY();
//             y++;
//             player.setY(y);
//               std::cout << "Handle input type: " << keys_type << " button down" << std::endl;
//             break;
//           }
//         }
//       return;
//     }
// }