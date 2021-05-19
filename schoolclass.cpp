#include "schoolclass.h"
#include <iostream>

namespace Records{


SchoolClass::SchoolClass()
{
    id = -1;
    teacherId = -1;
    type = -1;
    amount = 0;
    letter = "Unknown";
    year = 0;
    startYear = 0;

}

SchoolClass::~SchoolClass(){

}

int SchoolClass::getId()
{
    return id;
}

void SchoolClass::setId(int value)
{
    id = value;
}

int SchoolClass::getTeacherId()
{
    return teacherId;
}

void SchoolClass::setTeacherId(int value)
{
    teacherId = value;
}

int SchoolClass::getType()
{
    return type;
}

void SchoolClass::setType(int value)
{
    type = value;
}

int SchoolClass::getAmount()
{
    return amount;
}

void SchoolClass::setAmount(int value)
{
    amount = value;
}

int SchoolClass::getYear()
{
    return year;
}

void SchoolClass::setYear(int value)
{
    year = value;
}

int SchoolClass::getStartYear()
{
    return startYear;
}

void SchoolClass::setStartYear(int value)
{
    startYear = value;
}

std::string SchoolClass::getLetter()
{
    return letter;
}

void SchoolClass::setLetter(std::string value)
{
    letter = value;
}

void SchoolClass::show(){
    std::cout << getYear() <<"-"<<getLetter()<<" class"<<std::endl;
    std::cout << "ID: "<<getId()<<std::endl;
    std::cout << "Amount: "<<getAmount()<<std::endl;
    std::cout << "Teacher Id: "<<getTeacherId()<<std::endl;
}

}
