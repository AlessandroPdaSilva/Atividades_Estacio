
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  int idade,idadec,sexof,contador;
  char sexo;
  contador=1;
  sexof=0;
  idadec=0;
    do{
     cout << " qual o sexo da pessoa, f ou m (f = feminino ou m = masculino) "<<endl;
     cin>> sexo;
     cout << " qual a idade da pessoa "<<endl;
     cin>>idade;
     if(idade>=18) {
        idadec++;
     }
     if(sexo=='f'){
        sexof++;
     }
     contador++;

    }while(contador<=10);



    cout<< " foram digitados " << sexof << " do sexo feminino \n";
    cout << " foram digitados "<< idadec << " maiores de idade \n";

  return 0;
}
