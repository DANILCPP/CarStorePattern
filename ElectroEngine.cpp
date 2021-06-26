#include "ElectroEngine.h"


ElectroEngine::ElectroEngine()
	:Engine("ELECTRO")
{}
ElectroEngine::~ElectroEngine(){}

void ElectroEngine::ride_act(){
	cout << "\nHow much meters the car will ride? : ";
	float meters = 0;
	cin >> meters;

	float spent_volt = 0;
	spent_volt = (power_spend * meters) / 1000;

	int code_act = 0; 
	code_act = this->check_enable_ride(spent_volt);

	if (code_act == Success) {
		cout << "\n..." << " Car is riding " << "...";

		current_power = current_power - ((power_spend * meters) / 1000);
		current_temp = meters / 30;

		cout << "\nThe car finished riding. Has been spent " << spent_volt << " volt";
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


void ElectroEngine::refue_act(){
	cout << "\nHow much volt you gonna to refuel? : ";
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



void ElectroEngine::cooling_engine(){
	cout << "\nHow much minutes the car will be cooling? :";
	float coolling_time = 0;
	cin >> coolling_time;

	current_temp -= coolling_time / 3;

}
void ElectroEngine::warm_engine() {
	cout << "\nHow much minutes the car will be warming? :";
	float warming_time = 0;
	cin >> warming_time;

	current_temp += warming_time / 10;

}

