#include <cstdlib>
#include <ctime>
#include"Truckload.h"

inline unsigned random(size_t count)
{
    return 1 + static_cast<unsigned>(std::rand()/(RAND_MAX / count + 1));
}

inline std::shared_ptr<Box> randomBox()
{
    const size_t dimLimit{99};
    return std::make_shared<Box>(random(dimLimit),random(dimLimit),random(dimLimit));
}

int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    Truckload load1;
    const size_t boxCount{12};
    for (size_t i = 0; i < boxCount; i++)
    {
        load1.addBox(randomBox());
    }
    std::cout<<"The first line:\n";
    load1.listBoxes();
    
}