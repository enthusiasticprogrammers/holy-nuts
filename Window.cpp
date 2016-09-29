#include "Window.h"

Window::Window(const std::string &title, int width, int height) : _title(title), _width(width), _height(height)
{
  if (!init()) 
  {
    _closed = true;
  }
}

/* Lets perform some housekeeping.. **/
Window::~Window()
{
  SDL_DestroyWindow(_window); 
  SDL_Quit(); 
}
bool Window::init()
{
  bool isMade { true }; 
  
  if (SDL_INIT(SDL_INIT_VIDEO) != 0)
  {
    std::cerr << "Failed to initalize SDL. " << std::endl;
    isMade = false; 
    return isMade;
  }
  _window = SDL_CreateWindow(
  _title.c_str(), 
  SDL_WINDOWPOS_CENTERED, 
  SDL_WINDOWPOS_CENTERED,
  _width, _height, 
  SDL_WINDOW_RESIZABLE
  );
  
  if (_window == nullptr)
  {
  std::cerr << "Failed to create window." << std::endl;
  isMade = false; 
  return isMade; 
  }
  
  return isMade; 
  
}
void WIndow::pollEvents()
{
SDL_Event event;

if (SDL_PollEvent(&event))
{
  switch(event.type)
  {
    case SDL_QUIT:
    _closed = true;
    break;
    
    default: 
    break; 
  }

}

}
