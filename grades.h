
#include <string>
namespace Grades {

class Class {
    enum class Choices {
        Online,
        Hybrid,
        InPerson

    };
    enum class Professors {
        NoneSpecified,
        J,
        J2,
        T,
        T2,

    };
    enum class Departments {
        ComputerScience,
        Economics,
        InformationSystems,
        Cybersecurity,
        Mathematics
    };
    Professors professor;
    std::string department;
    std::string className;
    std::string classDescription;
    Choices availableChoices;
    std::string preR;
    bool hasPrereq;

  public:
    Class();
    Class(std::string p, std::string d, std::string cn, std::string cd,
          bool pr);
    void PrintInfo() const;
    void setPre(std::string pre);
    std::string ProfessorsToString(Class::Professors p);
    std::string ChoicesToString(Class::Choices c);
    std::string DepartmentsToString(Class::Departments d);
};
} // namespace Grades
