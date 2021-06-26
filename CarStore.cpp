#include "CarStore.h"

Car* CarStore::CreateCar() {

	Car* car = nullptr;
	car->set_general_feature();
	
	Engine* engine = nullptr;
	engine->set_feature();

	car->set_engine_type(engine);
	
	return car;
}