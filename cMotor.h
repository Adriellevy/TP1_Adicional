#include "gbl.h"
#ifndef _CMOTOR_H
#define _CMOTOR_H

class cMotor {
public:
#pragma region Constructor y destructor
    /// <summary>
    /// Crea un objeto de tipo motor con la verificacion de seguridad falsa;
    /// </summary>
    /// <param name="_nivelDeAceite"></param>
    /// <param name="_nivelMaxAceite"></param>
    /// <param name="_numeroDeSerie"></param>
    /// <param name="_cilindros"></param>
    cMotor(ush _nivelDeAceite, ush _nivelMaxAceite, string _numeroDeSerie, string _cilindros);
    ~cMotor();
#pragma endregion

#pragma region Metodos funcionales especificos de la clase
    /// <summary>
    /// Verifica que los niveles de aceite 
    /// sean apropiados (nivel de acite max/2) y cambia la verificación de seguridad a aprobada.En
    /// caso de que no sean correctos lo informa
    /// </summary>
    /// <returns></returns>
    bool realizar_verificación_de_seguridad();
    
    /// <summary>
    /// permite rellenar el contenedor de aceite al máximo
    /// </summary>
    void Agregar_aceite();

    /// <summary>
    /// este método se llama al devolver un vehículo y setea 
    /// la verificación de seguridad como no realizada.
    /// </summary>
    void Devolucion_Vehiculo();
#pragma endregion

#pragma region To string e imprimir
    string to_string();
    void imprimir();
#pragma endregion

private:
#pragma region atributos de identificacion
    const string numeroDeSerie;
    const string cilindros;
#pragma endregion 

#pragma region atributos funcionales
    ush nivelDeAceite;
    ush nivelMaxAceite;
    bool verificacionDeSeguridad;
#pragma endregion
};


#endif //_CMOTOR_H