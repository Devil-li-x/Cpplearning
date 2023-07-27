#ifndef Truckload_H
#define Truckload_H
#include"Package.h"
#include"Box.h"
#include <memory>
class Truckload
{
private:
    Package* phead{};
    Package* ptail{};
    Package* pcurrent{};
public:
    Truckload()=default;
    Truckload(std::shared_ptr<Box> pbox ){
        phead=ptail=new Package{pbox};
    }
    Truckload(const Truckload& src);
    ~Truckload(){delete phead;}
    std::shared_ptr<Box> getFirstBox();   // Get the first Box 
    std::shared_ptr<Box> getNextBox(); // Get the next Box 
    void addBox(std::shared_ptr<Box> pBox); // Add a new Box 
    bool removeBox(std::shared_ptr<Box> pBox); // Remove a Box from the Truckload 
    void listBoxes() const; // Output the Boxes
};

#endif