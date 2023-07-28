#ifndef PACKAGE_H
#define PACHAGE_H

#include<memory>
#include"Box.h"
class Package
{
    private:
        std::shared_ptr<Box> pBox;
        Package* pnext;
    public:
        Package(std::shared_ptr<Box> pb):pBox {pb},pnext {nullptr}{};
        ~Package(){delete pnext;}

        std::shared_ptr<Box> getbox() {return pBox;}

        Package* getnext(){return pnext;}
        void setNext(Package* ppackage){pnext = ppackage;}
};
#endif