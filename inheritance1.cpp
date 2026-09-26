#include <iostream>

class Person {
public:
    int age;

    Person(){
      std::cout<<"default constructor called "<<'\n';
    }
    Person(int age) : age(age) {
        std::cout << "Person constructor\n";
    }

    virtual void breathe() {
        std::cout << "Person breathing\n";
    }

    ~Person() {
        std::cout << "Person destructor\n";
    }
};

class Student : public Person {
public:
    int year;

    Student(int age, int year) : Person(age), year(year)  //  important
            {
        std::cout << "Student constructor\n";
    }

    void study() {
        std::cout << "Student studying\n";
    }

    ~Student() {
        std::cout << "Student destructor\n";
    }
};

class collegeStudent : public Person{
  public:
    void breathe() override {
      std::cout<<"new breathe called"<<'\n';
    }

};

int main() {
    Student s(20, 2);

    s.breathe();  
    s.study();   

    collegeStudent c;
    c.breathe();

    std::cout << s.age << '\n';
    std::cout << s.year << '\n';
}
