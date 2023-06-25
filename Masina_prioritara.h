#pragma once

#ifndef Masina_prioritara_h
#define Masina_prioritara_h

class Subject_obiecte;

#include "ObiectMiscator.h"
#include "Clock.h"
#include "Strada.h"
#include "Intersectie.h"
#include "Subject.h"
#include "exceptions.hpp"
#include "StrategyPattern.h"


// ----------------------------------------------
//masinile prioritare nu stau la semafor si au viteza mai mare; de aceea, pot aparea coliziuni
class Masina_prioritara: public ObiectMiscator, public Interfata_Transport {
protected:
    Masina_prioritara(const Masina_prioritara& other) = default; //cc
    Masina_prioritara& operator=(const Masina_prioritara& other) = default; //op=
    
    //constructor virtual
public:
    
    Masina_prioritara(class ClockO* cl);
    
    Masina_prioritara(class ClockO* cl, const std::shared_ptr<Strada> s);
    
    Masina_prioritara(class ClockO* cl, int a, int b, int dir);
    
    void Misca() override;
    
    void transport();
};

#endif /* ObiecteMiscatoare_h */
