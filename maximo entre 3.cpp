#include<iostream>
using namespace std; 
int CalcularMaximo(int a, int b, int c); 
int main() {
 int num1, num2, num3, maximo;
 cout<< "Ingrese tres numeros enteros: "; 
 cin>> num1 >> num2 >> num3; 
 maximo = CalcularMaximo(num1, num2, num3); 
 cout << "El maximo entre " << num1 << " el " << num2 <<" y el " << num3 << " es: " << maximo << endl; 
 return 0;
 } 
 int CalcularMaximo(int a, int b, int c)
  { 
  bool flag=false;
   if(a>b>c)
   { 
   flag=true ;
    } 
	else
	{ 
	return flag; 
	}
}
