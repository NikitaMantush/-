#include "parallelogram.h"
#include <cmath>

parallelogram::parallelogram() = default;

void parallelogram::SetSquare(double square)
{
	double sq = Base * Hight;
	try
	{
		if (square < 0 || square != sq)
		{
			throw exception("Неправильно введена площадь параллелограмма");
		}
		Square = square;
	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
	
}
void parallelogram::SetPerimetr(double perimetr)
{
	double perim = 2*Base + 2*Side;
	try
	{
		if (perimetr != perim)
		{
			throw exception("Неправильно введен периметр параллелограмма");
		}
		Perimetr = perimetr;
	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
}

double parallelogram::GetSquare() const
{
	return Square;
}
double parallelogram::GetPerimetr() const
{
	return Perimetr;
}
parallelogram::parallelogram(double base, double hight, double side, double angle, double square, double perimetr)
{
	try
	{
		if (side==base)
		{
			throw exception("Если у параллелограмма все стороны равны, то это ромб");
		}
	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
	SetBase(base);
	SetHight(hight);
	SetSide(side);
	SetAngle(angle);
	SetSquare(square);
	SetPerimetr(perimetr);
}

void parallelogram::type_of_quadrilateral() 
{
	cout << "Параллелограмм" << endl;
}

void parallelogram::print(ostream & output) const 
{
	output << "Основание " << Base << endl;
	output << "Высота " << Hight << endl;
	output << "Сторона " << Side << endl;
	output << "Угол " << Angle << endl;
	output << "Периметр  " << Perimetr << endl;
	output << "Площадь " << Square << endl;
}

ostream& operator<<(ostream & output, const parallelogram& temp)
{
	temp.print(output);
	return output;
}