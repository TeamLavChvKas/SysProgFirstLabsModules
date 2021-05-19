#include "database.h"
#include <iostream>

namespace Records{

Database::Database()
{
next = 0;
nextNum = 1;
}

Database::~Database(){

}

void Database::addClass(int teacherId, std::string letter, int year, int startYear){
    if (next>=maxClasses){
        std::cerr<<"There is no room to add new class!"<<std::endl;
        throw std::exception();
    }
    SchoolClass& sc = classes[next++];
    sc.setId(nextNum);
    sc.setTeacherId(teacherId);
    sc.setLetter(letter);
    sc.setYear(year);
    sc.setStartYear(startYear);
}

SchoolClass& Database::getClass(int id){
    for(int i =0; i<next; i++){
        if(classes[i].getId() == id){
            return classes[i];
        }
    }
    std::cerr<<"There are no class with this id"<<std::endl;
    throw std::exception();
}

void Database::enlClass(int id, int amount){
    SchoolClass& sc = getClass(id);
    sc.setAmount(sc.getAmount() + amount);
}

void Database::redlass(int id, int amount){
    SchoolClass& sc = getClass(id);
    sc.setAmount(sc.getAmount() - amount);
}
void Database::showByYear(int year){
    for(int i =0; i<next; i++){
        if(classes[i].getYear() == year){
            classes[i].show();
        }
    }
}
void Database::showByTeacher(int teacher){
    for(int i =0; i<next; i++){
        if(classes[i].getTeacherId() == teacher){
            classes[i].show();
        }
    }
}
void Database::showAll(){
    for(int i =0; i<next; i++){
        classes[i].show();
    }
}

}
