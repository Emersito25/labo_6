#include <iostream>
#include <string>
using namespace std;

struct Direccion {
    string calle;
    int numero;
    string ciudad;
};

struct Estudiante {
    string nombre;
    int edad;
    float calificaciones[5];
    Direccion direccion;
};

void ingresarEstudiantes(Estudiante* estudiantes, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "\n--- Estudiante " << i + 1 << " ---\n";
        cout << "Nombre: ";
        cin.ignore(); // Limpiar el buffer
        getline(cin, estudiantes[i].nombre);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Ingrese las 5 calificaciones:\n";
        for (int j = 0; j < 5; j++) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
        cout << "Calle: ";
        cin.ignore(); // Limpiar el buffer
        getline(cin, estudiantes[i].direccion.calle);
        cout << "Numero: ";
        cin >> estudiantes[i].direccion.numero;
        cout << "Ciudad: ";
        cin.ignore(); // Limpiar el buffer
        getline(cin, estudiantes[i].direccion.ciudad);
    }
}

void mostrarEstudiantes(Estudiante* estudiantes, int cantidad) {
    cout << "\n=== Lista de Estudiantes ===\n";
    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Calificaciones: ";
        for (int j = 0; j < 5; j++) {
            cout << estudiantes[i].calificaciones[j] << " ";
        }
        cout << "\nDireccion: " << estudiantes[i].direccion.calle
             << " #" << estudiantes[i].direccion.numero
             << ", " << estudiantes[i].direccion.ciudad << endl;
    }
}

void buscarEstudiante(Estudiante* estudiantes, int cantidad) {
    string nombreBuscar;
    cout << "\nIngrese el nombre del estudiante a buscar: ";
    cin.ignore();
    getline(cin, nombreBuscar);
    bool encontrado = false;
    for (int i = 0; i < cantidad; i++) {
        if (estudiantes[i].nombre == nombreBuscar) {
            cout << "\nEstudiante encontrado:\n";
            cout << "Nombre: " << estudiantes[i].nombre << endl;
            cout << "Edad: " << estudiantes[i].edad << endl;
            cout << "Calificaciones: ";
            for (int j = 0; j < 5; j++) {
                cout << estudiantes[i].calificaciones[j] << " ";
            }
            cout << "\nDireccion: " << estudiantes[i].direccion.calle
                 << " #" << estudiantes[i].direccion.numero
                 << ", " << estudiantes[i].direccion.ciudad << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "No se encontro al estudiante.\n";
    }
}

void modificarEstudiante(Estudiante* estudiantes, int cantidad) {
    string nombreModificar;
    cout << "\nIngrese el nombre del estudiante a modificar: ";
    cin.ignore();
    getline(cin, nombreModificar);
    bool encontrado = false;
    for (int i = 0; i < cantidad; i++) {
        if (estudiantes[i].nombre == nombreModificar) {
            encontrado = true;
            cout << "\nNueva edad: ";
            cin >> estudiantes[i].edad;
            cout << "Nuevas calificaciones:\n";
            for (int j = 0; j < 5; j++) {
                cout << "Calificacion " << j + 1 << ": ";
                cin >> estudiantes[i].calificaciones[j];
            }
            cout << "Nueva calle: ";
            cin.ignore();
            getline(cin, estudiantes[i].direccion.calle);
            cout << "Nuevo numero: ";
            cin >> estudiantes[i].direccion.numero;
            cout << "Nueva ciudad: ";
            cin.ignore();
            getline(cin, estudiantes[i].direccion.ciudad);
            cout << "Datos modificados exitosamente.\n";
            break;
        }
    }
    if (!encontrado) {
        cout << "No se encontro al estudiante.\n";
    }
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;
    Estudiante* estudiantes = new Estudiante[cantidad];
    int opcion;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Ingresar estudiantes\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Buscar estudiante\n";
        cout << "4. Modificar estudiante\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                ingresarEstudiantes(estudiantes, cantidad);
                break;
            case 2:
                mostrarEstudiantes(estudiantes, cantidad);
                break;
            case 3:
                buscarEstudiante(estudiantes, cantidad);
                break;
            case 4:
                modificarEstudiante(estudiantes, cantidad);
                break;
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 5);
    delete[] estudiantes;
    return 0;
}
