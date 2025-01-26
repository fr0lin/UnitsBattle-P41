#pragma once
#include "Weapon.h"

class Bow :
    public Weapon
{
protected:
public:
    Bow();
    void UpGrade() override;
    virtual Weapon* clone() const override;
};