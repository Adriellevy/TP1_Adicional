#include "gbl.h"
#ifndef _CMOTOR_H
#define _CMOTOR_H

class cMotor {
public:
    cMotor(ush _nivelDeAceite, ush _nivelMaxAceite, string _numeroDeSerie, string _cilindros);
    ~cMotor();
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
    string to_string();
    void imprimir();
private:
    const string numeroDeSerie;
    const string cilindros;
    ush nivelDeAceite;
    ush nivelMaxAceite;
    bool verificacionDeSeguridad;
};


#endif //_CMOTOR_H