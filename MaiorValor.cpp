#include"iostream"
#include"math.h"
#include"cstdlib"
using namespace std;
double n1,n2,n3;
int main()  
{ setlocale(LC_ALL, "Portuguese");
Repetir: // Ponto de repeti��o
system("cls");
cout << "\nDigite o primeiro n�mero: "; 
 cin >> n1;
 cout << "\nDigite o segundo n�mero: "; 
 cin >> n2;
 cout << "\nDigite o terceiro n�mero: "; 
 cin >> n3;
 if (n1>n2 && n1>n3){
 cout << "\nO maior n�mero �: " << n1 <<endl;
 } else{
	 if (n2>n1 && n2>n3){
		 cout<< "\nO maior n�mero �: " <<n2 <<endl;
	 }else{
		 cout<<"\nO maior n�mero �: " <<n3 <<endl;
	 }
 }
 system("\npause");  
 goto Repetir; // Busca o ponto de repeti��oo
 return 0; }