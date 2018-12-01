#pragma once
#include <string>
#include <iostream>
using namespace std;

class Helicopter {
	// Declare fields.
protected:

	int height;
	string name_pilot;
	
public:

	int weight = 3;
	string type = "military";

private:

	string Name;
	int number_of_passengers;
	double max_speed;

public:
	// Declare construct.
	Helicopter(string HelicopterName, int NumberOfPassengers,  double maxSpeed, int Height, string NamePilot)
	{
		
		this->Name = HelicopterName;
		this->number_of_passengers = NumberOfPassengers;
		this->max_speed = maxSpeed;
		this->height = Height;
		this->name_pilot = NamePilot;
		printf(" flight started\n");
	}

	~Helicopter()
	{
	
		printf("flight ended\n");
	}
	

	//  Declare methos.
	string getName()
	{
		return this->Name;
	}

	int getNumberOfPassengers()
	{
		return this->number_of_passengers;
	}

	double getMaxV()
	{
		return this->max_speed;
	}

	int getTable()
	{
		return this->weight;
	}

	string getType()
	{
		return this->type;
	}

	int getHeight()
	{
		return this->height;
	}

	string getNamePilot()
	{
		return this->name_pilot;
	}
};





