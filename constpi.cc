#include <iostream>
#include <cmath>
constexpr double gridpi2(unsigned);
constexpr double gridpi2(unsigned npoints){
    unsigned inCircle = 0;
    unsigned totalPts = npoints * npoints;
    for (unsigned x = 0; x < npoints; x++){     //loop through x values
        for (unsigned y = 0; y < npoints; y++){  //loop through y values
            if (std::hypot(x,y) <= static_cast<double>(npoints)) {  //if the hypotenuse is less than the total points
                inCircle += 1;                                      //the point must be in the circle
            }
        }
    }
    return (static_cast<double>(inCircle)/static_cast<double>(totalPts))*4; //return the value for pi
}
int main(){
  double d = gridpi2(1000);
  std::cout << d;
  return 0;
}
