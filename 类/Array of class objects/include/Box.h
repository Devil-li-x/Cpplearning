#ifndef Box_H
#define Box_H
#include <iostream>
class  Box
{
    private:
        double length {1.0};
        double height {1.0};
        double width  {1.0};
    public:
        Box(double l , double h , double w);
        Box(double side);
        Box() ;
        Box(const Box& box);
        double volume ();
};

#endif

