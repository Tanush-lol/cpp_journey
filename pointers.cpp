#include <iostream>

int main(){
  int minutesPerHour = 60;
  std::cout<< minutesPerHour;
  std::cout<< &minutesPerHour <<'\n';

  int *ptr = &minutesPerHour;
  std::cout<<ptr <<'\n';
  return 0;
}
