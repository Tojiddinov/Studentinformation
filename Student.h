#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    int age;
    std::string gender;
    std::string ethnicity;
    std::string address;
    std::string email;
    float gpa;

public:
    // Default constructor
    Student();

    // Parameterized constructor
    Student(std::string name, int id, int age, float gpa, std::string gender, std::string ethnicity);


    // Setters
    void setName(std::string name);
    void setId(int id);
    void setAge(int age);
    void setGender(std::string gender);
    void setEthnicity(std::string ethnicity);
    void setAddress(std::string address);
    void setEmail(std::string email);
    void setGpa(float gpa);

    // Getters
    std::string getName() const;
    int getId() const;
    int getAge() const;
    std::string getGender() const;
    std::string getEthnicity() const;
    std::string getAddress() const;
    std::string getEmail() const;
    float getGpa() const;

    // Display student information
    void display() const;
};

#endif // STUDENT_H
