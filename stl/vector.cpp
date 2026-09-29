#include <iostream>
#include <vector>

void printVector(std::vector<int> v){
  for(int i=0; i < v.size(); i++){
    std::cout<<i<<" - "<< v[i] <<"|";
  }
    std::cout<<'\n';
}

void popBackSafety(std::vector<int> *v){
  if(v->empty() == true){
    std::cout<<"The vector is empty "<<'\n';
  }
  else{
    v->pop_back();
  }
}

int main(){

  std::vector<int> marks;
  std::vector<int> miles(10);
  std::vector<int> distances(15,5);// every index is init with 0, 15 blocks served
                              //
  // std::cout<<*distances.begin()<<'\n';
  printVector(distances);
  distances.push_back(10); // inserts a new element,basically adds indexing 
  printVector(distances);
  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  distances.push_back(11);
  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  distances.push_back(12);
  printVector(distances);

  popBackSafety(&distances);
  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  popBackSafety(&distances);
  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  popBackSafety(&distances);
  popBackSafety(&marks);
  // marks.pop_back(); // will return an error on runtime
  printVector(distances);

  std::cout<<distances.at(9)<<'\n';

  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  distances.reserve(50);
  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  distances.reserve(49);// won't go below 50 now nga
  std::cout<<"capacity : "<<distances.capacity()<<'\n';
  std::cout<<"max_size : "<<marks.max_size()<<'\n';

  std::cout<<"size : "<<distances.size()<<'\n';
  std::cout<<" [0] :"<<distances.at(0)<<'\n';
  distances.insert(distances.begin(),19);
  std::cout<<"size : "<<distances.size()<<'\n';
  std::cout<<" [0] :"<<distances.at(0)<<'\n';

  marks.swap(distances);
  std::cout<<"distances :";
  printVector(distances);
  std::cout<<"marks :";
  printVector(marks);

  distances.erase(distances.begin(),distances.end());
  printVector(distances);

  //create an iterator 
  std::vector<int>::iterator it = marks.begin(); // iterator 
  std::cout<<*it<<'\n';
  it++;
  std::cout<<*it<<'\n';

  //2d array
  //
  //******* VVVVVVery IMportant shi
  std::vector<std::vector<int>> salaryList(10,std::vector<int>(4,0));

  std::vector<std::vector<int>> arr(4);
  arr[0]= std::vector<int>(1);
  arr[1]= std::vector<int>(2);
  arr[2]= std::vector<int>(4);
  arr[3]= std::vector<int>(3);

  int rowcount = arr.size();
  int columnCount = arr[1].size();

  return 0;
}
