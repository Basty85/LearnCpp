#include <iostream>
using namespace std;

int main() {
  //pointer
  int arr[] = {10,20,30,40,50,60};
  cout << &arr << " " << &arr + 1 << " " << arr << endl;
  ptrdiff_t arrSize = *(&arr + 1) - arr;
  cout << "The length of the array is: " << arrSize << "\n\n";
  
  
  
  
  
  
  //begin end function (pointers)
  int arr3[] = {10,20,30,40,50,60};
  int arrSize3 = end(arr3) - begin(arr3);
  cout << "begin(arr3): " << begin(arr3) << " end(arr3): " << end(arr3) << " arrSize3: " << arrSize3 << "\n\n";



  //sizeof
  int arr2[] = {10,20,30,40,50,60};
  int arrSize2 = sizeof(arr2)/sizeof(arr2[0]);
  cout << "sizeof(arr2): " << sizeof(arr2) << endl;
  cout << "sizeof(arr2[0]): " << sizeof(arr2[0]) << endl;
  cout << "The size of the array is: " << arrSize2 << "\n\n";
  
  return 0;
}