
#include <string>
namespace Grades {
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
    Cybersecurity

};
class Class {
    Grades::Professors professor;
    std::string department;
    std::string className;
    std::string classDescription;
    Grades::Choices availableChoices;
    std::string preR;
    bool hasPrereq;

  public:
    Class();
    Class(std::string p, std::string d, std::string cn, std::string cd,
          bool pr);
    void PrintInfo() const;
    void setPre(std::string pre);
    std::string ProfessorsToString(Grades::Professors p);
    std::string ChoicesToString(Grades::Choices c);
    std::string DepartmentsToString(Grades::Departments d);
};
} // namespace Grades
