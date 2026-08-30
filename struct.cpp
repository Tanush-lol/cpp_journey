#include <iostream>

struct dateOfBirth{ // here it means we have created a type
  int date;
  int month;
  int year;
}/*dateOfBirth*/; // here it means we have created a struct data 
struct Person{
  const char *name;
  int age;
};

int main(){
  dateOfBirth.date = 30;
  dateOfBirth.month = 11;
  dateOfBirth.year = 2005;

  std::cout<<dateOfBirth.date<<'\n';
  std::cout<<dateOfBirth.month<<'\n';
  std::cout<<dateOfBirth.year<<'\n';

  // dateOfBirth dated;
  // dated.date =30;
  //
  // std::cout<<dated.date<<'\n';

  return 0;
}
