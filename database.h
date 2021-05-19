#include "schoolclass.h"

namespace Records{

const int maxClasses = 100;

class Database
{
public:
    Database();
    ~Database();

    SchoolClass& getClass(int id);
    void addClass(int teacherId, std::string letter, int year, int startYear);
    void enlClass(int id, int amount);
    void redlass(int id, int amount);
    void showByYear(int year);
    void showByTeacher(int teacher);
    void showAll();

protected:
    SchoolClass classes[maxClasses];
    int next;
    int nextNum;
};
}
