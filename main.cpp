#include <iostream>

using namespace std;

int sum(int number);

int product(int number);

int main(){
  int n;
  cout << "Hello World" << endl;
  cout << "Please enter a number: ";
  cin >> n;
  cout << "Sum: ";
  cout << sum(n) << endl;
  cout << "Product: ";
  cout << product(n) << endl;
  
  
}

int sum(int number){
  int sum = 0;
  for(int i = 1; i <= number; i++){
    sum = sum + i;
  }
  return sum;
}

int product(int number){
  int product = 1;
  for(int i = 1; i <= number; i++){
    product = product * i;
  }
  return product;
}
