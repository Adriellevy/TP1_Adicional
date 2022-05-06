#ifndef _CVEHÍCULO_H
#define _CVEHÍCULO_H

#include "gbl.h"
#include "cMotor.h"

class cVehiculo {
public:
#pragma region constructor y destructor 
    /// <summary>
    /// Crea un objeto de tipo vehiculo solo si el motor es diferente a nulo, ya que un auto no puede andar sin su motor
    /// </summary>
    /// <param name="_Esta_en_uso"></param>
    /// <param name="_Verificacion_de_seguridad"></param>
    /// <param name="_tipo"></param>
    /// <param name="_Motor"></param>
    /// <param name="_patente"></param>
    /// <param name="_Marca"></param>
    /// <param name="_Modelo"></param>
    /// <param name="_Anio"></param>
    cVehiculo(bool _Esta_en_uso, bool _Verificacion_de_seguridad, eTipoDeVehiculos _tipo, cMotor* _Motor, string _patente, string _Marca, string _Modelo, string _Anio);
    ~cVehiculo();
#pragma endregion

#pragma region metodos propios de la calse
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

    eTipoDeVehiculos getTipo(){ return this->Tipo_de_vehiculo; }
    bool getSeguridad(){ return this->Verificacion_de_seguridad; }
    /// <summary>
    /// En caso de que este usado devolvera true (1), en caso contrario false(0) 
    /// </summary>
    /// <returns></returns>
    bool getOcupado() { return this->Esta_en_uso; }
    void setOcupado() { this->Esta_en_uso = true; }
    /// <summary>
    /// En caso de querer realizar un motor se setea con este metodo
    /// </summary>
    /// <param name="_motor"></param>
     void setMotor(cMotor* _motor) { if(_motor!=NULL)this->Motor = _motor; }
    cMotor* getMotor() { return this->Motor; }
#pragma endregion
#pragma region to string e imprimir
    string to_string(); 
    void imprimir();
#pragma endregion

private:
#pragma region atributos de identificacion
    const string Patente;
    const string Marca;
    const string Modelo;
    const string Anio;
#pragma endregion

#pragma region atributos funcionales
    eTipoDeVehiculos Tipo_de_vehiculo;
    bool Esta_en_uso;
    bool Verificacion_de_seguridad;
    cMotor*  Motor;
#pragma endregion
};


#endif //_CVEHÍCULO_H
