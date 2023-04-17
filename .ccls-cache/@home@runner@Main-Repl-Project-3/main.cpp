#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
  int sum = 0;
  int a = 0;
  int b = 1;
  int c = 1;

  for (int i = 0; i < n; i++) {
    a = b;
    b = c;
    c = a + b;

    sum += c;
    
    
  }

  return sum;
}

int main() {

  int n 2 ;

  cout << fib(n) << fib(n + 1) << fib(n + 2);

}