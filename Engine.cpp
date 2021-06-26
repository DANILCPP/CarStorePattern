#include "Engine.h"


Engine::Engine(){}
Engine::Engine(string type) : engine_type_name(type){}
Engine::~Engine()
{
	delete engine_type;
}

void Engine::set_engine_type_name(string name)
{
	engine_type_name = name; 
}

void Engine::set_power_spend(float new_voltazh_spend) 
{ 
	power_spend = new_voltazh_spend; 
}

void Engine::set_power_capacity(int new_capacity)
{ 
	max_power_capacity = new_capacity;
}

void Engine::set_max_temp_border(int new_temp)
{
	max_temp_border = new_temp; 
}

void Engine::set_max_refue_temp_border(int new_temp)
{ 
	max_refue_temp_border = new_temp; 
}

void Engine::set_feature(){
	int cap = 0, temp_border = 0, refuel_temp = 0;
	float power_s = 0.0;

	cout << "\nEnter power spending of car`s engine :";
	cin >> power_s;
	power_spend = power_s;

	cout << "\nEnter power capacity of car`s engine :";
	cin >> cap;
	max_power_capacity = cap;

	cout << "\nEnter power MAX temp border of car`s engine :";
	cin >> temp_border;
	max_temp_border = temp_border;

	cout << "\nEnter power Max temp border for refueling of car`s engine :";
	cin >> refuel_temp;
	max_refue_temp_border = refuel_temp;
}

void Engine::show_engine_type_name() 
{ 
	cout << "\nEngune type: " << engine_type_name;
}

void Engine::show_current_temp() 
{
	cout << "\nNow, current temp is : " << current_temp; 
}

void Engine::show_max_temp_border()
{
	cout << "\nMax temp border of this engine is : " << max_temp_border;
}

void Engine::show_max_refue_temp_border() 
{
	cout << "\nMax refueling temp border is : " << max_refue_temp_border; 
}

void Engine::show_max_power_capacity() 
{
	cout << "\nMax power capacity is : " << max_power_capacity;
}

void Engine::show_current_power()
{ 
	cout << "\nCurrent power of engine is : " << current_power;
}

void Engine::show_power_spent() 
{
	cout << "\nPower spending of engine is : " << power_spend; 
}


int Engine::check_enable_ride(int spent) {
	if (current_power - spent < 0) {
		return 1;
	}
	if (current_temp > max_temp_border) {
		return 2;
	}
	if (current_temp < 0) {
		return 3;
	}
	return 0;
}

int Engine::check_enable_refuel(int add_power) {
	if (current_temp > max_refue_temp_border) {
		return 1;
	}
	if (current_temp < 0) {
		return 2;
	}
	return 0;
}