#pragma once
#include "quadrilateral.h"
class rhomb:
    public quadrilateral
{
private:
    double Square;  // in sm
    double Perimetr;
public:
    rhomb();
    void SetSquare(double square);
    double GetSquare() const;
    void SetPerimetr(double perimetr);
    double GetPerimetr() const;
    rhomb(double base, double hight, double side, double angle, double square, double perimetr);
    virtual void type_of_quadrilateral();
    virtual void print(ostream& output) const;
    friend ostream& operator<<(ostream& output, const rhomb& temp);

};

