#include <iostream>
using namespace std;


double Cube(double num){
  double cube = num * num * num;
  return cube;
}

int main(){
  double x;

  cout << "Enter a number";
  cin >> x ;

  double result = Cube(x);
  cout << "The cube of " << x << " is: " << result<< endl; 
}
