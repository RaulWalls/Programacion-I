#include <iostream>
#include <windows.h>       //libreria para limpiar pantalla

using namespace std;

int main()
{
    string contrasena, validacion;

    cout << "Programa que pide dos contrase�as y las valida hasta que sean iguales.\n";

    cout << "Ingresa tu contrasena: ";
    cin >> contrasena;
    cout << "Ingresa nuevamente tu contrasena: ";
    cin >> validacion;

    while(validacion != contrasena){    //Valida si las contrase�as son iguales y si no repite el ciclo

        system("cls");          //se limpia la pantalla para una mejor vista
        cout << "Error! Para accesar las contrasenas deben coincidir\n";    //mensaje de error entre las contrase�as
        cout << "Ingresa nuevamente tu contrase�a: ";
        cin >> validacion;                  //se ingresa nuevamente la contrase�a
        if (validacion == contrasena){      //si ambas contrase�as coinciden se limpia la pantalla
            system("cls");                  //muestra el mensaje de acceso y finaliza el programa
            cout << "Contrasena correcta!\nACCESO CONCEDIDO\n";
            return 0;
        }
    }


    return 0;
}
