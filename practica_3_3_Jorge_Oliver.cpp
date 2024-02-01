#include <iostream>
#include <windows.h>       //libreria para limpiar pantalla

using namespace std;

int main()
{
    string contrasena, validacion;

    cout << "Programa que pide dos contraseņas y las valida hasta que sean iguales.\n";

    cout << "Ingresa tu contrasena: ";
    cin >> contrasena;
    cout << "Ingresa nuevamente tu contrasena: ";
    cin >> validacion;

    while(validacion != contrasena){    //Valida si las contraseņas son iguales y si no repite el ciclo

        system("cls");          //se limpia la pantalla para una mejor vista
        cout << "Error! Para accesar las contrasenas deben coincidir\n";    //mensaje de error entre las contraseņas
        cout << "Ingresa nuevamente tu contraseņa: ";
        cin >> validacion;                  //se ingresa nuevamente la contraseņa
        if (validacion == contrasena){      //si ambas contraseņas coinciden se limpia la pantalla
            system("cls");                  //muestra el mensaje de acceso y finaliza el programa
            cout << "Contrasena correcta!\nACCESO CONCEDIDO\n";
            return 0;
        }
    }


    return 0;
}
