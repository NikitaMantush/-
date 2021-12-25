#include "rhomb.h"

rhomb::rhomb() = default;

void rhomb::SetSquare(double square)
{
	double sq = Base * Hight;
	try
	{
		if (square < 0 || square != sq)
		{
			throw exception("Неправильно введена площадь ромба");
		}
		Square = square;
	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
}
void rhomb::SetPerimetr(double perimetr)
{
	double perim = 4*Side;
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

double rhomb::GetSquare() const
{
	return Square;
}
double rhomb::GetPerimetr() const
{
	return Perimetr;
}

rhomb::rhomb(double base, double hight, double side, double angle, double square, double perimetr)
{
	try
	{
		if (side != base)
		{
			throw exception("У ромба все стороны равны");
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

void rhomb::type_of_quadrilateral()
{
	cout << "Ромб " << endl;
}

void rhomb::print(ostream & output) const
{
	output << "Основание " << Base << endl;
	output << "Высота " << Hight << endl;
	output << "Сторона " << Side << endl;
	output << "Угол " << Angle << endl;
	output << "Площадь " << Square << endl;
	output << "Периметр  " << Perimetr << endl;
}

ostream& operator<<(ostream & output, const rhomb& temp)
{
	temp.print(output);
	return output;
}
