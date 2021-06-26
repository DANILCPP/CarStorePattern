#include "Car.h"
#include "CarStore.h"

#include <iostream>
#include <string>
using namespace std;


int main()
{
	CarStore* store = new CarStore;
	Car* a = nullptr;
	
	a = store->CreateCar();

}
