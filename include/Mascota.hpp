#pragma once
#include <Alimento.hpp>
#include <string>


class Mascota
{
private:
    //Implementacion oculta
    int Energia;
    int Felicidad;
    string nombre;
public:
    //Interfaz
    Mascota() {
        this->Energia=0;
        this->Felicidad=0;
        this ->nombre = nombre;
    }
    ~Mascota() {}
    void Comer(Alimento alimento) {
        Energia += alimento.ExtraerEnergia();
    }
    void Jugar(){
        Energia -=1;
        Felicidad -=1;
    }
    int LeerFelicidad(){
        return this->Felicidad;

    }
    int LeerEnergia(){
        return this->Energia;
    }

    string LeerNombre(){
        return this ->nombre;
    }
    
};