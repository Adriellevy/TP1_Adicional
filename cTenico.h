#pragma once
#include "gbl.h"
#include "cVehiculo.h"
class cTecnico
{
	
public:

#pragma region constructor y destructor
	/// <summary>
	/// Crea a un obeto tipo tecnico e inicializa su vehiculo en nulo, el resto depende de los parametros solicitados
	/// </summary>
	/// <param name="_Tipo_de_vehiculos"></param>
	/// <param name="_DNI"></param>
	/// <param name="_nombre"></param>
	cTecnico(eTipoDeVehiculos _Tipo_de_vehiculos, string _DNI, string _nombre);
	~cTecnico();
#pragma endregion


#pragma region funciones propia de la clase 
	/// <summary>
	/// recibe un vehículo, verifica que el tipo de vehículo 
	/// coincide con el que precisa, que tenga el mantenimiento hecho y que 
	/// no esté ocupado y se lo asigna al Técnico.También setea el estado del Vehículo a ocupado.
	/// El tecnico puede tener solo un auto, por lo que si desea cambiar de auto, tendra que devolverlo.
	/// En tal caso se opto por informar con un false con la funcion
	/// </summary>
	bool SolicitarAuto(cVehiculo* _vehiculo);

	/// <summary>
	/// setea el auto a mantenimiento pendiente, cambia el 
	/// estado a desocupado y le quita la asignación al técnico.
	/// </summary>
	cVehiculo* Devolver();

	/// <summary>
	/// Devuelve el puntero del vehiculo asignado 
	/// </summary>
	cVehiculo* getvehiculo() { return this->Vehiculo; }
	
#pragma endregion


#pragma region funciones de impresion de la clase
	string to_string();
	void imprimir();
#pragma endregion
private:
#pragma region atributos de identificacion
	const string DNI; 
	const string nombre; 
#pragma endregion

#pragma region atributos propios de la clase
	bool vehiculo;
	eTipoDeVehiculos Tipo_de_vehiculos;
	cVehiculo* Vehiculo; 
#pragma endregion
};

