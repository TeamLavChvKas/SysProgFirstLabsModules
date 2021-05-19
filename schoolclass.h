#include <string>

namespace Records{

class SchoolClass
{
public:
    SchoolClass();
    ~SchoolClass();

    int getId();
    void setId(int value);
    int getTeacherId();
    void setTeacherId(int value);
    int getType();
    void setType(int value);
    int getAmount();
    void setAmount(int value);
    int getYear();
    void setYear(int value);
    int getStartYear();
    void setStartYear(int value);
    std::string getLetter();
    void setLetter(std::string value);
    void show();

private:
    int id;
    int teacherId;
    int type;
    int amount;
    int year;
    int startYear;
    std::string letter;

};

}
