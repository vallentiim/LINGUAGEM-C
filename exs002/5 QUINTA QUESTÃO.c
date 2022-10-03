#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int Square (int soma)

{
int result;
result=soma;
return (result);
}
int main()
{
cout << " <<< EX. 1 CAP.10 >>>\n\n\n";
int n, num, param, quad, soma=0;
cout << "ESCOLHA UM NÚMERO COMO PARAMETRO: ";
cin >> n;
param=n;
while(num!=param)
{
cout << "ESCOLHA UM NÚMERO:  ";
cin >> num;
soma=soma+n;
quad=Square(soma);
cout << "A SOMA DO NÚMERO 1 ATÉ O ÚLTIMO NÚMERO DIGITADO VALE: " << quad << endl;
cout << "\n";
}
system("Pause");

return 0;
}
