#include <iostream>
using namespace std;
double x = 1;
double t;


int program (int i, int k, double dt)
{
    t = k;
    cout << t << ", ";
    cout << x << ", ";

    do {
        t = t + dt;
        cout << t << ", ";
        x = (1-3*dt)*x;
        cout << x << ", ";
    } while (t<i);   
    return 0; 
}
int main ()
{
  int i, k;
  double j;
  cout << "Please enter the desired lower bound of your time step";
  cin >> k;
  cout << "Please enter the desired upper bound of your time step";
  cin >>i;
  cout << "Please enter your desired size of steps";
  cin >>j;
  cout << "Your time step is [" << k << ", " << i << "]. Your size of steps is " << j << ".\n";
cout << program (i, k, j);
  }
