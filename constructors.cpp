#include <iostream>

class idk{
  private:
    const char *b;
  public:
    const char *number;
    
    void l(){
      std::cout<<"called "<<number<<'\n';
    }
    idk (const char *x :b(move(x))){
      cout<<"Move constructor called"<<endl;
    }
    idk(const char *x){//parameterized constructor
      std::cout<<"constructor called"<<'\n';
      number = x;
    }
    idk(idk& nigger){
      number = nigger.number;// see that the number is copied from the value and then added over here
    }
};

int main(){
  idk a("hello world");
  a.l();
  idk a1(a);
  a1.l();
  a1(move(a));
  return 0;
}
