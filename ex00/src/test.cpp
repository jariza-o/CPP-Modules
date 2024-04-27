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
	std::string	date;
	int			value;
	for(; std::getline(data, line);) {
        std::cout << line << " SEPARATED:" << std::endl;
        int i = std::scanf(line.c_str(), "%11s%i", &date, &value);
        std::cout << i << std::endl;
		if (std::scanf(line.c_str(), "%10s%i", &date, &value) == 2){
			std::cout << date << "   " << value << std::endl;
		}
		else
			return 0;
	}
}