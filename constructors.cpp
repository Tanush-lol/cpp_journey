#include <iostream>

class Box{
  private:
    int m_width;
    int m_height;
    int m_length;
  public:
  //defualt constructor
  Box(){
    std::cout<<"entered the defualt constructor"<<'\n';
  }
  
  //init a cube
  explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {
    std::cout<<"entered the cube constructor"<<'\n';
    }

  //init a box with custom dimensions
  Box(int width,int length,int height):m_width(width),m_length(length), m_height(height)
  {
    std::cout<<"entered the cuboid constructor"<<'\n';
  }

  int volume(){
    int vol = (m_width*m_length)*m_height;
    return vol;
  }
};

int main(){
  Box a;
  Box b{10,11,10};
  return 0;
}
