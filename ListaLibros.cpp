//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "ListaLibros.h"
#include <sstream>

ListaLibros::ListaLibros() {
    primero = nullptr;
    actual = nullptr;
}

ListaLibros::~ListaLibros() {
    while (primero != nullptr) {
        actual = primero;
        primero = primero->getSiguiente();
        delete(actual);
    }
}

void ListaLibros::insertarInicio(const Libro& _libro) {
    actual = new Nodo (_libro, nullptr);
    if (primero == nullptr) {
        primero = actual;
    } else {
        actual->setSiguiente(primero);
        primero = actual;
    }
}

void ListaLibros::insertarFinal(const Libro& _libro) {
    actual = primero;
    if (primero == nullptr) {
        primero = new Nodo(_libro, nullptr);
    } else {
        while (actual->getSiguiente() != nullptr) {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(new Nodo(_libro, nullptr));
    }
}

bool ListaLibros::eliminarInicio() {
    if (primero == nullptr) {
        return false;
    } else {
        actual = primero;
        primero = primero->getSiguiente();
        delete actual;
        return true;
    }
}

bool ListaLibros::eliminarFinal(){
    actual = primero;
    while (actual->getSiguiente() != nullptr) {
            actual = actual->getSiguiente();
        if (actual->getSiguiente() == nullptr) {
            delete actual;
            return true;
        }
    }
    return false;
}
int ListaLibros::totalNodos() {
    int totalNodos = 0;
    actual = primero;

    while (actual != nullptr) {
        totalNodos ++;
        actual = actual->getSiguiente();
    }

    return totalNodos;
}

bool ListaLibros::encontrado(int ide){
    actual = primero;
    while (actual->getLibro()->GetId() != ide) {
        if (actual->getLibro()->GetId() == ide ) {
            return true;
        } else
            actual = actual->getSiguiente();  
    }
    return false;
}

Libro ListaLibros::obtenerLibro(int ide){
    actual = primero;
    while (actual->getLibro()->GetId() != ide) {
        if (actual->getLibro()->GetId() == ide ) {
            return actual->getLibro();
        }
        actual = actual->getSiguiente();  
    }
}


bool ListaLibros::listaVacia() {
    return primero == nullptr;
}

std::string ListaLibros::toString() {
    std::string resultado;
    actual = primero;

    while (actual != nullptr) {
        resultado += actual->toString();
        actual = actual->getSiguiente();
    }

    return resultado;
}

Nodo *ListaLibros::getPrimero() const {
    return primero;
}

void ListaLibros::setPrimero(Nodo *primero) {
    ListaLibros::primero = primero;
}

Nodo *ListaLibros::getActual() const {
    return actual;
}

void ListaLibros::setActual(Nodo *actual) {
    ListaLibros::actual = actual;
}