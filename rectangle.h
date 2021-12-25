#pragma once
#include "quadrilateral.h"
class rectangle:
    public quadrilateral
{
private:
    double Square;  // in sm
    double Diagonal;
public:
    rectangle();
    void SetSquare(double square);
    double GetSquare() const;
    void SetDiagonal(double diagonal);
    double GetDiagonal() const;
    rectangle(double base, double hight, double side, double angle, double square, double diagonal);
    virtual void type_of_quadrilateral();
    virtual void print(ostream& output) const;
    friend ostream& operator<<(ostream& output, const rectangle& temp);
};

