#include <iostream>
using namespace std;

void printArray(const int a[], int len) {
  cout <<"[";

  for (int i =0; i < len; ++i) {
    cout << a[i] << ",";
  }
  cout << "]" << endl;
}

int main (){
  int numbers[] = {1, 2, 3};
  printArray(numbers, 3);
}
