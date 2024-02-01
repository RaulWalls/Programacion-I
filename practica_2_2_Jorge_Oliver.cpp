#include <iostream>


using namespace std;

int main()
{
    int num1, num2, valor, mayor, menor;
    cout << "Programa que muestra los numeros pares entre dos numeros ingresados por el usuario." << endl;
    cout << "Ingresa el primer numero: " << endl;
    cin >> num1;
    cout << "Ingresa el segundo numero: " << endl;
    cin >> num2;

    if(num1 > num2){       //compara ambos valores capturados por el usuario
        mayor = num1;      //asigna a la variable mayor el numero 1
        menor = num2;      //asigna a la variable menor el numero 2
    }else{
        menor = num1;      //asigna a la variable menor el numero 1
        mayor = num2;      //asigna a la variable mayor el numero 2
    }
    for(int i = menor; i <= mayor; i++){    //asigna a i el valor del numero menor para que comience
                                            //desde ese numero hasta llegar al numero mayor
        if(i%2 == 0){       //compara si la iteración es par
            cout << i << " "; //si lo es imprime el valor mas  un espacio en blanco
        }
    }
    return 0;
}
