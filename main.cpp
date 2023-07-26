#include <iostream>
using namespace std;

void thirdvar() {
  cout<< "Swapping with third variable\n";
  int a = 2;
  int b = 3;
  int c = a;

  a = b;
  b = c;
  cout << "A and B are:" << a << " & " << b << endl;
}

void withoutVariable() {
  cout<< "Swapping without third variable\n";
  int a = 2;
  int b = 3;

  a = a + b;
  b = a-b;
  a = a-b;
  cout << "A and B are:" << a << " & " << b << endl;
}

int main() {
  thirdvar();
  withoutVariable();
}