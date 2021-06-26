#pragma once
#include "Enums.h"
#include <iostream>
#include <string>
using namespace std;

class Engine
{
public:
	Engine();
	Engine(string type);
	virtual ~Engine();

	void set_power_spend(float new_voltazh_spend);
	void set_power_capacity(int new_capacity);
	void set_max_temp_border(int new_temp);
	void set_max_refue_temp_border(int new_temp);
	void set_feature();

	void show_max_temp_border();
	void show_max_refue_temp_border();
	void show_engine_type_name();
	void show_max_power_capacity();
	void show_current_temp();
	void show_current_power();
	void show_power_spent();
	
	virtual void ride_act() = 0;
	virtual void refue_act() = 0;
	virtual void cooling_engine() = 0;
	virtual void warm_engine() = 0;

	
	int max_temp_border = 0;
	int max_refue_temp_border = 0;
	Engine* engine_type = nullptr;

protected:
	void set_engine_type_name(string name);
	int check_enable_ride(int spent);
	int check_enable_refuel(int add_power);

	string engine_type_name = "";
	int max_power_capacity = 0;
	float current_temp = 0;
	float current_power = 0;
	float power_spend = 0.0;
};

