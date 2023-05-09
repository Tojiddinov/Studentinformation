#include "student.h"

// Default constructor
Student::Student() : name(""), id(0), age(0), gpa(0.0), gender(""),  ethnicity("") {}
// Parameterized constructor
Student::Student(std::string name, int id, int age, float gpa, std::string gender,  std::string ethnicity)
        : name(name), id(id), age(age), gpa(gpa), gender(gender), ethnicity(ethnicity) {}


// Setters
void Student::setName(std::string name) {
    this->name = name;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setGpa(float gpa) {
    this->gpa = gpa;
}

void Student::setAddress(std::string address) {
    this->address = address;
}
void Student::setEmail(std::string email) {
    this->email = email;
}


void Student::setGender(std::string gender) {
    this->gender = gender;
}

//void Student::setStatus(std::string status) {
//    this->status = status;
//}

void Student::setEthnicity(std::string ethnicity) {
    this->ethnicity = ethnicity;
}

// Getters
std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

int Student::getAge() const {
    return age;
}

std::string Student::getEmail() const {
    return email;
}

std::string Student::getAddress() const {
    return address;
}


float Student::getGpa() const {
    return gpa;
}

std::string Student::getGender() const {
    return gender;
}

//std::string Student::getStatus() const {
//    return status;
//}

std::string Student::getEthnicity() const {
    return ethnicity;
}

//





// Display student information
void Student::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Gender: " << gender << std::endl;
//    std::cout << "Status: " << status << std::endl;
    std::cout << "Ethnicity: " << ethnicity << std::endl;
}
