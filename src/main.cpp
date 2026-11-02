#include <iostream>
#include "generator/ElectricGenerator.h"
#include "generator/PetrolGenerator.h"
#include "generator/InverterGenerator.h"

int main() {
    std::cout << "=== Testing Generator Library ===\n\n";

    PetrolGenerator petrolGen("Hyundai HHY 3030F", 3.0, 15.0);
    InverterGenerator inverterGen("Kipor IG2000", 2.0);

    petrolGen.showInfo();
    petrolGen.start();
    petrolGen.refuel(2.5);

    std::cout << "\n";

    inverterGen.showInfo();
    inverterGen.setEcoMode(true);
    inverterGen.start();

    std::cout << "\n";

    petrolGen.stop();
    inverterGen.stop();

    return 0;
}
