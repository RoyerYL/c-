#include <iostream>
using namespace std;

int main() {
    int arreglo[10];
    int maximo;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un valor " << i+1 << endl;
        cin >> arreglo[i];
    }

    maximo=arreglo[0];
    
    for (int i = 0; i < 10; i++) {
        
        if(arreglo[i]>maximo){
            maximo=arreglo[i];
        }
    }
    cout<<"Numero maximo:"<<maximo << endl;

    return 0;
}