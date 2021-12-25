#include "quadrilateral.h"
quadrilateral::quadrilateral() = default;

void quadrilateral::SetBase(double base ) 
{
	if (base < 0)
	{
		throw exception("Основание не может быть отрицательным");
	}
	Base = base;
}

void quadrilateral::SetHight(double hight)
{
	if (hight < 0)
	{
		throw exception("Высота не может быть отрицательной");
	}
	Hight=hight;
}

void quadrilateral::SetSide(double side)
{
	if (side < 0)
	{
		throw exception("Сторона не может быть отрицательной");
	}
	Side = side;
}

void quadrilateral::SetAngle(double angle)
{
	if (angle < 0 || angle>90)
	{
		throw exception("Некоректный ввод угла");
	}
	Angle = angle;
}

double quadrilateral::GetBase() const
{
	return Base;
}
double quadrilateral::GetHight() const
{
	return Hight;
}
double quadrilateral::GetSide() const
{
	return Side;
}
double quadrilateral::GetAngle() const
{
	return Angle;
}
quadrilateral::quadrilateral(double base, double hight, double side, double angle)
{
	try
	{
		if (hight>side)
		{
			throw exception("Высота не может быть больше стороны ");
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
}
void quadrilateral::print(ostream& output) const
{
	output << "Основание " << Base << endl;
	output << "Высота " << Hight << endl;
	output << "Сторона " << Side << endl;
	output << "Угол " << Angle << endl;
}

ostream& operator<<(ostream& output, const quadrilateral& temp)
{
	temp.print(output);
	return output;
}