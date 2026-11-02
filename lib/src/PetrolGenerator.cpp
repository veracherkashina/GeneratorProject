#include "generator/PetrolGenerator.h"
#include <iostream>

PetrolGenerator::PetrolGenerator(const std::string& modelName, double power, double tankCapacity)
    : ElectricGenerator(modelName, power), fuelTankCapacity(tankCapacity), currentFuel(tankCapacity) {}

void PetrolGenerator::start() {
    if (currentFuel <= 0.0) {
        std::cout << "[PetrolGenerator] Error: No fuel to start " << model << "!\n";
        return;
    }
    isRunning = true;
    currentFuel -= 0.5;
    std::cout << "[PetrolGenerator] " << model << " started on petrol. Fuel left: " << currentFuel << " L\n";
}

void PetrolGenerator::showInfo() const {
    std::cout << "Petrol Generator: " << model 
              << " | Power: " << powerKW << " kW"
              << " | Fuel: " << currentFuel << "/" << fuelTankCapacity << " L"
              << " | State: " << (isRunning ? "Running" : "Off") << "\n";
}

void PetrolGenerator::refuel(double liters) {
    currentFuel += liters;
    if (currentFuel > fuelTankCapacity) {
        currentFuel = fuelTankCapacity;
    }
    std::cout << "[PetrolGenerator] Refueled " << liters << " L. Current fuel: " << currentFuel << " L\n";
}
