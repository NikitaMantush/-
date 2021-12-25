#include "quadrilateral.h"
quadrilateral::quadrilateral() = default;

void quadrilateral::SetBase(double base ) 
{
	if (base < 0)
	{
		throw exception("��������� �� ����� ���� �������������");
	}
	Base = base;
}

void quadrilateral::SetHight(double hight)
{
	if (hight < 0)
	{
		throw exception("������ �� ����� ���� �������������");
	}
	Hight=hight;
}

void quadrilateral::SetSide(double side)
{
	if (side < 0)
	{
		throw exception("������� �� ����� ���� �������������");
	}
	Side = side;
}

void quadrilateral::SetAngle(double angle)
{
	if (angle < 0 || angle>90)
	{
		throw exception("����������� ���� ����");
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
			throw exception("������ �� ����� ���� ������ ������� ");
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
	output << "��������� " << Base << endl;
	output << "������ " << Hight << endl;
	output << "������� " << Side << endl;
	output << "���� " << Angle << endl;
}

ostream& operator<<(ostream& output, const quadrilateral& temp)
{
	temp.print(output);
	return output;
}