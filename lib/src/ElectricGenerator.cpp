#include "generator/ElectricGenerator.h"
#include <iostream>

ElectricGenerator::ElectricGenerator(const std::string& modelName, double power)
    : model(modelName), powerKW(power), isRunning(false) {}

void ElectricGenerator::start() {
    isRunning = true;
    std::cout << "[ElectricGenerator] " << model << " started. Output: " << powerKW << " kW\n";
}

void ElectricGenerator::stop() {
    isRunning = false;
    std::cout << "[ElectricGenerator] " << model << " stopped.\n";
}

void ElectricGenerator::showInfo() const {
    std::cout << "Model: " << model 
              << " | Power: " << powerKW << " kW"
              << " | State: " << (isRunning ? "Running" : "Off") << "\n";
}

double ElectricGenerator::getPowerKW() const {
    return powerKW;
}

bool ElectricGenerator::getStatus() const {
    return isRunning;
}
