#include <iostream>
#include <cmath>
#include "sample.hpp"
#include <string>
#include <vector>
// using namespace std;



int main ()
{
  std::vector<int> myVect(12, 0);
  std::vector<int>::iterator it;

  it = myVect.begin();

  it++;

  // std::cout << *it << std::endl;
  // *it = 1000;
  // std::cout << *it << std::endl;


  // for (size_t i = 0; i < myVect.size(); i++)
  // {
  //   std::cout << myVect[i] << std::endl;
  // }


  return 0;
}
