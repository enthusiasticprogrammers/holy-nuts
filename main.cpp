#include <iostream> // std::cout, std::cin, std::cerr
#include <SDL.h> // main components for rendering 2D-Space Game
#include "Window.h" // Construct Window for SDL GAME

int main(int argc, char** argv)
{

/** _Construct game window **/

const int RESOLUTION_X = 800, RESOLUTION_Y = 600;
const string MAIN_TITLE = "Holy Nuts! Menu";

Window mainMenu(MAIN_TITLE, RESOLUTION_X, RESOLUTION_Y);

while (!mainMenu.isClosed())
{
 // perform main menu event here. 
}

return 0;
}
