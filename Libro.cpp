//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

void Libro::SetAnno(int anno) {
    this->anno = anno;
}

int Libro::GetAnno() const {
    return anno;
}

void Libro::SetEditorial(std::string editorial) {
    this->editorial = editorial;
}

std::string Libro::GetEditorial() const {
    return editorial;
}

void Libro::SetAutor(std::string autor) {
    this->autor = autor;
}

std::string Libro::GetAutor() const {
    return autor;
}

void Libro::SetNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Libro::GetNombre() const {
    return nombre;
}

void Libro::SetId(std::string id) {
    this->id = id;
}

std::string Libro::GetId() const {
    return id;
}

std::string Libro::toString() {
    std::string resultado;

    resultado = "- id: " + id + " nombre: " + nombre + " Autor: " + autor + " Editorial: " + editorial + "Anno" +  std::to_string(anno)+ "\n";
    return resultado;
}