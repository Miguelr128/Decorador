/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   autoSedan.cpp
 * Author: MIGUEL
 * 
 * Created on May 27, 2019, 8:52 PM
 */

#include "autoSedan.h"

autoSedan::autoSedan(string desc): descripcion(desc) {
}

string autoSedan::getDescripcion(){
    return descripcion;
}

string autoSedan::getTipo(){
    return tipo;
}

double autoSedan::getPresupuesto(){
    return costo;
}


autoSedan::~autoSedan() {
}

