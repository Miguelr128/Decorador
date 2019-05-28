/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   alquilable.h
 * Author: MIGUEL
 *
 * Created on May 27, 2019, 8:46 PM
 */

#ifndef ALQUILABLE_H
#define ALQUILABLE_H
#include <sstream>
using namespace std;

class alquilable {
public:
    virtual string getDescripcion() = 0;
    virtual string getTipo() = 0;
    virtual double getPresupuesto() = 0;
    
};


#endif /* ALQUILABLE_H */

