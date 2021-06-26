#pragma once
#include "Engine.h"
class DiselEngine :
    public Engine
{
public:
    DiselEngine();
    ~DiselEngine() override;

    void ride_act() override;
    void refue_act() override;
    void cooling_engine() override;
    void warm_engine() override;
};

