/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   decoradorAlquilable.h
 * Author: MIGUEL
 *
 * Created on May 27, 2019, 9:06 PM
 */

#ifndef DECORADORALQUILABLE_H
#define DECORADORALQUILABLE_H
#include "alquilable.h"

class decoradorAlquilable: public alquilable {
public:
    decoradorAlquilable(alquilable*);
    alquilable* getAlquilable();
    void setAlquilable(alquilable*);
    string getDescripcion();
    string getTipo();
    double getPresupuesto(); 
    virtual ~decoradorAlquilable();
private:
    alquilable* alqui;

};

#endif /* DECORADORALQUILABLE_H */

