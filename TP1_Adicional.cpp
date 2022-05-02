#include <iostream>
#include "gbl.h"
#include "cMotor.h"
#include "cVehiculo.h"
#include "cTenico.h"
int main()
{

    cMotor* motor = new cMotor(12, 15, "123", "4"); 
    cVehiculo* vehiculo = new cVehiculo(false, false, SUV, motor, "123", "Renau", "sx", "2001"); 
    cTecnico* tecnico = new cTecnico(SUV,"04132165","Alejandria");
    vehiculo->verificar_seguridad();
    tecnico->SolicitarAuto(vehiculo);
}
