#include "grades.h"
#include <iostream>

Grades::Class::Class() {
    professor = Professors::NoneSpecified;
    department = "";
    className = "";
    classDescription = "";
    availableChoices = Choices::Online;
    hasPrereq = false;
}

Grades::Class::Class(std::string p, std::string d, std::string cn,
                     std::string cd, bool pr) {
    professor = Professors::NoneSpecified;
    department = d;
    className = cn;
    classDescription = cd;
    hasPrereq = pr;
}

void Grades::Class::PrintInfo() const {
    std::cout << "Department: " << this->department << std::endl;
    std::cout << "Class Name: " << this->className << std::endl;
    std::cout << "Class Description: " << this->classDescription << std::endl;
    if (this->hasPrereq) {
        std::cout << "This class has a prerequisite" << std::endl;
        std::cout << "The prerequisite for this class is " << this->preR
                  << std::endl;
    } else
        std::cout << "This class does not have a prerequisite" << std::endl;
}

void Grades::Class::setPre(std::string pre) {
    this->preR = pre;
}

std::string Grades::Class::ProfessorsToString(Grades::Professors p) {
    switch (p) {
    case Professors::J:
        return "Professor J";
    case Professors::NoneSpecified:
        return "No professor specified";
    case Professors::T:
        return "Professor T";
    default:
        return "Invalid Professor choice";
    }
}

std::string Grades::Class::ChoicesToString(Grades::Choices c) {
    switch (c) {
    case Choices::Online:
        return "Online";
    case Choices::Hybrid:
        return "Hybrid";
    case Choices::InPerson:
        return "In Person";
    default:
        return "No choice specified";
    }
}

std::string Grades::Class::DepartmentsToString(Grades::Departments d) {
    switch (d) {
    case Grades::Departments::ComputerScience:
        return "Computer Science Department";
    case Grades::Departments::Economics:
        return "Economics Department";
    default:
        return "No Department Specified";
    }
}
