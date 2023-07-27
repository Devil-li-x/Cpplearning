#include<iostream>
#include<memory>
#include "friend_to_func.h"
int main(){
    box box1{2.2,1.1,0.5};
    //box box2{1.0,1.0,1.0};
    auto box3 = std::make_unique<box>(15.0,20.0,8.0);
    std::cout<<"Volume of box1 = "<<box1.volume()<<std::endl;
    std::cout<<"Surface area of box1 = "<<surfaceArea(box1)<<std::endl;
    std::cout<<"Volume of box3 = "<<box3->volume()<<std::endl;
    std::cout<<"Surface area of box3 = "<< surfaceArea(*box3)<<std::endl;
}