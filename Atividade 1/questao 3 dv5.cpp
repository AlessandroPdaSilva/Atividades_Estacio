
#include <iostream>
using namespace std;

int main()
{

  float n1,n2, d, m, soma, sub;
  cout << " 4 OPERACOES BASICAS \n";
  cout << " digite um numero " <<endl;
  cin >> n1 ;
  cout << " digite outro numero " << endl;
  cin >> n2 ;
  sub=n1+n2;
  soma=n1-n2;
  d= n1/n2;
  m= n1*n2;

  cout << n1 << " + " << n2 << " = " << soma << endl;
  cout << n1 << " - " << n2 << " = " << sub << endl ;
  cout << n1 << " / " << n2 << " = " << d << endl;
  cout << n1 << " * " << n2 << " = " << m << endl;
  return 0;
}
