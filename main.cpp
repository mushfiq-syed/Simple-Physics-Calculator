#include "physics.h"
#include <iostream>
#include <iomanip>
int main ()
{
    std::cout << std::fixed << std::setprecision(2); 
    double initialVelocity = getDoubleInput("Enter initial velocity (m/s): ");
    double acceleration = getDoubleInput("Enter acceleration (m/s^2): ");
    double time = getDoubleInput("Enter time (s): ");
    double finalVelocity = calculateFinalVelocity(initialVelocity, acceleration, time);
    double displacement = calculateDisplacement(initialVelocity, acceleration, time);
    printResults(initialVelocity, acceleration, time, finalVelocity, displacement);
    return 0;
}
