#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
float x, h, i, Fx, n, s, a, b, Pi = 3.14159;
int main ()
{

  cout << "a= ";
  cin >> a;
  cout << "b= ";
  cin >> b;
  cout << "h= ";
  cin >> h;
  cout << "n= ";
  cin >> n;
  cout << "x=" << "\t" << "Fx=" << endl;
  for (x = a; x < b; x = x + h)
    {
      s = 0;
      for (i = 1; i <= n; i++)
	s = s + sin(i * x)*(-2 * pow (-1, i) / i);
      Fx = -2 + s;
      cout << x << "\t" << Fx << endl;
    }
}