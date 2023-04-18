#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int radius = 9;
  int threshold = 5;

  for (int i = radius; i >= -radius; i--) {
    float percent = ((float)(i * i) / float(81));

    if (i == abs(radius)) {
      string line(threshold, "#");
      cout << line;
    }
    
    cout << percent << "\n";
  }
}