#include <iostream>
#include <Box.h>

Box::Box(double l , double h ,double w):length {l},height{h},width{w}{
    std::cout<<"这是构造函数1"<<std::endl;
}
Box::Box(double side):Box(side,side,side){
    std::cout<<"这是构造函数2"<<std::endl;
}
Box::Box(const Box& box){
    length = box.length+1;
    height = box.height;
    width = box.width;
    std::cout<<"这是复制构造函数"<<std::endl;
}
Box::Box()
{
    std::cout<<"这是默认构造函数"<<std::endl;
}

double Box::volume(){
    return length*height*width;
};

