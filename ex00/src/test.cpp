#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream	data("../resources/data.csv");

    std::string	line;
    std::getline(data, line);
    std::cout << line << std::endl;
	if (line != "date,exchange_rate") {
		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
		return 0;
	}
				char date[11]; // Allocate memory for the date variable
				float value;
				char remaining[10];
				for (; std::getline(data, line);) {
					std::cout << line << " SEPARATED:" << std::endl;
					int i = std::sscanf(line.c_str(), "%10[^,],%f%9s", date, &value, remaining); // Use the correct format specifier
					std::cout << i << std::endl;
					if (i == 2) { // Check the return value of sscanf
						std::cout << date << "   " << value << std::endl;
					}
					else {
						std::cout << "Failed to parse the line: " << line << std::endl;
						return 0;
					}
				}
}