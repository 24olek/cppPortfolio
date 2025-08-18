//Code includes required headers and namespace to make code thicker.
#include <string>
#include <iostream>
using namespace std;
//Struct "Car" represents object with specification variables and own functions.
struct Car {
	Car(string newModel, string newProducer, int newYearOfProduction) {
		this->model = newModel;
		this->producer = newProducer;
		this->yearOfProduction = newYearOfProduction;
	}
	//Variables in struct are public by default.
	string model;
	string producer;
	//This variable, as in reality, remains protected from outside.
	//It can be inherited by child classes.
protected:
	int yearOfProduction;

	//Struct contains functions allowing to read and modify its variables.
	//Functions also return values contained by these variables.
	string GetModel() {
		cout << "This car's model is " << this->model;
		return this->model;
	}
	string SetModel(string newModel) {
		cout << "This car's model has been set to " << newModel;
		return this->model;
	}
	string GetProducer() {
		cout << "This car's producer is " << this->model;
		return this->producer;
	}
	string SetProducer(string newProducer) {
		cout << "This car's producer has been set to " << newProducer;
		return this->producer;
	}
	int GetYearOfProduction() {
		cout << "This car's year of production is " << this->yearOfProduction;
		return this->yearOfProduction;
	}
	int SetYearOfProduction(string newYearOfProduction) {
		cout << "This car's year of production has been set to " << newYearOfProduction;
		return this->yearOfProduction;
	}
	//Struct has also functional features.
	void Honk() {
		cout << "Honk honk!";
	}
	void Drive() {
		cout << "Broom broom!";
	}
};
