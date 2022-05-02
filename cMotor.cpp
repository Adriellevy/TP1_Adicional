#include "cMotor.h"

cMotor::cMotor(ush _nivelDeAceite, ush _nivelMaxAceite,string _numeroDeSerie, string _cilindros):cilindros(_cilindros),numeroDeSerie(_numeroDeSerie){
    if (nivelDeAceite <= _nivelMaxAceite) {
        this->nivelDeAceite = _nivelDeAceite; 
        this->nivelMaxAceite = _nivelMaxAceite;
        this->verificacionDeSeguridad = false;
    }
}

cMotor::~cMotor() {
    //No tengo nada que eliminar
}


bool cMotor::realizar_verificación_de_seguridad() {
    if (this->nivelDeAceite <= this->nivelMaxAceite / 2) {
        this->verificacionDeSeguridad = false;
        cout << "Niveles de aceites bajos" << endl;
        return false;
    }
    else {
        this->verificacionDeSeguridad = true;
        return true;
    }
}

void cMotor::Agregar_aceite() {
    this->nivelDeAceite = this->nivelMaxAceite; 
}

void cMotor::Devolucion_Vehiculo() {
    this->verificacionDeSeguridad = false;
}

string cMotor::to_string() {
    stringstream stc;
    stc << "Cilindros: " << this->cilindros << endl;
    stc << "Nivel Aceite: " << this->nivelDeAceite << endl;
    stc << "Max aceite: " << this->nivelMaxAceite << endl;
    stc << "Numero serie: " << this->numeroDeSerie << endl;
    stc << "Ver seguridad: " << this->verificacionDeSeguridad << endl;
    return stc.str();
}

void cMotor::imprimir() {
    cout << this->to_string();
}
