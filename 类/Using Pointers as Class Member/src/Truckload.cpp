#include "Truckload.h"
#include"Package.h"

void Truckload::listBoxes()const{
    const  size_t boxesPerLine = 5;

    size_t count{};
    Package* currntPackage{phead};
    while (currntPackage)
    {
        currntPackage->getbox()->listBox();
        if (!(++count%boxesPerLine))std::cout<<std::endl;
        currntPackage = currntPackage ->getnext();

    }
    if (count%boxesPerLine)std::cout<<std::endl;
}

std::shared_ptr<Box> Truckload::getFirstBox() { 
    // Return pHead's box (or nullptr if the list is empty) 
    pcurrent = phead; 
    return pcurrent? pcurrent->getbox() : nullptr; 
} 
    
std::shared_ptr<Box> Truckload::getNextBox() { 
    if (!pcurrent) // If there's no current... 
    return getFirstBox(); // ...return the 1st Box 
    pcurrent = pcurrent->getnext(); // Move to the next package 
    return pcurrent? pcurrent->getbox() : nullptr; // Return its box (or nullptr...). 
}

