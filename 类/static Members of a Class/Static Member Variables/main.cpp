#include "Box.h"
#include <iostream>

int main(){
    std::cout<<"共有"<<Box::Objectcount<<"个对象";
    Box box1(2.0,3.0,4.0);
    Box box2(5.0);
    Box box3(box2);
    std::cout<<"盒子1的体积是："<<box1.volume()<<std::endl;
    std::cout<<"盒子2的体积是："<<box2.volume()<<std::endl;
    std::cout<<"盒子3的体积是："<<box3.volume()<<std::endl;
    Box boxes[6] {box1,box2,box3,Box{2.0}};
    std::cout<<"共有"<<Box::Objectcount<<"个对象";

}