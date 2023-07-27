#ifndef BOX_H
#define BOX_H
class Box
{
private:
    double length;
    double height;
    double width;
    
public:
    Box(double l, double h, double w);
    Box(double side);
    Box();
    Box(const Box& box);
    double volume();
    static inline int Objectcount {} ;
    
};


#endif