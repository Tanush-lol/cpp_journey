#include <iostream>

class Box{
  public:
    Box (const Box&); //copy constructor declaration
};

int main(){
  return 0;
}

/* 
 Suppose we have Box a; Box is a class now if we do 
 Box& ref = a;
 and ref.method() it will be same as a.method()

  int a = 1;
  int& ref = a;
  std::cout<<ref;

  is valid
  */
/*
 when we write 
 */
