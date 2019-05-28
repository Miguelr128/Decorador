/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   autoSUV.cpp
 * Author: MIGUEL
 * 
 * Created on May 27, 2019, 9:00 PM
 */

#include "autoSUV.h"

autoSUV::autoSUV(string desc): descripcion(desc) {
}

string autoSUV::getDescripcion(){
    return descripcion;
}

string autoSUV::getTipo(){
    return tipo;
}

double autoSUV::getPresupuesto(){
    return costo;
}

autoSUV::~autoSUV() {
}

