#ifndef ELECTRIC_GENERATOR_H
#define ELECTRIC_GENERATOR_H

#include <string>

class ElectricGenerator {
protected:
    std::string model;
    double powerKW;
    bool isRunning;

public:
    ElectricGenerator(const std::string& modelName, double power);
    virtual ~ElectricGenerator() = default;

    virtual void start();
    virtual void stop();
    virtual void showInfo() const;

    double getPowerKW() const;
    bool getStatus() const;
};

#endif 
