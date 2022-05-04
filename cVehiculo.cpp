#include "cVehiculo.h"
#include "gbl.h"

cVehiculo::cVehiculo(bool _Esta_en_uso,bool _Verificacion_de_seguridad,eTipoDeVehiculos _tipo,cMotor* _Motor,string _patente,string _Marca,string _Modelo,string _Anio):Patente(_patente),Marca(_Marca),Modelo (_Modelo),Anio(_Anio) {
    if (_Motor != NULL) {
        this->Motor = _Motor;
        this->Esta_en_uso = _Esta_en_uso;
        this->Tipo_de_vehiculo = _tipo;
        this->Verificacion_de_seguridad = _Verificacion_de_seguridad;
    }
}
cVehiculo::~cVehiculo() {

}

void cVehiculo::verificar_seguridad() {
    if (this->Verificacion_de_seguridad == false) {
        this->Verificacion_de_seguridad = this->Motor->realizar_verificación_de_seguridad();
        if (this->Verificacion_de_seguridad == true) {
            cout << "El vehiculo es seguro" << endl;
        }
    }
}

void cVehiculo::Devolucion_Vehiculo() {
    this->Verificacion_de_seguridad = false;
    this->Motor->Devolucion_Vehiculo();
}

string cVehiculo::to_string() {
    stringstream stc;
    stc << "Anio:" << this->Anio << endl;
    stc << "Esta_en_uso:" << this->Esta_en_uso << endl;
    stc << "Marca:" << this->Marca << endl;
    stc << "Modelo:" << this->Modelo << endl;
    stc << "Patente:" << this->Patente << endl;
    stc << "Tipo de vehiculo:" << this->Tipo_de_vehiculo << endl;
    stc << "Verificacion:" << this->Verificacion_de_seguridad << endl;
    return stc.str();
}

void cVehiculo::imprimir() {
    cout << this->to_string() << endl;
}


//bool cVehiculo::operator==(cVehiculo* _vehiculo)
//{
//    if (this->Tipo_de_vehiculo == _vehiculo->Tipo_de_vehiculo) {
//        return true;
//    }
//    return false;
//
//}
