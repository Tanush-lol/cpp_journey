#include <iostream>

class integer{
  private:

  public:
    int l;
    void operator+(const int& l){
      std::cout<<"the value of l is :"<<l<<'\n';
      l=l+10;
      std::cout<<"the value of l after increment is :"<<l<<'\n';
    }
};

int main(){
  int a = 10;
  int b = 9;
  std::cout<<"b:"<<b<<'\n';

  integer c;
  c.l = a+b;
  std::cout<<"c.l:"<<c.l<<'\n';
  c.l +10;
  std::cout<<"c.l:"<<c.l<<'\n';
  c + 10;
  c+1;
  return 0;

}
