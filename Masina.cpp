#include "Masina.h"

#include "exceptions.hpp"

//    ObiectMiscator* clone() const override {
//        return new Masina(*this);
//    }

Masina::Masina(class ClockO* cl, const std::shared_ptr<Strada> s): ObiectMiscator(cl, s) { viteza = 2; }

Masina::Masina(class ClockO* cl, int a, int b, int dir) : ObiectMiscator(cl, a, b, dir) { viteza = 2; }

void Masina::transport() { Misca(); }

//std::shared_ptr<ObiectMiscator>
//    Masina* clone() const override {
//        return new Masina(*this);
//    }




