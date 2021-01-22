
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  int n;
  cout <<(" INPAR OU PAR \n");
  cout <<(" digite um numero\n ");
  cin >>(n);
  if (n%2==0){
    cout<< (" o numero digitado e par \n");
  }else{
    cout <<(" o numero digitado e im2par \n ");
  }

  return 0;
}
