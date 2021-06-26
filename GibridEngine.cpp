#include "GibridEngine.h"

GibridEngine::GibridEngine(Engine* engine) : engine(engine), second_engine(nullptr)
{}
GibridEngine::~GibridEngine()
{ 
	delete this->engine; 
}

void GibridEngine::ride_act()
{ 
	engine->ride_act(); 
}

void GibridEngine::refue_act()
{ 
	engine->refue_act();
}

void GibridEngine::cooling_engine()
{ 
	engine->cooling_engine();
}

void GibridEngine::warm_engine()
{ 
	engine->warm_engine(); 
}

void GibridEngine::choose_engine(Engine* engine)
{
	second_engine = this->engine;
	this->engine = engine; 
}

void GibridEngine::choose_engine()
{
	Engine* temp = second_engine;
	second_engine = this->engine;
	this->engine = temp;
}