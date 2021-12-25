#include "rhomb.h"

rhomb::rhomb() = default;

void rhomb::SetSquare(double square)
{
	double sq = Base * Hight;
	try
	{
		if (square < 0 || square != sq)
		{
			throw exception("����������� ������� ������� �����");
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
			throw exception("� ����� ��� ������� �����");
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
	cout << "���� " << endl;
}

void rhomb::print(ostream & output) const
{
	output << "��������� " << Base << endl;
	output << "������ " << Hight << endl;
	output << "������� " << Side << endl;
	output << "���� " << Angle << endl;
	output << "������� " << Square << endl;
	output << "��������  " << Perimetr << endl;
}

ostream& operator<<(ostream & output, const rhomb& temp)
{
	temp.print(output);
	return output;
}
