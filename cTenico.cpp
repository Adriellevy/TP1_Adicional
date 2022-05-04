#include "cTenico.h"
#pragma region constructor y destructor
cTecnico::cTecnico(eTipoDeVehiculos _Tipo_de_vehiculos,string _nombre,string _DNI):DNI(_DNI),nombre(_nombre) {
	this->Tipo_de_vehiculos = _Tipo_de_vehiculos; 
	this->Vehiculo = NULL;
	this->vehiculo = false;
}

cTecnico::~cTecnico() {
}
#pragma endregion

#pragma region metodos propios de la clase
bool cTecnico::SolicitarAuto(cVehiculo* _vehiculo) {
	if (_vehiculo != NULL && this->vehiculo == false) {
		if ((this->Tipo_de_vehiculos == _vehiculo->getTipo()) && (_vehiculo->getSeguridad() == true) && (_vehiculo->getOcupado() == false)) {
			this->Vehiculo = _vehiculo; 
			_vehiculo->setOcupado();
			this->vehiculo = true;
		}
	}
	else {
		return false;
	}
}

cVehiculo* cTecnico::Devolver() {
	this->Vehiculo->Devolucion_Vehiculo(); 
	cVehiculo* aux = this->Vehiculo;
	this->Vehiculo = NULL;
	this->vehiculo = false;
	return aux;
}


#pragma endregion


#pragma region funciones de impresion de la clase
string cTecnico::to_string() {
	stringstream stc;
	stc << "DNI:" << this->DNI << endl;
	stc << "Nombre:" << this->nombre << endl;
	stc << "Tipo de vehiculo:" << this->Tipo_de_vehiculos << endl;
	stc << "Tiene Vehiculo?:s(1)/n(0) "<< this->vehiculo << endl;
	return stc.str();
}

void cTecnico::imprimir() {
	cout << this->to_string() << endl;
}

#pragma endregion