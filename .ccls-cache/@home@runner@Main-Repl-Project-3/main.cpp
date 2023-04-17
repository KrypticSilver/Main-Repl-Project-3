#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;



vector<int> gen_primes(int range_ub, int range_lb) {
  
  vector<int> primes;
  
  for (int i = range_lb; i < range_ub; i++) {
    vector<int> factors;
    
    for (int j = 1; j <= i; j++) {
      
      if (i % j == 0) {
        factors.push_back(j);
      }
    }

    if (factors.size() == 2) {
      primes.push_back(i);
      
    }
    factors = {};
  }

  return primes;
}

int main() {
  srand ( time(NULL) );
  
  int random = (1 + rand() % 10) * 5;
  cout << random;
  cout << "working!";
  
  
}