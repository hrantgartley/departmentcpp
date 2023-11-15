# departmentcpp

# Grades Class

This project defines a `Grades::Class` that encapsulates information about university classes, including their department, name, description, prerequisites, professors, and available choices for taking the class.

## Overview

The `Grades::Class` class includes the following functionalities:

- **Constructor**:
  - `Class()` - Default constructor initializing class properties.
  - `Class(std::string p, std::string d, std::string cn, std::string cd, bool pr)` - Constructor with parameters to set specific class details.
- **Methods**:
  - `PrintInfo()` - Prints information about the class, including its department, name, description, and whether it has prerequisites.
  - `setPre(std::string pre)` - Sets the prerequisite for the class.
  - `ProfessorsToString(Grades::Professors p)` - Converts `Professors` enum values to their corresponding string representation.
  - `ChoicesToString(Grades::Choices c)` - Converts `Choices` enum values to their corresponding string representation.
  - `DepartmentsToString(Grades::Departments d)` - Converts `Departments` enum values to their corresponding string representation.

## Usage

To use this `Grades::Class` class:

1. Include the `grades.h` header file.
2. Create an instance of the `Grades::Class`.
3. Set necessary properties using the available methods.
4. Utilize the `PrintInfo()` method to display class information.

### Example:

```cpp
#include "grades.h"
#include <iostream>

int main() {
    // Create a class instance
    Grades::Class myClass("Professor X", "Mathematics", "Calculus", "Introductory calculus course", true);

    // Set prerequisite
    myClass.setPre("Pre-Calculus");

    // Print class information
    myClass.PrintInfo();

    return 0;
}
```
