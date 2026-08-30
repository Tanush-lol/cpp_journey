#include <iostream>

int main(){
  int minutesPerHour = 60;
  std::cout<<minutesPerHour<<'\n';
  int & ref = minutesPerHour;
  std::cout<<ref<<'\n';

  ref = 19;
  std::cout<<minutesPerHour<<'\n';
  std::cout<<ref<<'\n';

  ref = 'a';
  std::cout<<minutesPerHour<<'\n';
  std::cout<<ref<<'\n';


  return 0;
}
