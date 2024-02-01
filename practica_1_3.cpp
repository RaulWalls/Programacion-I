#include <iostream>

using namespace std;

int main()
{
    int calificacion;
    cout << "Programa que calcula una calificacion del sistema numérico al sistema Americano.";
    cout << "Dame tu calificacion en rango de 0-100:";
    cin >> calificacion;

    if(calificacion >= 90 && calificacion <= 100){      //se compara que la calificacion capturada este dentro del rango 90-100
        cout << "La calificacion es A";
    }
    if (calificacion >= 80 && calificacion < 90){       //se compara que la calificacion capturada este dentro del rango 80-89
        cout << "La calificacion es B";
    }
    if (calificacion >= 70 && calificacion < 80){       //se compara que la calificacion capturada este dentro del rango 70-79
        cout << "La calificacion es C";
    }
    if (calificacion >= 60 && calificacion < 70){       //se compara que la calificacion capturada este dentro del rango 60-69
        cout << "La calificacion es D";
    }
    if (calificacion <60){                              //se compara que la calificacion capturada este dentro del rango < 60
        cout << "La calificacion es F";
    }
    if (calificacion > 100)}{                           //Alerta de que la calificacion capturada es incorrecta
        cout << "¡Error de calificacion!";
    }

    return 0;
}
