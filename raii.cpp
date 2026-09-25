#include <iostream>

int measureStringLength(const char *str) {
    int length = 0;

    while (*str != '\0') {
        str++;
        length++;
    }

    return length;
}

class Student {
public:
    int age;
    char gender;
    char *name;
    int backlogs;
    int year;
    char *college;
    char *university;
    char *course;

    Student(int age, char gender,
            const char *name,
            int backlogs,
            int year,
            const char *college,
            const char *university,
            const char *course)
        : age(age),
          gender(gender),
          name(new char[measureStringLength(name) + 1]),
          backlogs(backlogs),
          year(year),
          college(new char[measureStringLength(college) + 1]),
          university(new char[measureStringLength(university) + 1]),
          course(new char[measureStringLength(course) + 1])
    {
        int i = 0;
        while (name[i] != '\0') {
            this->name[i] = name[i];
            i++;
        }
        this->name[i] = '\0';

        i = 0;
        while (college[i] != '\0') {
            this->college[i] = college[i];
            i++;
        }
        this->college[i] = '\0';

        i = 0;
        while (university[i] != '\0') {
            this->university[i] = university[i];
            i++;
        }
        this->university[i] = '\0';

        i = 0;
        while (course[i] != '\0') {
            this->course[i] = course[i];
            i++;
        }
        this->course[i] = '\0';
    }

    ~Student() {
        std::cout << "Student destructor called\n";

        delete[] name;
        delete[] college;
        delete[] university;
        delete[] course;
    }
};


void initStudent(int age, char gender,
                 const char *name,
                 int backlogs,
                 int year,
                 const char *college,
                 const char *university,
                 const char *course)
{
     try {
        Student s(
            age,
            gender,
            name,
            backlogs,
            year,
            college,
            university,
            course
        );

        std::cout << "Student initialized\n";

        // after Student has been fully constructed
        throw 20;// over here using the throw to throw and stop the code wohooo!!!!!!!!
     }
     catch (int e) { // catch for catching the throw
        std::cout << "Caught exception: " << e << '\n';
    }

    // we can just not try catch over here but it will terminate as soon as it throws but still destructor will deallocate before program ends
}

int main() {

    initStudent(
        20,
        'M',
        "Tanush Roy",
        0,
        2,
        "Bharati Vidyapeeth",
        "GGSIPU",
        "Electrical and Electronics Engineering"
    );

    return 0;
}
