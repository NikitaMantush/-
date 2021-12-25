#include <iostream>
#include <iomanip>
#include "trapezoid.h"
#include "rhomb.h"
#include "parallelogram.h"
#include "rectangle.h"


int main()
{
	setlocale(LC_ALL, "ru");
	constexpr int quantity = 4;
	quadrilateral* quadr[quantity];

	quadr[0] = new parallelogram(2, 1, 4, 60, 2, 12);
	quadr[1] = new rhomb(3, 6, 3, 40, 18, 12);
	quadr[2] = new rectangle(12, 9, 9, 45, 108, 15);
	quadr[3] = new trapezoid(12, 9, 4, 45, 4, 72);

	for (int i = 0; i < quantity; i++) 
	{
		cout << "Тип четырёхугольника ";
		quadr[i]->type_of_quadrilateral();
		cout << "Информация о четырёхугольнике " << endl;
		quadr[i]->print(cout);
	}

	return 0;
}