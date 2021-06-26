#include "Car.h"

Car::Car() {}

Car::Car(Engine* engine) 
	: engine(engine)
{}

Car::~Car() 
{
	delete engine; 
}


void Car::ride() 
{
	engine->ride_act();
}

void Car::refuel()
{ 
	engine->refue_act(); 
}

void Car::coolling() 
{
	engine->cooling_engine(); 
}

void Car::warmingUp()
{
	engine->warm_engine(); 
}


void Car::set_model_name(string Model_name) 
{
	model_name = Model_name; 
}

void Car::set_mark_name(string Mark_name)
{
	mark_name = Mark_name;
}

void Car::set_body_type(string Body_type) 
{
	body_type = Body_type; 
}


void Car::set_car_power_spend(float new_voltazh_spend) 
{
	engine->set_power_spend(new_voltazh_spend); 
}

void Car::set_car_power_capacity(int new_capacity)
{ 
	engine->set_power_capacity(new_capacity);
}

void Car::set_car_max_temp_border(int new_temp)
{ 
	engine->set_max_temp_border(new_temp); 
}

void Car::set_car_max_refue_temp_border(int new_temp) 
{
	engine->set_max_refue_temp_border(new_temp); 
}


void Car::set_engine_type(Engine* engine)
{
	this->engine = engine; 
}

void Car::set_general_feature(){
	string Model, Mark, Body;

	cout << "\nEnter model name of the car: ";
	cin >> Model;
	set_model_name(Model);

	cout << "\nEnter mark name of the car: ";
	cin >> Mark;
	set_mark_name(Mark);

	cout << "\nEnter body type of the car: ";
	cin >> Body;
	set_body_type(Body);

	cout << "\nEnter type of engine\n1 - Disel\t2 - Electro\t3 - Gibrid\nEnter: ";
	int choose = 0;
	cin >> choose;

	if (choose == 1) {
		this->engine = new DiselEngine;
		return;
	}
	if (choose == 2) {
		this->engine = new ElectroEngine;
		return;
	}
	if (choose == 3) {
		this->engine = new GibridEngine(new DiselEngine);
		return;
	}
}
void Car::set_engine_feature() { engine->set_feature(); }

void Car::Show_model_name() 
{
	cout << "\nModel: " << model_name; 
}

void Car::Show_mark_name()
{
	cout << "\nMark: " << mark_name; 
}

void Car::Show_body_type() 
{
	cout << "\nBody: " << body_type; 
}

void Car::Show_engine() 
{
	cout << "\nEngine type: " << engine; 
}


void Car::show_car_max_temp_border() 
{
	engine->show_max_temp_border(); 
}

void Car::show_car_max_refue_temp_border() 
{
	engine->show_max_refue_temp_border(); 
}

void Car::show_car_max_power_capacity() 
{
	engine->show_max_power_capacity(); 
}

void Car::show_car_current_temp() 
{
	engine->show_current_temp(); 
}

void Car::show_car_current_power() 
{
	engine->show_current_power();
}

void Car::show_car_power_spent() 
{ 
	engine->show_power_spent();
}
