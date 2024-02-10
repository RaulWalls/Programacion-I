#include <iostream>
#include <windows.h>

using namespace std;
/**
* Variables user: ID de los usuarios locales en el cajero
* Variables nip:  NIP de los usuarios locales en el cajero
* Variables saldo: Saldo de los usuarios locales en el cajero
* Variables billete: Billetes disponibles dentro del cajero
* x: variable de decision para que el ciclo del cajero se repita
*/

int main()
{
    char access;
    int    user, nip, saldo;
    int    user1 = 202301,
           user2 = 202302,
           user3 = 202303,
           user4 = 202304,
           user5 = 202305;
    int    nip1 = 1234,
           nip2 = 2468,
           nip3 = 1357,
           nip4 = 3579,
           nip5 = 5678;
    int    saldo1 = 6000,
           saldo2 = 3500,
           saldo3 = 9000,
           saldo4 = 12400,
           saldo5 = 100;
    int    operacion, retiro;
    int    billete100 = 0, billete200 = 0, billete500 = 0, billete1000 = 0;
    int    x = 1;

    while(x != 3){      //mientras la variable de decision no sea 3 el cajero seguira ejecutandose

        cout << "-------------------BIENVENIDO A TU CAJERO DE EXCELENCIA-------------------" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "---****---*****-*****-*-----*-*-----*-*****-*-----*-*****-*****---****----" << endl;
        cout << "---*---*----*---*-----*-*---*-*-----*-*-----*-*---*---*---*----*-*----*---" << endl;
        cout << "---*****----*---****--*--*--*--*---*--****--*--*--*---*---*----*-*----*---" << endl;
        cout << "---*---**---*---*-----*---*-*---*-*---*-----*---*-*---*---*----*-*----*---" << endl;
        cout << "---*****--*****-*****-*-----*----*----*****-*-----*-*****-*****---****----" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "------------------------------ INGRESAR S/N: -----------------------------" << endl;
        cin >> access;

        if(access == 'n'){      //conversion de minuscula a mayuscula de la N
            access = 'N';
        }else{
            if(access == 's'){  //conversion de minuscula a mayuscula de la S
                access = 'S';
            }
        }
        if (access == 'N'){     //si el usuario decide marcar N el cajero cerrara
            system("cls");
            cout << "------------------------------ HASTA LUEGO! ------------------------------" << endl;
            return 0;
        }else{
            do{
                cout << "INGRESAR ID: ";    //el usuario ingresara su ID, mientras el ID sea incorrecto, seguira pidiendo el acceso
                cin >> user;
            }while((user != user1) && (user != user2) && (user != user3) && (user != user4) && (user != user5) );

            do{
                cout << "INGRESAR NIP: ";   //el usuario ingresara su NIP, mientras el ID sea incorrecto, seguira pidiendo el acceso
                cin >> nip;
            }while(nip != nip1 && nip != nip2 && nip != nip3 && nip != nip4 && nip != nip5 );

            switch(user){
                case 202301:
                    saldo = saldo1;     //se asigna a la variable saldo el monto del usuario 1
                    break;
                case 202302:
                    saldo = saldo2;     //se asigna a la variable saldo el monto del usuario 2
                    break;
                case 202303:
                    saldo = saldo3;     //se asigna a la variable saldo el monto del usuario 3
                    break;
                case 202304:
                    saldo = saldo4;     //se asigna a la variable saldo el monto del usuario 4
                    break;
                case 202305:
                    saldo = saldo5;     //se asigna a la variable saldo el monto del usuario 5
                    break;
            }
            x = 1;
            while(x==1){            //cuando la variable x es igual a 1, el cajero entra en operacion ya con la sesion del cliente ingresado
                system("cls");
                cout << "---------- SELECCIONE LA OPERACION A REALIZAR: ----------\n" << endl;
                cout << "1.- RETIRAR DINERO." << endl;
                cout << "2.- CONSULTAR SALDO." << endl;
                cout << "3.- SALIR.\n" << endl;
                cout << "INGRESAR OPERACION: ";
                cin >> operacion;         //se asigna a operacion la instruccion dentro del menu de opciones
                system("cls");
                switch(operacion){
                case 1:                 // si elige 1 comienza el proceso para retirar el dinero
                    do{
                        cout << "---------- EL CAJERO NO CUENTA CON MONEDAS ---------" << endl;
                        cout << "-------------- CUANTO DESEAS RETIRAR? -------------" << endl;
                        cout << "-- EL CAJERO CUENTA CON BILLETES A PARTIR DE $100 --\n" << endl;
                        cout << "INGRESAR MONTO: ";
                        x = 2;
                        cin >> retiro;          //se ingresa el monto a retirar
                        if (retiro >= 100){     //compara si el retiro mínimo es de $100 
                                saldo = saldo - retiro;     //se resta el saldo retirado al total de su saldo en el cajero
                                while(retiro >= 1000){
                                    if(retiro >= 1000){     // compara cuántos billetes de 1000 necesita
                                        retiro = retiro - 1000;     
                                        billete1000 ++;
                                    }
                                }
                                while(retiro >= 500){       // compara cuántos billetes de 500 necesita
                                    if(retiro >= 500){
                                        retiro = retiro - 500;
                                        billete500 ++;
                                    }
                                }
                                while(retiro >= 200){      // compara cuántos billetes de 200 necesita
                                    if(retiro >= 200){
                                        retiro = retiro - 200;
                                        billete200 ++;
                                    }
                                }
                                while(retiro >= 100){       // compara cuántos billetes de 100 necesita
                                    if(retiro >= 100){
                                        retiro = retiro - 100;
                                        billete100 ++;
                                    }
                                }
                        }else{          //si el usuario ingresa un monto menor a $100, lo regresa al menu
                            cout << "EL RETIRO DEBE SER ARRIBA DE $100" << endl;
                            cout << "PRESIONE CUALQUIER TECLA: ";
                            cin >> x;
                            system("cls");
                            x = 1;      //se asigna 1 a x para que repita el ciclo del menu
                            break;
                        }
                    }while(retiro > 0);     //cuando el retiro es menor o igual a 0 
                    system("cls");          //el ciclo termina y pasa a imprimir el total retirado
                    cout << "--- BILLETES DE $1000 ENTREGADOS: " << billete1000 << endl;
                    cout << "--- BILLETES DE $500  ENTREGADOS: " << billete500 << endl;
                    cout << "--- BILLETES DE $200  ENTREGADOS: " << billete200 << endl;
                    cout << "--- BILLETES DE $100  ENTREGADOS: " << billete100 << endl;
                    cout << "---------- HASTA LUEGO! ----------" << endl;
                    cout << "PRESIONE CUALQUIER TECLA: ";
                    cin >> x;
                    system("cls");
                    x = 1;                  //se asigna 1 a x para que repita el ciclo del menu
                    break;
                case 2:
                    cout << "TU SALDO ACTUAL ES DE: " << saldo << endl;
                    cout << "PRESIONE CUALQUIER TECLA: ";
                    cin >> x;
                    system("cls");
                    x = 1;                  //se asigna 1 a x para que repita el ciclo del menu
                    break;
                case 3:
                    cout << "---------- HASTA LUEGO! ----------" << endl;
                    cout << "PRESIONE CUALQUIER TECLA: ";
                    cin >> x;
                    system("cls");
                    x = 2;                  //se asigna 2 a x para salir del ciclo del menu
                    break;
                default:
                    cout << "## OPERACION NO VALIDA ##" << endl;
                    cout << "PRESIONE CUALQUIER TECLA: ";
                    cin >> x;
                    system("cls");
                    x = 1;                  //se asigna 1 a x para que repita el ciclo del menu
                    break;
                }
            }
            if(x == 3){                 //si se asigna 3 a x, sale de la sesion simulada
                return 0;               //y el cajero termina sus funciones.
            }
        }
    }
    return 0;
}
