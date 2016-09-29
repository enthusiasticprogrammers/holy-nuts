#pragma once // objective: include only in one source file. 
#ifndef WINDOW_H_
#define WINDOW_H_

#include <string> // strings
#include <SDL.h>  // SDL Lib

class Window {

public:
Window(const std::string &title, int width, int height);
~Window();

void pollEvents();
inline bool isClosed() const { return _closed; }

private:
  bool init();
  
  / ** Data Members start here ** / 
  std::string _title;
  const int _width = 800, _height = 600; // 800 x 600 window dimensions
  bool _closed = false; 
  /** End Data Members **/
  
  SDL_Window* window = nullptr; 

};

#endif
