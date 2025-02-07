#include <iostream>
using namespace std;
bool esPar(int a){
    if(a/2){
        return true;
    }
    return false;
}

int main()
{

    // Escribe tu código aquí
    // cout << "Ingrese un numero de iteración" << endl;
    // int n;
    // cin >> n;
    // if (esPar(n))
    // {
    //     cout << "El numero es par" << endl;
    // }else
    // {
    //     cout << "El numero es impar" << endl;
    // }
        
    // int x = 10;
    // int* ptr;

    // // Asigna la dirección de x a ptr
    // ptr = &x;

    // // Muestra el valor de x antes de la modificación
    // cout << "El valor de x es: " << x << endl;
    
    // // Modifica el valor de x a través del puntero
    // *ptr = 20;

    // // Muestra el valor de x después de la modificación
    // cout << "El valor de x es: " << x << endl;

    // Declara una variable de tipo Persona y asígnale valores
    struct Persona
    {
        /* data */
        string nombre;
        int edad;
        float estatura;

    };
    
    Persona person = {"Royer", 24, 1.50};

    // Muestra los valores de la persona
    cout << "El nombre de la persona es: " << person.nombre << endl;
    cout << "La edad de la persona es: " << person.edad << endl;
    cout << "La estatura de la persona es: " << person.estatura << endl;
    
    // Modifica el nombre de la persona
    string nombre2;
    cout << "Ingrese el nuevo nombre de la persona" << endl;
    cin >> nombre2;
    person.nombre = nombre2;

    cout << "El nombre de la persona es: " << person.nombre << endl;

    return 0;
}