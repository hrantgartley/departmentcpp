#include <iostream>

class Buildings {
  private:
    std::string name;
    std::string department;
    int floors;
    int windows;
    int** dimensions;

  public:
    Buildings();
    Buildings(std::string, int, int);
    ~Buildings();
    void PrintBuilding() const;
    int getFloors() const;
    double getArea() const;
};