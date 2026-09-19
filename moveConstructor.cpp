#include <iostream>
// // basically a moveconstructor moves rvalue to an lvalue
// //
// // NOW WHAT IS A LVALUE 
// //  refers to a specific object in memory.
// //  What is RVLUE 
// //  memory that can't be refered to example return x+y; 
//
// class MemoryBlock{
//   public:
//    explicit MemoryBlock(size_t length): _length(length), _data(new int[length])// this is known as the member init list
//                                                                                // we need this because
//   //actually constructs/initializes the members directly. for example if we want to init a value to const vaalue
//   //
// //   //class Person {
// //     const int age;
// //
// // public:
// //     Person(int a) {
// //         age = a;  // ❌
// //     }
// // };
//   //
//   {
//
//       std::cout << "In MemoryBlock(size_t). length = "
//                 << _length << "." << std::endl;
//    }
//
// };
//
class Smthng{
  public:
    int *_data;
    int _length;// this is declaring the variables

    Smthng(int length):_data(new int[length]),_length(length){
      std::cout<<"normal constructor was called "<<'\n';
    }

    Smthng(Smthng&& other)
        : _data(nullptr)
        , _length(0)// this is init
    {
      _data = other._data;
      _length = other._length;

      other._data = nullptr;
      other._length = 0;

      std::cout<<"move constructor was called "<<'\n';
    }

    Smthng& operator = (Smthng&& other){
      std::cout<<"move assigment called"<<'\n';
   if (this != &other)
   {
      // Free the existing resource.
      delete[] _data;

      // Copy the data pointer and its length from the
      // source object.
      _data = other._data;
      _length = other._length;

      // Release the data pointer from the source object so that
      // the destructor does not free the memory multiple times.
      other._data = nullptr;
      other._length = 0;
   }
   return *this;
    }




};

int main(){

  Smthng s1(10);
  Smthng s2(5);
  s2 = std::move(s1); //is wrong 
//   //What std::move(s1) actually does
// It basically tells C++:
// "Treat s1 as something whose resources can be moved from."
// So:
// s2 = std::move(s1);
// makes C++ look for:
// Smthng& operator=(Smthng&& other);


  return 0;

}
