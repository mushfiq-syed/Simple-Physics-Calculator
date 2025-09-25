#ifndef PHYSICS_H
#define PHYSICS_H
#include <string>
double getDoubleInput (const std::string& prompt);
double calculateFinalVelocity(double initialVelocity, double acceleration, double time);
double calculateDisplacement(double initialVelocity, double acceleration, double time);
void printResults(double initialVelocity, double acceleration, double time, double finalVelocity, double displacement);
#endif
