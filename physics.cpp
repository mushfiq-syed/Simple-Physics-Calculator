
#include "physics.h" 
#include <iostream>
#include <string>
double getDoubleInput(const std::string& prompt) {
    double value;
        std::cout << prompt;
        std::cin >> value;
        return value;
    }

double calculateFinalVelocity(double initialVelocity, double acceleration, double time) {
    return initialVelocity + (acceleration * time);
}

double calculateDisplacement(double initialVelocity, double acceleration, double time) {
    return (initialVelocity * time) + (0.5 * acceleration * time * time);
}

void printResults(double initialVelocity, double acceleration, double time, double finalVelocity, double displacement) {
    std::cout << "\n--- Calculation Results ---" << std::endl;
    std::cout << "Initial Velocity: " << initialVelocity << " m/s" << std::endl;
    std::cout << "Acceleration:     " << acceleration << " m/s^2" << std::endl;
    std::cout << "Time:             " << time << " s" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "Calculated Final Velocity: " << finalVelocity << " m/s" << std::endl;
    std::cout << "Calculated Displacement:   " << displacement << " m" << std::endl;
}
