#include <iostream>

// Función plantilla que acepta cualquier tipo de argumento
template <typename T>
void funcion(T arg) {
    std::cout << "El argumento es: " << arg << std::endl;
}

int main() {
    // Llamada a la función con diferentes tipos de argumentos
    funcion(5);           // Entero
    funcion(3.14);        // Doble
    funcion("Hola");      // Cadena de caracteres
    funcion(true);        // Booleano

    return 0;
}
