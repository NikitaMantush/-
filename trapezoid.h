#pragma once
#include "quadrilateral.h"

class trapezoid:
    public quadrilateral
{
private:
    double Square;  // in sm
    double Base2;

public:
    trapezoid();
    void SetBase2(double base2);
    double GetBase2() const;
    void SetSquare(double square);
    double GetSquare() const;
    trapezoid(double base, double hight, double side, double angle, double square, double base2);
    virtual void type_of_quadrilateral();
    virtual void print(ostream& output) const;
    friend ostream& operator<<(ostream& output, const trapezoid& temp);

};

