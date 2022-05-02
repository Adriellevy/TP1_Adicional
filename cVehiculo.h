#ifndef _CVEHÍCULO_H
#define _CVEHÍCULO_H

#include "gbl.h"
#include "cMotor.h"

class cVehiculo {
public:
    cVehiculo(bool _Esta_en_uso, bool _Verificacion_de_seguridad, eTipoDeVehiculos _tipo, cMotor* _Motor, string _patente, string _Marca, string _Modelo, string _Anio);
    ~cVehiculo();
    /// <summary>
    /// Verifica que el motor tenga realizado el mantenimiento, si no lo tiene solicita el mantenimiento.
    /// Luego, imprime un mensaje que indica que el vehículo es seguro,
    /// cambia la verificación de seguridad a aprobada.Si no pudo realizar el
    /// mantenimiento, mantiene el estado actual.
    /// </summary>
    void verificar_seguridad();

    /// <summary>
    /// este método se llama al
    /// devolver un vehículo y setea la verificación de seguridad como no realizada
    /// (tanto en el vehículo como en el motor)
    /// </summary>
    void Devolucion_Vehiculo();

    eTipoDeVehiculos getTipo(){ return this->Tipo_de_vehiculo; };
    bool getSeguridad(){ return this->Verificacion_de_seguridad; };
    bool getOcupado() { return this->Esta_en_uso; };
    void setOcupado() { this->Esta_en_uso = true; }

    string to_string(); 
    void imprimir();
private:
    const string Patente;
    const string Marca;
    const string Modelo;
    const string Anio;
    eTipoDeVehiculos Tipo_de_vehiculo;
    bool Esta_en_uso;
    bool Verificacion_de_seguridad;
    cMotor*  Motor;
};


#endif //_CVEHÍCULO_H