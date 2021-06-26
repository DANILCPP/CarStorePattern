#pragma once
#include "Enums.h"

#include "Engine.h"

#include "DiselEngine.h"
#include "GibridEngine.h"
#include "ElectroEngine.h"

#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car();
	Car(Engine* engine);
	~Car();

	void ride();
	void refuel();
	void coolling();
	void warmingUp();

	void set_model_name(string Model_name);
	void set_mark_name(string Mark_name);
	void set_body_type(string Body_type);
	void set_car_power_spend(float new_voltazh_spend);
	void set_car_power_capacity(int new_capacity);
	void set_car_max_temp_border(int new_temp);
	void set_car_max_refue_temp_border(int new_temp);
	void set_engine_type(Engine* engine);
	void set_general_feature();
	void set_engine_feature();

	void Show_model_name();
	void Show_mark_name();
	void Show_body_type();
	void Show_engine();

	void show_car_max_temp_border();
	void show_car_max_refue_temp_border();
	void show_car_max_power_capacity();
	void show_car_current_temp();
	void show_car_current_power();
	void show_car_power_spent();

	string model_name = "";
	string mark_name = "";
	string body_type = "";

	Engine* engine = nullptr;
};

