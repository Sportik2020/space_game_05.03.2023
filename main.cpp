#include "settings.h"
#include "game.h"
#include "meteor.h"
using namespace sf; 
int main() 
{ 
 srand(time(nullptr));  

 Game game;
 game.play();

 
 return 0; 
}