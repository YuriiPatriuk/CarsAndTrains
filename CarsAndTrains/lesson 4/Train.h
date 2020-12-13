#pragma once
#include<string>
#include"Car.h"
class Train
{
public:
	Train() 
		:carCount(0)
	{
		number = 0;
		name = "default";
	}
	Train(const size_t num, const size_t count, const string name);
	Train(const Train& train);
	void setName(const string& n);
	void setNumber(const size_t& n);
	string getName() const;
	size_t getNumber() const;
	size_t getCarCount() const;

	int allPassengers() const;
	Car maxCountPassengers() const;
	Car minCountPassengers() const;
	void print() const;

private:
	size_t number=0;
	string name;
	size_t carCount = 0;
	Car* cars = new Car[carCount];
};


