#pragma once
#include <string>
#include <iostream>
#include <ostream>
using namespace std;

class quadrilateral
{
protected:
//	double Square;
	double Base;
	double Hight;
	double Side;
	double Angle;
public:
	quadrilateral();
	//double GetSquare() const;
	double GetBase() const;
	double GetHight() const;
	double GetSide() const;
	double GetAngle() const;
	//void SetSquare(double square);
	void SetBase(double base);
	void SetHight(double hight);
	void SetSide(double side);
	void SetAngle(double angle);
	quadrilateral( /*double square,*/ double base, double hight, double side, double angle);
	virtual void type_of_quadrilateral() = 0;
	virtual void print(ostream& output) const;
	friend ostream& operator<<(ostream& output, const quadrilateral& temp);
};

