//
// Created by Angelo on 11/8/2020.
//

#include "Paciente.h"

Paciente::Paciente(string n, string g, PlanAlimentos * p) {
    nombre = n;
    genero = g;
    plan = p;
}

Paciente::~Paciente() {
    delete plan;
}

void Paciente::setNombre(string n) {
    nombre = n;
}

string Paciente::getNombre() {
    return nombre;
}

string Paciente::getGenero() {
    return genero;
}

void Paciente::setGenero(string g) {
    genero=g;
}

PlanAlimentos *Paciente::getPlan() {
    return plan;
}

void Paciente::setPlan(PlanAlimentos* p) {
    plan =p;
}

void Paciente::agregaAlimento(Alimento * a) {
    plan->ingresarAlimento(a);
}

string Paciente::toString() {
    stringstream s;
    s << "Nombre:"<<nombre<<endl;
    s << "Genero:"<<genero<<endl;
    return s.str();
}

string Paciente::planAlimentos() {
    stringstream s;
    s << "Plan de Alimentos:"<<endl;
    s << plan->toString();
    return s.str();
}
