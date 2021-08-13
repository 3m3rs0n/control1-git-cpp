// Example program
#include <iostream>
#include <string>


/* Si es grupo de 3 omitir este
    Este metodo deber retornar el elemento numero N de serie de fibonnaci
    1 1 2 3 5 8 13  21
    
    1 2 3 4 5 6 7   8 
*/
int fibonacci(int N) {
	if(N==1 || N==2){
		return 1;
	}
	else{
		return fibonacci(N-1)+fibonacci(N-2);
	}
}

/* Imprimier en Navo numero primo
    1, 2, 3, 5, 7, 13, 17, 19, 23
    
    1  2  3  4  5  6   7   8   9

*/
//Declaracion de las librerias que se van a utilizar
#include <iostream>
using namespace std;

int primo (int a) { //Inicializacion metodo primo
    int contador = 1;
    int aux = 1; 
    while (contador <= a) {
        int numDivisores = 0;
        aux++;
        for (int i = 1; i <= aux; i++){
            if (aux%i == 0){
                numDivisores++;
            }
        }
        if (numDivisores == 2){
            contador++;
        }
    }
    return aux;
}

/* Determina si un numero es capicua o no.
    retorna 0 si no es capicua
    retoran 1 si es capicua
*/
int capicua(int n){
	//cout << "Ingrese el numero: ";
	//cin >> n;
	int cap;
	for (int a=1000;a<=n;a++){
		int sum=0;
		int copia=n;
			while (n>0){	
			sum=sum*10+n%10;
			n=n/10;	
		}
	if (copia==sum)
		cap=1;
	else 
		cap=0;		
	}
	return cap;			
}


/* Retornar el residuo de una division sin tulizar el operado residuo (modulo %) ni el operador de division (/)
*/
int residuo(int a, int b) {
		int r=0;
	while(r<a-b){
		r=r+b;
	}
	return a-r;
}


int main()
{
  std::string name;
  std::cout << "El fibonacci de 8 " << fibonacci(8) << std::endl;   // 21
<<<<<<< HEAD
  std::cout << "El primo numer 8 " << fibonacci(8) << std::endl;    // 19
  std::cout << "El numero 11211 es capicua? " << capicua(11211) << std::endl ;    // 1 
=======
  std::cout << "El primo numer 8 " << primo(8) << std::endl;    // 19
  std::cout << "El capicua numer 8 " << capicua(11211) << std::endl ;    // 1 
>>>>>>> f8be79c5d6b4d85bfa22c5eeb96b01d65ca75ec3
  std::cout << "El residuo de  13 entre 4 " << residuo(13, 4) << std::endl;    // 1 
}




