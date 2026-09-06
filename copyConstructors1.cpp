#include <iostream>
//
// class Box{
//   public:
//     int x;
//     int y;
//     int z;
//
//     Box(int a, int b, int c){
//       x = a;
//       y = b;
//       z = c;
//     }
//
// };
// In the above code you can see that in the constructor we call in int x,y,z hence they are created as 
// variables,but when we use pointers they might end up refering the same memory address and hence it would 
// create a whole lotta new problem 

// class Box{
//   public:
//     int *x,*y,*z;
//     Box(int a,int b,int c){
//       x = new int(a);
//       y = new int(b);
//       z = new int(c);
//
//       std::cout<<"address after calling constructor"<<x<<" "<<y<<" "<<z<<'\n';
//     }
// };
//
// in the above code you can see that they both will ref to the same memory address and hence we gotta fix 
// this shit
// we do this by using copy constructors to make the coppied variables store on different addresses

class Box{
  public:
    int *x;
    int *y;
    int *z;

    Box(int a,int b, int c){
      x = new int(a);
      y = new int(b);
      z = new int(c);
       std::cout<<"address after calling constructor "<<x<<" "<<y<<" "<<z<<'\n';
    }

    Box(const Box& other){
      x = new int(*other.x);
      y = new int(*other.y);
      z = new int(*other.z);
    }

};

int main(){
  Box a(14,2,9);
  // std::cout<<&a.x<<" "<<&a.y<<" "<<&a.z<<'\n';

  // Box b(0,0,0); // we call the normal constructor by this
  Box b = a;       // we call the copy constructor by this
      std::cout<<"address after init memory "<<b.x<<" "<<b.y<<" "<<b.z<<'\n';
  return 0;
}




