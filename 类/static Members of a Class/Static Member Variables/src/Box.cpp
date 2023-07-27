#include "Box.h"
#include <iostream>
    
    Box::Box(double l, double h, double w):length{l},height{h},width{w}{
        ++Objectcount;
        std::cout<<"这是1号构造函数"<<std::endl;
    };
    Box::Box(double side):Box(side,side,side){
        
        std::cout<<"这是2号构造函数"<<std::endl;
    };
    Box::Box(){
        std::cout<<"这是默认构造函数"<<std::endl;
        ++Objectcount;
    };
    Box::Box(const Box& box):length{box.length},height{box.height},width{box.width}{
        std::cout<<"这是复制构造函数"<<std::endl;
        ++Objectcount;
    };
    double Box::volume(){
        return length*height*width;
    };
