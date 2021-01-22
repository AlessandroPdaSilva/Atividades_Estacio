#include <iostream>
using namespace std;

int main()
{
  float n= 350, d, aum;

  d=n - (n*12/100);
  aum= (n*37/100)+ n;
  cout << " o numero  " << n << " aumento de 12 % : "<< d << endl ;
  cout << " o numero  " << n << " desconto de 37 % : "<< aum << endl;
  return 0;
}
