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
      name(new char[nameLength+1]),
      nationality(new char[nationalityLength+1])
  {
    for(int i = 0; i < nameLength;i++){
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

void initPerson(int age, char gender,
                const char *name,
                const char *nationality)
{
    try {
        Person p(
            age,
            gender,
            name,
            measureStringLength(name),
            nationality,
            measureStringLength(nationality)
        );

        throw 20;
    }
    catch (int e) {
        std::cout << "Caught: " << e << '\n';
    }
}


int main(){

  initPerson(20,'M',"Tanush Roy","Indian");

  return 0;
}

// so we are throwing 20 right after init of class which should stop the code, the catch tries to find that but before that raii deletes the memory if we didn't it would leak the memory?
