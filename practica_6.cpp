#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
using std::stoi;

int main()
{
    string alumnos[5][5] = {{"Ulises","Emilio","Santiago","Daniel","Alexia"},{"8","9","7","8","9"},{"10","8","9","10","8"},{"6","8","7","9","8"},{"10","9","10","7","6"}};
    string alumno;
    char x = 'S';

    int var, cal;
    double prom;

    do{
        cout << "DETALLE DE CALIFICACIONES DEL 3er Grado Grupo \"B\"" << endl;
        cout << "BUSCAR ALUMNO: ";
        cin >> alumno;
        cal = 0;            //iniciamos en 0 para que la variable este limpia cuando se trabaje
        prom = 0;           //iniciamos en 0 para que la variable este limpia cuando se trabaje
        if(alumno == "Ulises"){
            var = 1;
        }else if(alumno == "Emilio"){
            var = 2;
        }else if(alumno == "Santiago"){
            var = 3;
        }else if(alumno == "Daniel"){
            var = 4;
        }else if(alumno == "Alexia"){
            var = 5;
        }else {
            var = 0;
        }       //se asigna un valor para cada alumno para ser utilizado en el switch

        system("cls");
        switch(var){
            case 1:
                cout << "Nombre Alumno: " << alumnos[0][0] << endl;
                cout << "Calificaciones: " << endl;
                for(int i = 1; i < 5; i++){
                    cout << alumnos[i][0] << endl;
                    cal = stoi(alumnos[i][0]);      //se suma la cantidad dentro de la matriz, convirtiendo el dato a entero
                    prom = prom + cal;              //en la variable prom para tener el total de todas las calificaciones
                }

                cout << "Promedio: " << (prom/4) << endl;       //se calcula el promedio y se imprime al usuario
                system("pause");       
                system("cls");
            break;
            case 2:
                cout << "Nombre Alumno: " << alumnos[0][1] << endl;
                cout << "Calificaciones: " << endl;
                for(int i = 1; i <= 4; i++){
                    cout << alumnos[i][1] << endl;
                    cal = stoi(alumnos[i][1]);
                    prom = prom + cal;
                }

                cout << "Promedio: " << (prom/4) << endl;
                system("pause");       
                system("cls");
            break;
            case 3:
                cout << "Nombre Alumno: " << alumnos[0][2] << endl;
                cout << "Calificaciones: " << endl;
                for(int i = 1; i <= 4; i++){
                    cout << alumnos[i][2] << endl;
                    cal = stoi(alumnos[i][2]);
                    prom = prom + cal;
                }
                cout << "Promedio: " << (prom/4) << endl;
                system("pause");       
                system("cls");
            break;
            case 4:
                cout << "Nombre Alumno: " << alumnos[0][3] << endl;
                cout << "Calificaciones: " << endl;
                for(int i = 1; i <= 4; i++){
                    cout << alumnos[i][3] << endl;
                    cal = stoi(alumnos[i][3]);
                    prom = prom + cal;
                }
                cout << "Promedio: " << (prom/4) << endl;
                system("pause");       
                system("cls");
            break;
            case 5:
                cout << "Nombre Alumno: " << alumnos[0][4] << endl;
                cout << "Calificaciones: " << endl;
                for(int i = 1; i <= 4; i++){
                    cout << alumnos[i][4] << endl;
                    cal = stoi(alumnos[i][4]);
                    prom = prom + cal;
                }
                cout << "Promedio: " << (prom/4) << endl;
                system("pause");       
                system("cls");
            break;
            default:
                cout << "Alumno no encontrado\nPresiona cualquier tecla para buscar nuevamente o\nPresiona N para salir:   ";
                cin >> x;
                if ((x == 'n') || (x=='N')){    //compara si el usuario requiere hacer una busqueda mas,
                    system("cls");              //si el valor es N o n, el programa termina.
                    cout << "Hasta luego ;)\n";
                    system("pause");
                    return 0;
                }
                system("cls");
            break;
        }
    }while(x != 'N');
    return 0;
}
