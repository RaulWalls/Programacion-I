#include <iostream>

using namespace std;

int main()
{
    int aux=5;
    string var="*";
    cout << "Impresion de un patron:\n" << endl;

    for( int i=0; i<=10; i++){
        if(i>=5){        //compara la iteracion con la mitad del total de repeticiones para comenzar a descender
            var= "*";
            for(int j=1; j<aux; j++){      //comienza un ciclo para imprimir la otra mitad del patrón de forma descendente
                cout << var;
            }
            aux--;                  //disminuye el valor de aux para imprimir un * menos
            cout << endl;

        }else{                      // si la iteración i aun tiene un valor menor a cinco, continua aumentando un *
            cout << var << endl;
            var = var+"*";  //concatena el contenido de var agregando un * a la cadena
        }

    }


    return 0;
}
