#include <iostream>
#include "Student.h"

int main() {
    Student student;
    int id, age;
    std::string name, email, address, gender, ethnicity;
    float gpa;

    std::cout << "Enter student ID: ";
    std::cin >> id;
    student.setId(id);


    std::cout << "Enter student Full Name: ";
    std::cin >> name;
    student.setName(name);
    std::cin.ignore();
    std::getline(std::cin, name);



    std::cout << "Enter student Age: ";
    std::cin >> age;
    student.setAge(age);


    std::cout << "Enter student Gender: ";
    std::cin >> gender;
    student.setGender(gender);

    std::cout << "Enter student ethnicity: ";
    std::cin >> ethnicity;
    student.setEthnicity(ethnicity);
    std::getline(std::cin, ethnicity);

    std::cout << "Enter student email: ";
    std::cin >> email;
    student.setEmail(email);
    std::getline(std::cin, email);

    std::cout << "Enter student address: ";
    std::cin >> address;
    student.setAddress(address);
    std::getline(std::cin, address);

    std::cout << "Enter Student GPA : ";
    std::cin >> gpa;
    student.setGpa(gpa);

    std::cout << "Student Information:" << std::endl;
    std::cout << "ID: " << student.getId() << std::endl;
    std::cout << "Name: " << student.getName() << std::endl;
    std::cout << "Age : " << student.getAge() << std::endl;
    std::cout << "Gender : " << student.getGender() << std::endl;
    std::cout << "Ethincity : " << student.getEthnicity() << std::endl;
    std::cout << "Email: " << student.getEmail() << std::endl;
    std::cout << "Address: " << student.getAddress() << std::endl;
    std::cout << "Gpa : " << student.getGpa() << std::endl;


    return 0;
}


