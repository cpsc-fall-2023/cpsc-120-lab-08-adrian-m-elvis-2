// Adrian Martinez
// AdrianM22@csu.fullerton.edu
// @Martinez-Adrian 
// Partners: @Enventre
//

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  
  if (arguments.size() <= 1) {
    std::cerr << "Error: You must provide at least one command line argument." << std::endl;
    return 1; 
  }

  double sum = 0.0;
  
  for (int i = 1; i < arguments.size(); i++) {
    try {
      double num = std::stod(arguments[i]); 
      sum += num;
    } catch (const std::invalid_argument& e) {
      std::cerr << "Error: Invalid argument at position " << i << " - " << e.what() << std::endl;
      return 1; 
    }
  }

  
  double average = sum / (arguments.size() - 1);
  std::cout << "average = " << average << std::endl;

  return 0;
}

