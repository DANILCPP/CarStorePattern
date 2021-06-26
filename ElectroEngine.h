#pragma once
#include "Engine.h"
class ElectroEngine :
    public Engine
{
public:
    ElectroEngine();
    ~ElectroEngine() override;

    void ride_act() override;
    void refue_act() override;
    void cooling_engine() override;
    void warm_engine() override;
};

