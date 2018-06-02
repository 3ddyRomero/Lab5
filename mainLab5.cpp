#include <iostream>
#include <string>
#include "bodega.h"
#include "evaluacion.h"
#include "experiencia.h"
#include "ingrediente.h"

void agregarIngredientes(bodega);

int menu();

int menu()
{
    int opcion;
    cout << "           MENU\n"
         << endl;
    cout << "1.-> Ver inventario." << endl;
    cout << "2.-> Agregar Platos." << endl;
    cout << "3.-> Agregar Ingredientes." << endl;
    cout << "4.-> Comprar." << endl;
    cout << "5.-> Salir. " << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    return opcion;
}

int main()
{
    char op = 'y';
    bodega bodega;
    do
    {
        //Inicio del switch con menu
        switch (menu())
        {
        //opcion para ver el inventario de la bodega
        case 1:
            cout << "ingredientes: " << endl;
            /*for (int i = 0; i < ; i++)
                cout << agregarIngredientes()->getNTC() << endl;

            cout << endl;*/
            cout << "Platos: " << endl;

            break;
        //opcion para agregar platos
        case 2:

            break;
        //opcion para agregar ingredientes
        case 3:
            agregarIngredientes(bodega);

            break;
        //Almacenar registro de compras
        case 4:

            break;
        //opcion para Salir
        case 5:
            op = 'n';
            cout << "\\.:.***Buen Día***.:./" << endl;
            break;
        default:
            //Opcion no valida
            cout << "Opcion No Disponible." << endl;
            break;

        } //Switch End
        cout << endl;

    } while (op == 'y');
    cout << endl;

    return 0;
}

void agregarIngredientes(bodega bodega)
{
    //variables
    string nombre, tipo;

    vector<ingrediente> lista;
    //pedor datos del ingrediente
    ingrediente ingrediente;
    cout << "Ingrese el nombre del ingrediente: " << endl;
    cin >> nombre;
    cout << "Ingrese el tipo:" << endl;
    cin >> tipo;

    //llenar el objeto ingrediente
    ingrediente.setName(nombre);
    ingrediente.setTipo(tipo);

    //meter en la lista
    bodega.pushingrediente(ingrediente);
}
