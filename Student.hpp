#include <iostream>
#include <string>

// Student class declaration (header file)
class Student {
private:
    std::string name;
    int age;

public:
    // Constructors and Destructor
    Student();
    ~Student();

    // Mutator (Setter) methods
    void setName(const std::string& s);
    void setAge(int i);

    // Accessor (Getter) methods
    std::string getName() const;
    int getAge() const;
};

// Student class implementation (source file)
Student::Student() : name(""), age(0) {}

Student::~Student() {}

void Student::setName(const std::string& s) {
    name = s;
}

void Student::setAge(int i) {
    age = i;
}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}