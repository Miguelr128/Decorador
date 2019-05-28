/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GPS.h
 * Author: MIGUEL
 *
 * Created on May 27, 2019, 9:17 PM
 */

#ifndef GPS_H
#define GPS_H
#include "decoradorAlquilable.h"

class GPS: public decoradorAlquilable {
public:
    GPS(alquilable*);
    string getDescripcion();
    double getPresupuesto();
    virtual ~GPS();

};

#endif /* GPS_H */

