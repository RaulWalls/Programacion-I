#include <iostream>

using namespace std;

int main()
{
    //se establecen las variables
    int num1, num2;

    cout << "Programa que determina si un numero es múltiplo del otro." << endl;
    cout << "Dame el primer numero: " << endl;
    cin >> num1;
    cout << "Dame el segundo numero: " << endl;
    cin >> num2;

    if(num1 % num2 == 0){   //se calcula el modulo entre ambos números y se compara con 0
        cout<<"El numero "<<num2<<" es divisor de "<<num1;
    } else {
        cout<<"El numero "<<num2<<" no es divisor de "<<num1;
    }
    return 0;
}
