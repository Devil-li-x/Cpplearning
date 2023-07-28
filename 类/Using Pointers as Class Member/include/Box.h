#ifndef BOX_H
#define BOX_H
#include<iostream>
#include<iomanip>
class Box
{
private:
    double length {1.0};
    double height {1.0};
    double width  {1.0};
public:
    Box(double l,double h,double w):length {l},height{h},width{w}{};
    Box()=default;
    double volume() 
    {
        return length*height*width;
    }

    int compare( Box& box){
        if (volume()<box.volume())return -1;
        if (volume()==box.volume())return 0;
        return +1;   
    }
    void listBox()
    {
        std::cout<<"Box("<<std::setw(2)<<length<<","
                         <<std::setw(2)<<width<<","
                         <<std::setw(2)<<height<<")";
    };
    ~Box() = default;
};


#endif