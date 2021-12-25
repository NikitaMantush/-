#include "trapezoid.h"
trapezoid::trapezoid() = default;
void trapezoid::SetBase2(double base2)
{
	try
	{
		if (base2 < 0)
		{
			throw exception("��������� �� ����� ���� �������������");
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
			throw exception("����������� ��������� ������� ��������");
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
	cout << "�������� " << endl;
}

void trapezoid::print(ostream & output) const
{
	output << "��������� " << Base << endl;
	output << "������ " << Hight << endl;
	output << "������� " << Side << endl;
	output << "���� " << Angle << endl;
	output << "������ ��������� " << Base2 << endl;
	output << "������� " << Square << endl;
}

ostream& operator<<(ostream & output, const trapezoid& temp)
{
	temp.print(output);
	return output;
}

