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
			throw exception("����������� ������� ������� ���������������");
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
			throw exception("����������� ������ �������� ���������������");
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
			throw exception("���� � ��������������� ��� ������� �����, �� ��� ����");
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
	cout << "��������������" << endl;
}

void parallelogram::print(ostream & output) const 
{
	output << "��������� " << Base << endl;
	output << "������ " << Hight << endl;
	output << "������� " << Side << endl;
	output << "���� " << Angle << endl;
	output << "��������  " << Perimetr << endl;
	output << "������� " << Square << endl;
}

ostream& operator<<(ostream & output, const parallelogram& temp)
{
	temp.print(output);
	return output;
}