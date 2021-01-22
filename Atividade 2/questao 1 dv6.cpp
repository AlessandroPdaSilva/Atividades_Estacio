
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  int n;

  cout <<(" digite um numero  ");
  cin >> (n);
  if (n < 40 )
  {
   cout <<(" o numero digitado e menor que 40 ")<<endl;
  }
  else if (n > 40 )
  {
   cout <<(" o numero digitado e maior que 40 ")<<endl;
  }
  else
  {
   cout <<(" o numero digitado e igual a 40 ")<<endl;
  }
  return 0;
}
