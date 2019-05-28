/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   autoSUV.h
 * Author: MIGUEL
 *
 * Created on May 27, 2019, 9:00 PM
 */

#ifndef AUTOSUV_H
#define AUTOSUV_H
#include "alquilable.h"

class autoSUV: public alquilable {
public:
    autoSUV(string);
    string getDescripcion();
    string getTipo();
    double getPresupuesto(); 
    virtual ~autoSUV();
private:
    double costo = 100;
    string tipo = "SUV";
    string descripcion;

};

#endif /* AUTOSUV_H */

