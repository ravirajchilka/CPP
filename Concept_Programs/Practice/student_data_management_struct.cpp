#include <iostream>
#include <string>
#include <vector>
#include <Array>
#include <algorithm> // Required for std::remove_if

class StudentDataMap
{
	public:
		StudentDataMap() = default;
		
		struct Student {
			std::string name;
			uint16_t age;
			std::string id;
			std::string grade;
			float score;
		};

		void addStudentRecord(const Student& newStudent) {
			vec.push_back(newStudent);
		}

		void showStudentRecords() {
			for(const auto& item:vec) {
				 std::cout << "Name: " << item.name << std::endl;
				 std::cout << "Age: " << item.age << std::endl;
				 std::cout << "ID: " << item.id << std::endl;
				 std::cout << "Score: " << item.score << std::endl;
				 std::cout << "-------------------" << std::endl;
			}
		}

		void deleteRecordByID(const std::string& id) {	
			auto it = std::remove_if(vec.begin(),vec.end(),
			[&id](const Student& student){
				return student.id == id;;
			});
			vec.erase(it,vec.end());
		}

	private:
		std::array<std::string,4> fieldArray = std::array<std::string,4>{"name","age","id","score"};
		std::vector<Student> vec = std::vector<Student>{};

};


int main() {

	StudentDataMap studentMap;
	
	//StudentDataMap::Student student = {"John", 20, "A123", "A", 3.5};
	studentMap.addStudentRecord({"John", 36, "A6278", "A", 3.5});
	studentMap.addStudentRecord({"Brandi", 26, "A1123", "C", 2.5});
	studentMap.addStudentRecord({"Tim", 21, "A0952", "B", 3.0});
	
	//studentMap.showStudentRecords();

	studentMap.deleteRecordByID("A1123");
	studentMap.showStudentRecords();
	return 0;

}



