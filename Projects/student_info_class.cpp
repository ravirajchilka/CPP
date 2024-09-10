#include <iostream>
#include <string>
#include <vector>

class Student {

  private:
    std::string name;
    int age;
    int gpa;

  public:
  
    std::string id;

    Student(const std::string& studentName, int studentAge, float studentGPA, std::string id)
      :name(studentName), age(studentAge), gpa(studentGPA), id(id) {}

    void displayStudentInfo() const {
      std::cout << "Name: " << name << std::endl;
      std::cout << "Age: " << age << std::endl;
      std::cout << "GPA: " << gpa << std::endl;
      std::cout << "id: " << id << std::endl;
      std::cout << "  " << std::endl;
    }
};


void addStudent(std::vector<Student>& students, std::string name, int age, float gpa, std::string id) {
  students.emplace_back(name,age,gpa,id);
}

void deleteStudent(std::vector<Student>& students, std::string id) {
  for(auto it = students.begin(); it!=students.end();it++) {
      if(it->id == id) {
        students.erase(it);
        std::cout << "Student with ID " << id << " is deleted" <<std::endl;
        std::cout << " " <<std::endl;
        return;
      }
  }
  
  if(students.size() == 0) {
    std::cout << "all records are deleted, cant find id " << id << std::endl;
  }

}

void displayAllStudents(std::vector<Student>& students) {
  for(const auto& student:students) {
     student.displayStudentInfo();
  }
}


int main() {
    std::vector<Student> students;

    addStudent(students,"john doe",25,3.4,"A2589"); 
    addStudent(students,"caleb curry",19,2.9,"A1885"); 
    addStudent(students,"Grimson crimson",25,3.9,"A1035"); 
    addStudent(students,"Roger nadal",35,3.4,"A3658"); 
  
    displayAllStudents(students); 
    deleteStudent(students,"A1885");
    deleteStudent(students,"A2589");

    displayAllStudents(students); 

    return 0;
}



