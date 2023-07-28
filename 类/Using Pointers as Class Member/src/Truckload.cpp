#include "Truckload.h"

#include"Box.h"
#include<vector>
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

Truckload::Truckload(const std::vector<std::shared_ptr<Box>>& boxes)
{
    for (const auto& pBox:boxes )
    {
        addBox(pBox);
    }
}

Truckload::Truckload(const Truckload& src) { 
    for (Package* package{src.phead}; package; package = package->getnext()) { 
        addBox(package->getbox()); } }

void Truckload::addBox(std::shared_ptr<Box> pBox) { 
    auto pPackage = new Package{pBox}; // Create a new Package 
    if (ptail) // Check list is not empty 
        ptail->setNext(pPackage); // Append the new object to the tail 
    else // List is empty 
        phead = pPackage; // so new object is the head 
        ptail = pPackage; // Either way: the latest object is the (new) tail
}

bool Truckload::removeBox(std::shared_ptr<Box> boxToRemove) { 
    Package* current{phead}; 
    while (current) { 
        if (current->getbox() == boxToRemove) // We found the Box! 
        { 
            // remove the *current Package from the linked list... 
            
            return true; 
            // Return true: we found and removed the box 
            
        } 
        
        current = current->getnext(); // move along to the next Package 
    } 
    return false; // boxToRemove was not found: return false 
    
}

