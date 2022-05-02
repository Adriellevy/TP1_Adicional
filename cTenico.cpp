#include "cTenico.h"

cTecnico::cTecnico(eTipoDeVehiculos _Tipo_de_vehiculos,string _nombre,string _DNI):DNI(_DNI),nombre(_nombre) {
	this->Tipo_de_vehiculos = _Tipo_de_vehiculos; 
	this->Vehiculo = NULL;
}

cTecnico::~cTecnico() {
}

void cTecnico::SolicitarAuto(cVehiculo* _vehiculo) {
	if (_vehiculo != NULL) {
		if ((this->Tipo_de_vehiculos == _vehiculo->getTipo()) && (_vehiculo->getSeguridad() == true) && (_vehiculo->getOcupado() == false)) {
			this->Vehiculo = _vehiculo; 
			_vehiculo->setOcupado();
		}
	}
}

cVehiculo* cTecnico::Devolver() {
	this->Vehiculo->Devolucion_Vehiculo(); 
	cVehiculo* aux = this->Vehiculo;
	this->Vehiculo = NULL;
	return aux;
}

cVehiculo* cTecnico::getvehiculo() {
	return this->Vehiculo;
}

string cTecnico::to_string() {
	stringstream stc;
	stc << "DNI: " << this->DNI << endl;
	stc << "nombre: " << this->nombre << endl;
	stc << "Tipo_de_vehiculos: " << this->Tipo_de_vehiculos << endl;
	stc << "Vehiculo: " << this->Vehiculo << endl;
	return stc.str();
}

void cTecnico::imprimir() {
	cout << this->to_string();
}