#include <iostream>
using namespace std;
double n;
double dt = .2;
int main ()
{
  for (n=1; n>.005; n=(1-3*dt)*n){
      cout << n << ", ";
  }
cout << "liftoff!\n";
}
