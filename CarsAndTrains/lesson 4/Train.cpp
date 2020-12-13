#include "Train.h"
#include"Car.h"

Train::Train(const size_t num, const size_t count, const string name)
{
	number = num;
	carCount = count;
	this->name = name;
	for (size_t i = 0; i < carCount; i++)
	{
		cars[i] = Car();
	}
}

Train::Train(const Train& train)
{
	setName(train.name);
	setNumber(train.number);
	this->carCount = train.carCount;
	for (size_t i = 0; i < carCount; i++)
	{
		this->cars[i] = train.cars[i];
	}
}

void Train::setName(const string& n)
{
	this->name = n;
}

void Train::setNumber(const size_t& n)
{
	this->number = n;
}

string Train::getName() const
{
	return name;
}

size_t Train::getNumber() const
{
	return number;
}

size_t Train::getCarCount() const
{
	return carCount;
}

int Train::allPassengers() const
{
	int sum = 0;
	for (size_t i = 0; i < carCount; i++)
	{
		sum += cars[i].getCountPassengers();
	}
	return sum;
}

Car Train::maxCountPassengers() const
{
	Car max = cars[0];
	for (size_t i = 1; i < carCount; i++)
	{
		if (max.getCountPassengers()<cars[i].getCountPassengers())
		{
			max = cars[i];
		}
	}
	return max;
}

Car Train::minCountPassengers() const
{
	Car min = cars[0];
	for (size_t i = 1; i < carCount; i++)
	{
		if (min.getCountPassengers() > cars[i].getCountPassengers())
		{
			min = cars[i];
		}
	}
	return min;
}

void Train::print() const
{
	cout << "Name: " << getName() << endl;
	cout << "Number: " << getNumber() << endl;
	cout << "Count cars: " << getCarCount() << endl;
	cout << "Cars: " << endl;
	for (size_t i = 0; i < carCount; i++)
		cars[i].print();
	cout << "All Passegers: " << allPassengers() << endl;
	cout << "Number of car with Max passegers: " << maxCountPassengers().getTypeStr() << endl;
	cout << "Number of car with Min passegers: " << minCountPassengers().getTypeStr() << endl;
}
