
#include "friend_to_func.h"
double box::volume(){
 return length * width *height;
};

double surfaceArea(box& abox)
{
    return 2.0*(abox.length*abox.width + abox.length*abox.height + abox.height*abox.width);
}
