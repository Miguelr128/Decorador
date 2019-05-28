/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GPS.cpp
 * Author: MIGUEL
 * 
 * Created on May 27, 2019, 9:17 PM
 */

#include "GPS.h"

GPS::GPS(alquilable* al): decoradorAlquilable(al) {
}

string GPS::getDescripcion(){
    return decoradorAlquilable::getAlquilable()->getDescripcion()+" (GPS incluido)";
}

double GPS::getPresupuesto(){
    return decoradorAlquilable::getAlquilable()->getPresupuesto() + 10;
}

GPS::~GPS() {
}

