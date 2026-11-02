#ifndef INVERTER_GENERATOR_H
#define INVERTER_GENERATOR_H

#include "generator/ElectricGenerator.h"

class InverterGenerator : public ElectricGenerator {
private:
    bool ecoMode;

public:
    InverterGenerator(const std::string& modelName, double power);

    void start() override;
    void showInfo() const override;
    void setEcoMode(bool enable);
};

#endif 
