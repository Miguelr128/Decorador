/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   decoradorAlquilable.cpp
 * Author: MIGUEL
 * 
 * Created on May 27, 2019, 9:06 PM
 */

#include "decoradorAlquilable.h"

decoradorAlquilable::decoradorAlquilable(alquilable* al): alqui(al) {
}

alquilable* decoradorAlquilable::getAlquilable(){
    return alqui;
}

void decoradorAlquilable::setAlquilable(alquilable* al){
    alqui = al;
}

string decoradorAlquilable::getDescripcion(){
    return getAlquilable()->getDescripcion();
}

string decoradorAlquilable::getTipo(){
    return getAlquilable()->getTipo();
}

double decoradorAlquilable::getPresupuesto(){
    return getAlquilable()->getPresupuesto();
}

decoradorAlquilable::~decoradorAlquilable() {
}

