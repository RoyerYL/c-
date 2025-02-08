// #include <iostream>
// using namespace std;
// bool esPar(int a){
//     if(a/2){
//         return true;
//     }
//     return false;
// }

// int main()
// {

//     // Escribe tu código aquí
//     // cout << "Ingrese un numero de iteración" << endl;
//     // int n;
//     // cin >> n;
//     // if (esPar(n))
//     // {
//     //     cout << "El numero es par" << endl;
//     // }else
//     // {
//     //     cout << "El numero es impar" << endl;
//     // }
        
//     // int x = 10;
//     // int* ptr;

//     // // Asigna la dirección de x a ptr
//     // ptr = &x;

//     // // Muestra el valor de x antes de la modificación
//     // cout << "El valor de x es: " << x << endl;
    
//     // // Modifica el valor de x a través del puntero
//     // *ptr = 20;

//     // // Muestra el valor de x después de la modificación
//     // cout << "El valor de x es: " << x << endl;

//     // Declara una variable de tipo Persona y asígnale valores
//     struct Persona
//     {
//         /* data */
//         string nombre;
//         int edad;
//         float estatura;

//     };
    
//     Persona person = {"Royer", 24, 1.50};

//     // Muestra los valores de la persona
//     cout << "El nombre de la persona es: " << person.nombre << endl;
//     cout << "La edad de la persona es: " << person.edad << endl;
//     cout << "La estatura de la persona es: " << person.estatura << endl;
    
//     // Modifica el nombre de la persona
//     string nombre2;
//     cout << "Ingrese el nuevo nombre de la persona" << endl;
//     cin >> nombre2;
//     person.nombre = nombre2;

//     cout << "El nombre de la persona es: " << person.nombre << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// bool esPrimo(int n) {
//     // Implementa esta función
//     // Para verificar si un número es primo, debe verificar que no es divisible por ningún número menor o igual que su raíz cuadrada
//     // (Ej: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97...)
//     // También puede utilizar la técnica de división para verificar primalidad

//     // Ejemplo de implementación
//     if (n <= 1) {
//         return false;
//     }
//     // Verifica si el número es divisible por cualquier número menor o igual que su raíz cuadrada
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true; // Ejemplo de retorno para ilustrar
// }

// int main() {
//     int numero;
//     cout << "Ingrese un número: ";
//     cin >> numero;

//     if (esPrimo(numero)) {
//         cout << "El número es primo." << endl;
//     } else {
//         cout << "El número no es primo." << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;


int sumaarray() {
    int arreglo[5];
    int suma = 0;

    // Llena el arreglo con valores ingresados por el usuario
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    // Calcula la suma de los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        suma += arreglo[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

string mejorEstudiante(Estudiante estudiantes[], int tam) {
    // Implementa esta función

    // Ejemplo de implementación
    Estudiante mejorEstudiante = estudiantes[0];
    for (int i = 1; i < tam; i++) {
        if (estudiantes[i].promedio > mejorEstudiante.promedio) {
            mejorEstudiante = estudiantes[i];
        }
    }
    return mejorEstudiante.nombre;
}

int main() {
    Estudiante estudiantes[3] = {
        {"Juan", 20, 8.5},
        {"Ana", 21, 9.2},
        {"Luis", 19, 8.8}
    };

    string mejor = mejorEstudiante(estudiantes, 3);
    cout << "El mejor estudiante es: " << mejor << endl;

    return 0;
}