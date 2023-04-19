#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// x = (r^2 - y^2)^(1/2)

int main() {
  int radius = 10;
  int diameter = radius * 2;
  int correctionFactor = radius / 2;
  
  bool filledIn = false;

  int initDist = sqrt(radius * radius - (radius - 1) * (radius - 1));

  for (int i = radius; i >= -radius; i--) {
    int xDist = sqrt(radius * radius - i * i);

    
    if (abs(i) == radius) {
      cout <<
      string((diameter - initDist) * correctionFactor + 1, ' ')
      << 
      string(initDist * correctionFactor * 2, '#')
      << 
      string((diameter - initDist), ' ') << "\n";
      
    } else {
    
      cout << 
      string((diameter - xDist) * correctionFactor, ' ')
      << '#' << 
      string((xDist) * correctionFactor * 2, ' ')
      << '#' << 
      string((diameter - xDist), ' ') << "\n";
    }
    
    
  }
}


//TODO: work out how correction factor varies with radius, and understand properly how the inside length works