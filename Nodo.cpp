//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Libro& _libro, Nodo *siguiente) : libro(_libro), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Libro &Nodo::getLibro() const {
    return libro;
}

void Nodo::setProfesor(const Libro& _libro) {
    Nodo::libro = _libro;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
    Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
    return libro.toString();
}