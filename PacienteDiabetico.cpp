//
// Created by Angelo on 11/8/2020.
//

#include "PacienteDiabetico.h"

PacienteDiabetico:: PacienteDiabetico(int tipoDiabetes, float dosisInsulina, float azucarDiarioMAX, string nombre, string genero, PlanAlimentos* plan)
: Paciente(nombre, genero, plan)
{
    this->tipoDiabetes = tipoDiabetes;
    this->azucarDiarioMAX = azucarDiarioMAX;
    this->dosisInsulina = dosisInsulina;
}

void PacienteDiabetico:: setTipoDiabetes(int tipoDiabetes) {
    this->tipoDiabetes = tipoDiabetes;
}
int PacienteDiabetico::getTipoDiabetes() {
    return this->tipoDiabetes;
}

void PacienteDiabetico:: setDosisInsulina(float dosisInsulina) {
    this->dosisInsulina = dosisInsulina;
}
float PacienteDiabetico:: getDosisInsulina() {
    return this->dosisInsulina;
}

void PacienteDiabetico:: setAzucarDiarioMAX(float azucarDia) {
    this->azucarDiarioMAX = azucarDia;
}
float PacienteDiabetico:: getAzucarDiarioMAX() {
    return this->azucarDiarioMAX;
}

string PacienteDiabetico:: toString()
{
    stringstream s;

    s << Paciente::toString();
    //s << plan->toString();
    s << "Tipo de diabetes: " << this->getTipoDiabetes()<<endl;
    s << "Dosis de insulina: " << this->getDosisInsulina() << endl;
    s << "Azucar diario maximo: " << this->getAzucarDiarioMAX() << endl;

    return s.str();
}

bool PacienteDiabetico:: sobrePasaMaximoAzucarDiario()
{
    if (this->plan->totalAzucarAgg() > 0 || this->plan->totalAzucarNat() > this->getAzucarDiarioMAX())
        return true;
    return false;
}