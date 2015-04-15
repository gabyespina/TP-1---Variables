//Muestro en consola, distintos tipos de operaciones que se pueden realizar con distintos tipos de variables
//Pido nombre y apellido, luego pido dos valores , y realizo distintas operaciones, al final
//pregunto si continua o no el programa, donde el resultado va a parar a una variable booleana.
//Gabriel Espina-K1091
//15/04/2015

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    system("CLS"); //Limpio la pantalla

    //Variable de tipo string
    string nom, ape, nomape;
    cout << "Ingrese Nombre : "; cin >> nom;
    cout << "Ingrese Apellido : "; cin >> ape;
    nomape = nom + " " + ape;
    system("CLS");

    //Variables de tipo INT
    int a,b;
    cout << "Ingrese primer valor:  a = ";
    cin >> a;

    cout << "Ingrese segundo valor:  b = ";
    cin >> b;

    cout <<endl<< "a + b = ";
    cout << a+b<<endl<<endl;

    cout<< "a - b = ";
    cout << a-b<<endl<<endl;

    cout<< "a * b = ";
    cout << a*b<<endl<<endl;

    cout<< "a / b = ";
    cout << a/b<<endl<<endl;


    //Variable de tipo BOOL
    bool continua;
    cout<< "Continuar con el programa "<< nomape << " ?"<<endl<<endl;
    cout<< "   Si: 1"<<endl<<endl<< "   NO : 0"<<endl<<endl;
    cin>>continua;

    if (continua) {
        main();
    }

    return 0;
}
