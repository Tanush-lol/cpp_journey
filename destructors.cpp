#include <iostream>

class Person{
  public:
    int age;
    char gender;
    char *name;
    char *nationality;

    Person(int age,char gender,const char *name,int nameLength,const char *nationality,int nationalityLength)
      :age(age),
      gender(gender),
      name(new char[nameLength]),
      nationality(new char[nationalityLength])
  {
    for(int i = 0; i < nameLength+1;i++){
      this->name[i] = name [i];
    }

    }

    ~Person(){
      delete[] name;
      delete[] nationality;
    }

};

int measureStringLength(const char *str){
  int length = 0;
  while(*str != '\0'){
    str++;
    length++;
  }
  return length;
}

void initPerson(int age,char gender,const char *name,const char *nationality){
  Person(age,gender,name,measureStringLength(name),nationality,measureStringLength(nationality));
}


int main(){

  initPerson(20,'M',"Tanush Roy","Indian");

  return 0;
}
