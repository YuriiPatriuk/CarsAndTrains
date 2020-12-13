#include <iostream>
#include<string>
#include<ctime>
#include "Car.h"
#include "Train.h"
using namespace std;


int main()
{
	srand(time(0));
	/*Car car1;
	car1.print();
	Car car2;
	car2.print();*/

	Train train(4, 3, "First");
	train.print();


	return 0;
}
