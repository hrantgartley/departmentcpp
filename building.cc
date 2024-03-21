
#include "buildings.h"
Buildings::Buildings() {
    department = "";
    floors = 0;
    windows = 0;
}

Buildings::Buildings(std::string n, int f, int w) {
    name = n;
    floors = f;
    windows = w;
}

Buildings::~Buildings() {
    std::cout << "Building object has been destroyed\n";
}

void Buildings::PrintBuilding() const {
    std::cout << "Name: " << this->name;
    std::cout << "\nDepartment: " << this->department;
    std::cout << "\nNumber of windows: " << this->windows << std::endl;
    std::cout << std::endl;
}

int Buildings::getFloors() const {
    return this->floors;
}

double Buildings::getArea() const {
    for (int i = 0; i < floors; i++) {
        for (int j = 0; j < windows; j++) {
            dimensions[i][j] = 10;
        }
    }
}

int main() {
    Buildings building1("Building 1", 5, 10);
    Buildings building2("Building 2", 10, 20);

    building1.PrintBuilding();
    building2.PrintBuilding();

    return 0;
}
