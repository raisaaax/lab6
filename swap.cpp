#include <iostream>
using namespace std;

void swap(int array[], int pos1, int pos2){
  int temp = array[pos1];
  array[pos1] = array[pos2];
  array[pos2] = temp;
}

void printArray(const int a[], int len) {
  cout <<"[";

  for (int i =0; i < len; ++i) {
    cout << a[i] << ",";
  }
  cout << "]" << endl;
}

int main(){
  int numbers[] = {1, 2, 3};
  printArray(numbers,3);
  swap(numbers, 0, 1);
  printArray(numbers,3);
}
