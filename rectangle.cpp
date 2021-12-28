#include "rectangle.h"
rectangle::rectangle() = default;

void rectangle::SetSquare(double square)
{
	try
	{
		double sq = Side * Base;
		if (square < 0 || square != sq || Hight != Side)
		{
			throw exception("Неправильно вычесленна площадь прямоугольника");
		}
		if (Hight != Side)
		{
			throw exception("Выста должа быть равна стороне прямоугольника");

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
			throw exception("Неправильно посчитана диагональ прямоугольника");
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
		if (angle != 90)
		{
			throw exception("У прямокгольника все углы = 90");
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
	cout << "Прямоугольник " << endl;
}

void rectangle::print(ostream & output) const
{
	output << "Основание " << Base << endl;
	output << "Высота " << Hight << endl;
	output << "Сторона " << Side << endl;
	output << "Угол " << Angle << endl;
	output << "Площадь " << Square << endl;
	output << "Диагональ " << Diagonal << endl;
}

ostream& operator<<(ostream & output, const rectangle& temp)
{
	temp.print(output);
	return output;
}
