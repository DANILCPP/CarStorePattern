#include "DiselEngine.h"

DiselEngine::DiselEngine()
	:Engine("DISEL")
{}
DiselEngine::~DiselEngine() {}

void DiselEngine::ride_act() {
	cout << "\nHow much meters the car will ride? : ";
	float meters = 0;
	cin >> meters;

	float spent_disel = 0;
	spent_disel = (power_spend * meters) / 1000;

	int code_act = 0;
	code_act = this->check_enable_ride(spent_disel);

	if (code_act == Success) {
		cout << "\n..." << " Car is riding " << "...";

		current_power = current_power - ((power_spend * meters) / 1000);
		current_temp = meters / 15;

		cout << "\nThe car finished riding. Has been spent " << spent_disel << " litres of disel";
		return;
	}
	if (code_act == NotPower) {
		cout << "\n----\tNot enough power for ride";
		return;
	}
	if (code_act == HightTemp) {
		cout << "\n----\tToo hight engine`s temperature";
		return;
	}
	if (code_act == LowTemp) {
		cout << "\n----\tToo low engine`s temperature";
		return;
	}
}


void DiselEngine::refue_act() {
	cout << "\nHow much disel litres you gonna to refuel? : ";
	int add_power = 0;
	cin >> add_power;

	int code_act = 0;
	code_act = this->check_enable_refuel(add_power);

	if (code_act == Success) {
		current_power += add_power;
		if (current_power > max_power_capacity) {
			current_power = current_power - (current_power - max_power_capacity);
		}
		return;
	}
	if (code_act == HightRefTemp) {
		cout << "\n----\tToo hight engine`s temperature for refueling";
		return;
	}
	if (code_act == LowRefTemp) {
		cout << "\n----\tToo low engine`s temperature";
		return;
	}
}



void DiselEngine::cooling_engine() {
	cout << "\nHow much minutes the car will be cooling? :";
	float coolling_time = 0;
	cin >> coolling_time;

	current_temp -= coolling_time / 10;

}
void DiselEngine::warm_engine() {
	cout << "\nHow much minutes the car will be warming? :";
	float warming_time = 0;
	cin >> warming_time;

	current_temp += warming_time / 3;

}