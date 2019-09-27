#include "Nodo.h"
#include "Libro.h"
#include "ListaLibros.h"
#include <iostream>
using namespace std;

int main() {
    Libro libro1(111, "Mamba Mentality");
    Libro libro2(222, "The eagle has landed");
    Libro libro3(333, "The eagle has flown");
    Libro libro4(444, "Dracula");
    Libro libro5(555, "Frankenstein");
    Libro libro6(777, "Don Quijote");


    ListaLibros* listaLibros = new ListaLibros();

    listaLibros->insertarInicio(libro1);
    listaLibros->insertarInicio(libro2);
    listaLibros->insertarInicio(libro3);
    listaLibros->insertarInicio(libro4);
    listaLibros->insertarInicio(libro5);
    
    int opcion;
    
    
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
   
    listaLibros->eliminarInicio();
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
    
     listaLibros->eliminarFinal();
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

    listaLibros->insertarFinal(libro6);
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

    std::cout<<"Bienvenido a la Biblioteca Nacional"<<endl;
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;
    std::cout<<"Por favor ingrese el codigo del libro que desea"<<endl;
    cin>>opcion;
    
    if (listaLibros->encontrado(opcion) == true) {

		cout << "El libro es:" + listaLibros->obtenerLibro(opcion)->toString() << endl;
	}
	else
	{
		cout << "No existe" << endl;
	}
    
    
    // Se elimina toda la lista
    delete(listaLibros);
    std::cout << "Lista de libros [" << listaLibros->totalNodos() << "] \n" << listaLibros->toString() << std::endl;

    
    
    
    return 0;
}