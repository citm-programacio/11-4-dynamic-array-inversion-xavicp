// ConsoleApplication14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

class Dynamic_array {

private:
    int* array;     
    int size;       
    int capacity;   

public:
    // Constructor
    Dynamic_array(int p_capacity = 10) : size(0), capacity(p_capacity) {
        array = new int[capacity];
    }

    // Destructor
    ~Dynamic_array() {
        delete[] array;
    }

   
    void numeros() {
        cout << "Por favor, introduzca " << capacity << " números:" << endl;
        for (int i = 0; i < capacity; i++) {
            cin >> *(array + i);
        }
        size = capacity; 
    }

    
    void imprimir() {
        for (int i = 0; i < size; i++) {
            cout << *(array + i) << " ";
        }
        cout << endl;
    }

    
    void invertir() {
       
        int motion;
        for (int i = 0; i < size / 2; i++) {
           
            motion = *(array + i);
            *(array + i) = *(array + size - 1 - i);
            *(array + size - 1 - i) = motion;

        }
    }
};

int main() {
    // Create a dynamic array of capacity 10
    Dynamic_array arr(10);

   
    arr.numeros();

   
    cout << "Array original:" << endl;
    arr.imprimir();

    
    arr.invertir();
    cout << "Array invertido:" << endl;
    arr.imprimir();

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
