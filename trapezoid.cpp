#include "trapezoid.h"
trapezoid::trapezoid() = default;
void trapezoid::SetBase2(double base2)
{
	try
	{
		if (base2 < 0)
		{
			throw exception("Основание не может быть отрицательным");
		}
		Base2 = base2;

	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
}
double trapezoid::GetBase2() const
{
	return Base2;
}


void trapezoid::SetSquare(double square)
{
	double sq = ((Base + Base2) / 2 )* Hight;
	try
	{
		if (square < 0 || square != sq)
		{
			throw exception("Неправильно посчитана площадь трапеции");
		}
		Square = square;

	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
}

double trapezoid::GetSquare() const
{
	return Square;
}

trapezoid::trapezoid(double base, double hight, double side, double angle, double base2, double square)
{
	SetBase(base);
	SetHight(hight);
	SetSide(side);
	SetAngle(angle);
	SetBase2(base2);
	SetSquare(square);
}

void trapezoid::type_of_quadrilateral()
{
	cout << "Трапеция " << endl;
}

void trapezoid::print(ostream & output) const
{
	output << "Основание " << Base << endl;
	output << "Высота " << Hight << endl;
	output << "Сторона " << Side << endl;
	output << "Угол " << Angle << endl;
	output << "Второе основание " << Base2 << endl;
	output << "Площадь " << Square << endl;
}

ostream& operator<<(ostream & output, const trapezoid& temp)
{
	temp.print(output);
	return output;
}

