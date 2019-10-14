#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(std::string t, std::string n);
    std::string getName();
    void setName(std::string);
    std::string getType();
    void setType(std::string);
    virtual  void update() = 0;
private:
    std::string name;
    std::string type;
};

#endif
