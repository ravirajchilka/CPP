#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <map>
#include <variant>
#include <algorithm> // For std::remove_if

class StudentDataManagement
{
	private:
		std::vector<std::map<std::string, std::variant<std::string, std::uint16_t, float>>> recordsVec;

	public:
		StudentDataManagement() = default;

		// Function to add student records
		void addRecord(const std::map<std::string, std::variant<std::string, std::uint16_t, float>>& student)
		{
			recordsVec.push_back(student);
		}

		// Function to display all records
		void showRecords() const
		{
			if (recordsVec.empty()) {
				std::cout << "No records found.\n";
				return;
			}

			for (const auto& item : recordsVec)
			{
				for (const auto& [key, value] : item)
				{
					std::cout << key << ": ";
					std::visit([](const auto& val) { std::cout << val << std::endl; }, value);
				}
				std::cout << "-----------------" << std::endl;
			}
		}

		// Function to search for a record by ID
		void printSearchedRecord(const std::string& id) const
		{
			bool found = false;

			for (const auto& item : recordsVec)
			{
				auto it = item.find("ID");
				if (it != item.end() && std::holds_alternative<std::string>(it->second) && std::get<std::string>(it->second) == id)
				{
					found = true;
					std::cout << "Searched item found:\n";
					for (const auto& [key, value] : item)
					{
						std::cout << key << ": ";
						std::visit([](const auto& val) { std::cout << val << std::endl; }, value);
					}
					std::cout << "-----------------" << std::endl;
				}
			}

			if (!found)
			{
				std::cout << "Record with ID " << id << " not found.\n";
			}
		}

		// Function to delete a record by ID
		void deleteRecordById(const std::string& id)
		{
			auto it = std::remove_if(recordsVec.begin(), recordsVec.end(), [&](const std::map<std::string, std::variant<std::string, std::uint16_t, float>>& item)
									{
				auto it = item.find("ID");
				return it != item.end() && std::holds_alternative<std::string>(it->second) && std::get<std::string>(it->second) == id; });

			if (it != recordsVec.end())
			{
				recordsVec.erase(it, recordsVec.end());
				std::cout << "Record with ID " << id << " deleted successfully.\n";
			}
			else
			{
				std::cout << "No record found with ID " << id << ".\n";
			}
    	}
};

// Main function
int main()
{
    StudentDataManagement manager;

    // Define student records
    std::map<std::string, std::variant<std::string, std::uint16_t, float>> student1{
        {"Name", "John"},
        {"Age", std::uint16_t{30U}},
        {"ID", "A123"},
        {"Grade", "A"},
        {"Score", 3.1F}};

    std::map<std::string, std::variant<std::string, std::uint16_t, float>> student2{
        {"Name", "Timothy"},
        {"Age", std::uint16_t{26U}},
        {"ID", "A467"},
        {"Grade", "B+"},
        {"Score", 3.3F}};

    // Add students to the manager
    manager.addRecord(student1);
    manager.addRecord(student2);

    // Show all records
    manager.showRecords();

    // Search for a specific student
    std::string searchableID = "A467";
    manager.printSearchedRecord(searchableID);

    // Delete a student record
    manager.deleteRecordById(searchableID);

    // Show all records after deletion
    manager.showRecords();

    return 0;
}
