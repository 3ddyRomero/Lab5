#include <iostream>
#include <string>
#include "bodega.h"
#include "evaluacion.h"
#include "experiencia.h"
#include "ingrediente.h"

int menu();

int menu(){
    int opcion;
   cout<<"           MENU\n"<<endl;
   cout<<"1.-> Ver inventario."<<endl;
   cout<<"2.-> Agregar Platos."<<endl;
   cout<<"3.-> Agregar Ingredientes."<<endl;
   cout<<"4.-> Comprar."<<endl;
   cout<<"5.-> Salir. "<<endl;
   cout<<"Ingrese una opcion: ";
   cin>>opcion;

   return opcion;

}

int main(){
    char op = 'y';
    do{
        //Inicio del switch con menu
        switch(menu() ){
                //opcion para ver el inventario de la bodega
                case 1:

                break;
                //opcion para agregar platos
                case 2:

                break;
                //opcion para agregar ingredientes
                case 3:

                break;
                //Almacenar registro de compras
                case 4:

                break;
                //opcion para Salir
                case 5:
                   op = 'n';
                   cout<< "\\.:.***Buen Día***.:./"<<endl;            
                break;
                default:
                //Opcion no valida
                   cout<<"Opcion No Disponible."<<endl;
                break;


        }//Switch End
        cout<<endl;

    }while (op == 'y');
    cout<<endl;




    return 0;
}
