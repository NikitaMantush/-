#pragma once
#include "quadrilateral.h"

class parallelogram:
	public quadrilateral
{
private:
    double Square;  // in sm
    double Perimetr;
public:
    parallelogram();
    void SetSquare(double square);
    double GetSquare() const;
    void SetPerimetr(double perimetr);
    double GetPerimetr() const;
    parallelogram(double base, double hight, double side, double angle, double square, double perimetr);
    virtual void type_of_quadrilateral();
    virtual void print(ostream& output) const;
    friend ostream& operator<<(ostream& output, const parallelogram& temp);
};

