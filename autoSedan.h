/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   autoSedan.h
 * Author: MIGUEL
 *
 * Created on May 27, 2019, 8:52 PM
 */

#ifndef AUTOSEDAN_H
#define AUTOSEDAN_H
#include "alquilable.h"

class autoSedan: public alquilable {
public:
    autoSedan(string);
    string getDescripcion();
    string getTipo();
    double getPresupuesto(); 
    virtual ~autoSedan();
private:
    double costo = 100;
    string tipo = "Sedan";
    string descripcion;

};

#endif /* AUTOSEDAN_H */

