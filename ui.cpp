#include <iostream>
#include <string>

#include "database.h"

using namespace Records;

using namespace std;

int showMenu();
void addClass(Database& DB);
void enlClass(Database& DB);
void redClass(Database& DB);
void showByYear(Database& DB);
void showByTeacher(Database& DB);

int main()
{
    Database classDB;
    bool done = false;

    while(!done){
        int selection = showMenu();

        switch(selection){
        case 1:
        addClass(classDB);
        break;

        case 2:
        enlClass(classDB);
        break;

        case 3:
        redClass(classDB);
        break;

        case 4:
        classDB.showAll();
        break;

        case 5:
        showByYear(classDB);
        break;

        case 6:
        showByTeacher(classDB);
        break;

        case 0:
        done = true;
        break;

        default:
            cerr<<"Uknown"<<endl;
        }
    }
}

int showMenu(){
    int selector;
    cout<<endl;
    cout<<"        School Database    "<<endl;
    cout<<"___________________________"<<endl;
    cout<<"Input command after '---'  "<<endl;
    cout<<"1-add class                "<<endl;
    cout<<"2-enlarge class            "<<endl;
    cout<<"3-reduce class             "<<endl;
    cout<<"4-show all classes         "<<endl;
    cout<<"5-show all one-year classes"<<endl;
    cout<<"6-show classes by teacher  "<<endl;
    cout<<"0-quit                     "<<endl;
    cout<<"---"<<endl;
    cin>>selector;
    return selector;
}

void addClass(Database& DB){
    int teacherId;
    string letter;
    int year;
    int startYear;

    cout<<"Input teacher id"<<endl;
    cin>>teacherId;
    cout<<"Input year"<<endl;
    cin>>year;
    cout<<"Input letter"<<endl;
    cin>>letter;
    cout<<"Input start year"<<endl;
    cin>>startYear;

    try{
        DB.addClass(teacherId, letter, year, startYear);
    }
    catch(exception ex){
        cerr<<"Unable to add class!"<<endl;
    }
}

void enlClass(Database& DB){
    int id;
    int amount;

    cout<<"Input id to enlarge"<<endl;
    cin>>id;
    cout<<"Input amount to enlarge"<<endl;
    cin>>amount;

    try{
        DB.enlClass(id, amount);
    }
    catch(exception ex){
        cerr<<"Unable to enlarge class!"<<endl;
    }
}

void redClass(Database& DB){
    int id;
    int amount;

    cout<<"Input id to reduce"<<endl;
    cin>>id;
    cout<<"Input amount to reduce"<<endl;
    cin>>amount;

    try{
        DB.redlass(id, amount);
    }
    catch(exception ex){
        cerr<<"Unable to enlarge class!"<<endl;
    }
}

void showByYear(Database& DB){
    int year;

    cout<<"Input year"<<endl;
    cin>>year;

    try{
        DB.showByYear(year);
    }
    catch(exception ex){
        cerr<<"Unable to show!"<<endl;
    }
}

void showByTeacher(Database& DB){
    int teacher;

    cout<<"Input teacher id"<<endl;
    cin>>teacher;

    try{
        DB.showByTeacher(teacher);
    }
    catch(exception ex){
        cerr<<"Unable to show!"<<endl;
    }
}


