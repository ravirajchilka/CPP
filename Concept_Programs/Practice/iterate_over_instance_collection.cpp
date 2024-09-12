#include <array>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

class Machine {
  public:
    std::uint16_t machineId;
    std::string model;
  
    Machine(const std::uint16_t machineId, const std::string& model): machineId(machineId), model(model) {
    }
}; 


void addMachines(std::vector<Machine>& machines, const Machine& machine) {
  machines.emplace_back(machine);
};

void showData(std::vector<Machine>& machine) {
  for(const auto& item:machine) {
    std::cout << item.machineId << std::endl;
    std::cout << item.model << std::endl;
    std::cout << "--------" << std::endl;
  }
};


int main() {

  std::vector<Machine> machineCollection;

  auto totalMachines = std::array<Machine,3> {
    Machine(2365, "T800"),
    Machine(4521,"T1000"),
    Machine(2458,"T1600")
  };
 
  for(const auto& value:totalMachines) {
    addMachines(machineCollection,value);
  };

  showData(machineCollection);
}

