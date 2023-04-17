#include <iostream>
#include <vector>

using namespace std;

int main() {
  string sentence = "Hello, my name is Joey Brigaleous";

  int key = 1851;

  for (int i = 0; i < sentence.size(); i++) {
    sentence[i] = sentence[i];
  }
  
}