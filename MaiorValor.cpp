#include"iostream"
#include"math.h"
#include"cstdlib"
using namespace std;
double n1,n2,n3;
int main()  
{ setlocale(LC_ALL, "Portuguese");
Repetir: // Ponto de repetição
system("cls");
cout << "\nDigite o primeiro número: "; 
 cin >> n1;
 cout << "\nDigite o segundo número: "; 
 cin >> n2;
 cout << "\nDigite o terceiro número: "; 
 cin >> n3;
 if (n1>n2 && n1>n3){
 cout << "\nO maior número é: " << n1 <<endl;
 } else{
	 if (n2>n1 && n2>n3){
		 cout<< "\nO maior número é: " <<n2 <<endl;
	 }else{
		 cout<<"\nO maior número é: " <<n3 <<endl;
	 }
 }
 system("\npause");  
 goto Repetir; // Busca o ponto de repetiçãoo
 return 0; }