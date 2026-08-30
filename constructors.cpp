#include <iostream>

class Box{
  //defualt constructor
  Box(){}
  
  //init a cube
  explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {}

  //init a box with custom dimensions
  Box(int width,int length,int height):m_width(width),m_length(length), m_height(height)
  {}

};

int main(){
  return 0;
}
