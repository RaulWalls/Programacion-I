#include <iostream>

using namespace std;

int main()
{
    double angulo;

    cout << "Programa que determina si un angulo es agudo, obtuso o recto." << endl;
    cout << "Dame el valor de tu angulo: " << endl;
    cin >> angulo;      //se recibe el valor del angulo a comparar

    if(angulo == 90){      //Un angulo es recto si mide 90 grados
        cout<<"El angulo "<<angulo<<" es recto";
    } else {
        if(angulo < 90){   //Un angulo es agudo si mide menos de 90 grados
            cout<<"El angulo "<<angulo<<" es agudo";
        }else{
            if(angulo > 90){    //Un angulo es obtuso si mide mas de 90 grados
                cout<<"El angulo "<<angulo<<" es obtuso";
            }
        }
    }
    return 0;
}
