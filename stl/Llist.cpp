#include<iostream>
#include<list>

void printLlist(std::list<int> v){
  for(auto i=v.begin(); i != v.end(); ++i){ // it returns an iterator not a pointer
    std::cout<<*i<<" ";
  }
    std::cout<<'\n';
}
// that's it basically, everthing is similar to Vector and also u can do your thing with generics

int main(){

  std::list<int> mylist(4,0);
  std::cout<<*mylist.begin()<<'\n';
  std::cout<<*mylist.end()<<'\n';// figure out why it renders this chod bhangda
  std::cout<<mylist.size()<<'\n';
  std::cout<<mylist.front()<<'\n';
  std::cout<<mylist.back()<<'\n';

  printLlist(mylist);
  mylist.push_back(10);
  mylist.push_back(14);
  mylist.push_back(12);

  std::cout<<mylist.size()<<'\n';

  printLlist(mylist);

  return 0;
}
