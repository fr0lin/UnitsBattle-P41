#pragma once
#include "Weapon.h"

class Stick :
    public Weapon
{
protected:
public:
    Stick();
    void UpGrade() override;
    virtual Weapon* clone() const override;
};