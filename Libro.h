//
// Created by Maikol Guzman  on 2019-09-16.
//;

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H


class Libro {


    std::string id;
    std::string nombre;
    std::string autor;
    std::string editorial;
    int anno;
public:
    Libro();
    Libro();
    ~Libro();
    void SetAnno(int anno);
    int GetAnno();
    void SetEditorial(std::string editorial);
    std::string GetEditorial();
    void SetAutor(std::string autor);
    std::string GetAutor();
    void SetNombre(std::string nombre);
    std::string GetNombre();
    void SetId(std::string id);
    std::string GetId();
    std::string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
