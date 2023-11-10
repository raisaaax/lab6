#include <iostream>
using namespace std;

void swap(int array[], int pos1, int pos2){
  int temp = array[pos1];
  array[pos1] = array[pos2];
  array[pos2] = temp;
}

int main(){
  int numbers[] = {1, 2, 3};
  swap(numbers, 0, 1);
}
