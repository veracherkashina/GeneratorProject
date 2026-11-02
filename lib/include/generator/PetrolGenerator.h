#ifndef PETROL_GENERATOR_H
#define PETROL_GENERATOR_H

#include "generator/ElectricGenerator.h"

class PetrolGenerator : public ElectricGenerator {
private:
    double fuelTankCapacity;
    double currentFuel;

public:
    PetrolGenerator(const std::string& modelName, double power, double tankCapacity);

    void start() override;
    void showInfo() const override;
    void refuel(double liters);
};

#endif 