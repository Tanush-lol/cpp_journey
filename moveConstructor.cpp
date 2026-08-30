#include <iostream>
// basically a moveconstructor moves rvalue to an lvalue

class MemoryBlock{
  MemoryBlock(MemoryBlock&& other: _data(nullptr)){

  }
};

int main(){

}
