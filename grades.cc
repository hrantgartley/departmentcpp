#include "grades.h"
#include <iostream>
using namespace Grades;

Class::Class() {
    professor = Professors::NoneSpecified;
    department = "";
    className = "";
    classDescription = "";
    availableChoices = Choices::Online;
    hasPrereq = false;
}

Class::Class(std::string p, std::string d, std::string cn, std::string cd,
             bool pr) {
    professor = Professors::NoneSpecified;
    department = d;
    className = cn;
    classDescription = cd;
    hasPrereq = pr;
}

void Class::PrintInfo() const {
    std::cout << "Department: " << this->department << std::endl;
    std::cout << "Class Name: " << this->className << std::endl;
    std::cout << "Class Description: " << this->classDescription << std::endl;
    if (this->hasPrereq) {
        std::cout << "This class has a prerequisite" << std::endl;
        std::cout << "The prerequisite for this class is " << this->preR
                  << std::endl;
    } else {
        std::cout << "This class does not have a prerequisite" << std::endl;
    }
}

void Class::setPre(std::string pre) {
    this->preR = pre;
}

std::string Class::ProfessorsToString(Professors p) {
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

std::string Class::ChoicesToString(Choices c) {
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

std::string Class::DepartmentsToString(Departments d) {
    switch (d) {
    case Departments::ComputerScience:
        return "Computer Science Department";
    case Departments::Economics:
        return "Economics Department";
    case Departments::InformationSystems:
        return "Information Systems Department";
    case Departments::Cybersecurity:
        return "Cybersecurity Department";
    case Departments::Mathematics:
        return "Math Department";
    default:
        return "No Department Specified";
    }
}

void checkAttribute(const std::string& atttributeName,
                    const std::string& attributeValue) {
    if (attributeValue.empty()) {
        std::cerr << "Attribute " << atttributeName << " is empty" << std::endl;
    }
}

void Class::checkStatus() {
    checkAttribute("professor",
                   professor == Professors::NoneSpecified ? "" : "a professor");
    checkAttribute("department", department);
    checkAttribute("class name", className);
    checkAttribute("class description", classDescription);
    checkAttribute("available choices",
                   availableChoices == Choices::NoneSpecified ? ""
                                                              : "a choice");
    std::cout << (hasPrereq ? "This class has a prerequisite"
                            : "This class does not have a prerequisite")
              << std::endl;
}

std::string Class::parseBasedOnCheck() {
    std::string message;
    if (this->hasPrereq) {
        message = "You cannot take this class yet. Take " +
                  std::string(" take ") + this->preR + " instead";
    } else {
        message = "You may take this class";
    }
    return message;
}
