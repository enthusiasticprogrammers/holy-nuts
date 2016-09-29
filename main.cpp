#include <iostream> // std::cout, std::cin, std::cerr
#include <SDL.h> // main components for rendering 2D-Space Game
#include "Window.h" // Construct Window for SDL GAME

int main(int argc, char** argv) // formal parameters meant for passing in data in command line, useful for testing c++ standard. 
{

/** _Construct game window **/

const int RESOLUTION_X = 800, RESOLUTION_Y = 600;
const string MAIN_TITLE = "Holy Nuts! Menu";

Window mainMenu(MAIN_TITLE, RESOLUTION_X, RESOLUTION_Y);

while (!mainMenu.isClosed())
{
 // perform main menu event here. 
 mainMenu.pollEvents();
}

return 0;
}
