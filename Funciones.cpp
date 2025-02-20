#include <iostream>
using namespace std;

struct Punto {
    float x;
    float y;
};

// Función para calcular la raíz cuadrada usando el método de Newton-Raphson
float sqrtManual(float n) {
    float x = n; // Valor inicial
    float precision = 0.00001; // Precisión deseada

    while (x * x - n > precision) {
        x = (x + n / x) / 2;
    }

    return x;
}

float distancia(Punto p1, Punto p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float distanciaCuadrada = dx * dx + dy * dy;

    return sqrtManual(distanciaCuadrada); // Usa nuestra función sqrtManual
}

int main() {
    Punto p1 = {1.0, 2.0};
    Punto p2 = {4.0, 6.0};

    cout << "La distancia entre los puntos es: " << distancia(p1, p2) << endl;

    return 0;
}