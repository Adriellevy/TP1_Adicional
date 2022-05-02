#pragma once
#include "gbl.h"
#include "cVehiculo.h"
class cTecnico
{
	
public:
	cTecnico(eTipoDeVehiculos _Tipo_de_vehiculos, string _DNI, string _nombre);
	~cTecnico();
	/// <summary>
	/// recibe un veh�culo, verifica que el tipo de veh�culo 
	/// coincide con el que precisa, que tenga el mantenimiento hecho y que 
	/// no est� ocupado y se lo asigna al T�cnico.Tambi�n setea el estado del Veh�culo a ocupado.
	/// </summary>
	void SolicitarAuto(cVehiculo* _vehiculo);

	/// <summary>
	/// setea el auto a mantenimiento pendiente, cambia el 
	/// estado a desocupado y le quita la asignaci�n al t�cnico.
	/// </summary>
	cVehiculo* Devolver();

	/// <summary>
	/// Devuelve el puntero del vehiculo asignado 
	/// </summary>
	cVehiculo* getvehiculo();
	string to_string();
	void imprimir();
private:
	const string DNI; 
	const string nombre; 
	eTipoDeVehiculos Tipo_de_vehiculos;
	cVehiculo* Vehiculo; 
};

