#include<Box.h>

#include <iostream>
//using namespace std;
int main(){
Box box1(2.0,2.0,3.0);
Box box2(5.0);
Box box3 (box2);

double v1 = box1.volume();
double v2 = box2. volume();
double v3 = box3.volume();

std::cout << v1<<v2<<v3 << std::endl;

Box box[6] {box1 , box2 , box3 ,Box {2.0}};
std::cout << &(box) <<std::endl;
}