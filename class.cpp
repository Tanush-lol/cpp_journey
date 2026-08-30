#include <iostream>

class Car{
  public:
    const char *brand; //these are the states/ attributes
    void display(){// function is it's behavior 
      std::cout<<"car brand: "<<brand<<'\n';
    }
};

int main(){
  Car car1;
  car1.brand = "Toyota";
  car1.display();

  return 0;

}
