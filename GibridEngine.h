#pragma once
#include "Engine.h"
class GibridEngine :
    public Engine
{
public:
    GibridEngine(Engine* engine);
    ~GibridEngine();

    void ride_act();
    void refue_act();
    void cooling_engine();
    void warm_engine();

    void choose_engine(Engine* engine);
    void choose_engine();

    Engine* engine;
    Engine* second_engine;
};

