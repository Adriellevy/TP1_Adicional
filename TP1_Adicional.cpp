#include <iostream>
#include "gbl.h"
#include "cMotor.h"
#include "cVehiculo.h"
#include "cTenico.h"
int main()
{

    cMotor* motor1 = new cMotor(12, 15, "123", "4"); 
    cMotor* motor2 = new cMotor(12, 15, "ferrari", "8");
    cVehiculo* vehiculo1 = new cVehiculo(false, false, SUV, motor1, "123", "Renau", "sx", "2001"); 
    cVehiculo* vehiculo2 = new cVehiculo(false, false, SUV, motor1, "123", "fitito", "venom", "2022");
    vehiculo2->setMotor(motor2);
    cTecnico* tecnico = new cTecnico(SUV,"04132165","Alejandria");
    vehiculo1->verificar_seguridad();
    //En el programa se contempla que un tecnico no pueda tener varios autos a su disposicion, por lo que no deja asignar al 2do pasajero
    tecnico->SolicitarAuto(vehiculo1);
    tecnico->SolicitarAuto(vehiculo2);

    vehiculo2->imprimir();
    tecnico->Devolver();
    vehiculo2->verificar_seguridad();
    tecnico->SolicitarAuto(vehiculo2);

    tecnico->imprimir(); 

    delete motor1;
    delete motor2;
    delete vehiculo1;
    delete vehiculo2;
    delete tecnico;
}
