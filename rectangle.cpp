#include "rectangle.h"
rectangle::rectangle() = default;

void rectangle::SetSquare(double square)
{
	try
	{
		double sq = Side * Base;
		if (square < 0 || square != sq || Hight != Side)
		{
			throw exception("����������� ���������� ������� ��������������");
		}
		if (Hight != Side)
		{
			throw exception("����� ����� ���� ����� ������� ��������������");

		}
		Square = square;
	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
}

double rectangle::GetSquare() const
{
	return Square;
}

void rectangle::SetDiagonal(double diagonal)
{
	double diag = sqrt(pow(Base,2)+pow(Side,2));
	try
	{
		if (diag !=diagonal)
		{
			throw exception("����������� ��������� ��������� ��������������");
		}
		Diagonal = diagonal;

	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		exit(0);
	}
}
double rectangle::GetDiagonal() const
{
	return Diagonal;
}



rectangle::rectangle(double base, double hight, double side, double angle, double square, double diagonal)
{
	try
	{
		if (angle != 45)
		{
			throw exception("� �������������� ��� ���� = 45");
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
	SetDiagonal(diagonal);
}

void rectangle::type_of_quadrilateral()
{
	cout << "������������� " << endl;
}

void rectangle::print(ostream & output) const
{
	output << "��������� " << Base << endl;
	output << "������ " << Hight << endl;
	output << "������� " << Side << endl;
	output << "���� " << Angle << endl;
	output << "������� " << Square << endl;
	output << "��������� " << Diagonal << endl;
}

ostream& operator<<(ostream & output, const rectangle& temp)
{
	temp.print(output);
	return output;
}
