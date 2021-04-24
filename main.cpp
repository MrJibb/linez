#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main (int argc, char* argv[]) {

  const char* pr = "pre";
  const char* ap = "ape";
  const char* rm = "rm";

  char* file = argv[1];

  cout << file << endl;

  if (strcmp(argv[2], pr) == 0) {
    cout << "prepend" << endl;
  } else if (strcmp(argv[2], ap) == 0) {
    cout << "append" << endl;
  } else if (strcmp(argv[2], rm) == 0) {
    cout << "remove" << endl;
  } else {
    cout << "no mode";
  }

  char* edit = argv[3];

  cout << edit << endl;
}
