#include<iostream>
#include<memory>
class Box
{
    private:
        double length {1.0};
        double width {1.0};
        double height {1.0};
        static inline size_t objectcount;
    public:
        Box(double l , double w ,double h):length{l},width{w},height{h}{
            std::cout<<"这是构造函数1"<<std::endl;
            ++objectcount;
        }
        Box(double side):Box(side,side,side){
            std::cout<<"这是构造函数2"<<std::endl;
        }
        Box(){
            std::cout<<"这是默认构造函数"<<std::endl;
            ++objectcount;
        }
        Box(const Box& box):length{box.length},width{box.width},height{box.height}{
            std::cout<<"这是复制构造函数"<<std::endl;
            ++objectcount;
        }
        double volume(){
            return length*width*height;
        }
        static size_t getobjectcount(){
            return objectcount;
        }
        ~Box(){
            std::cout<<"这是析构函数"<<std::endl;
            --objectcount;
        }
        

};

int main(){
    std::cout<<"目前存在"<<Box::getobjectcount()<<"个实例"<<std::endl;
    Box box1{2.0,3.0,4.0};
    Box box2{5.0};
    std::cout<<"目前存在"<<Box::getobjectcount()<<"个实例"<<std::endl;
    for (size_t d {}; d < 3.0; d++)
    {
        Box box {d,d+1.0,d+2.0};
        std::cout<<"Box volume is"<<box.volume()<<std::endl;
    }
    std::cout<<"目前存在"<<Box::getobjectcount()<<"个实例"<<std::endl;
    auto pBox = std::make_unique<Box>(1.5,2.5,3.5);
    std::cout<<"Box volume is "<<pBox->volume()<<std::endl;
    
    std::cout<<"目前存在"<<Box::getobjectcount()<<"个实例"<<std::endl;

    
}