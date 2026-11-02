#include "generator/InverterGenerator.h"
#include <iostream>

InverterGenerator::InverterGenerator(const std::string& modelName, double power)
    : ElectricGenerator(modelName, power), ecoMode(false) {}

void InverterGenerator::start() {
    isRunning = true;
    std::cout << "[InverterGenerator] " << model << " started with pure sine wave. EcoMode: " 
              << (ecoMode ? "ON" : "OFF") << "\n";
}

void InverterGenerator::showInfo() const {
    std::cout << "Inverter Generator: " << model 
              << " | Power: " << powerKW << " kW"
              << " | Eco-mode: " << (ecoMode ? "Enabled" : "Disabled")
              << " | State: " << (isRunning ? "Running" : "Off") << "\n";
}

void InverterGenerator::setEcoMode(bool enable) {
    ecoMode = enable;
    std::cout << "[InverterGenerator] EcoMode for " << model << " set to: " << (ecoMode ? "ON" : "OFF") << "\n";
}
