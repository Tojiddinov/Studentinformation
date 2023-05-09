//#include <fstream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include "student.h"
//
//
//void readStudentDataFromFile(std::string filename, std::vector<Student>& students) {
//    std::ifstream infile(filename);
//    if (!infile) {
//        std::cerr << "Error: could not open file \"" << filename << "\"" << std::endl;
//        return;
//    }
//
//    std::string line;
//    while (std::getline(infile, line)) {
//        std::stringstream ss(line);
//        std::string token;
//        std::vector<std::string> tokens;
//        while (std::getline(ss, token, ',')) {
//            tokens.push_back(token);
//        }
//        if (tokens.size() != 8) {
//            std::cerr << "Error: invalid data format in line \"" << line << "\"" << std::endl;
//            continue;
//        }
//        int id = std::stoi(tokens[0]);
//        std::string name = tokens[1];
//        int age = std::stoi(tokens[2]);
//        std::string gender = tokens[3];
//        std::string ethnicity = tokens[4];
//        std::string email = tokens[5];
//        std::string address = tokens[6];
//        float gpa = std::stof(tokens[7]);
//        bool found = false;
//        for (auto& student : students) {
//            if (student.getId() == id) {
//                student.setName(name);
//                student.setAge(age);
//                student.setGender(gender);
//                student.setEthnicity(ethnicity);
//                student.setEmail(email);
//                student.setAddress(address);
//                student.setGpa(gpa);
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            Student student(name, id, age, gpa, gender, ethnicity, email, address);
//            students.push_back(student);
//        }
//    }
//    infile.close();
//}
//
//int main() {
//    std::vector<Student> students;
//    readStudentDataFromFile("studentinfo.csv", students);
//
//    return 0;
//}
