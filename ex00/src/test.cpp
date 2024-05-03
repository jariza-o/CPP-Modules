#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <utility>

// int main() {

// 	std::ifstream	data("../resources/data.csv");

//     std::string	line;
//     std::getline(data, line);
//     std::cout << line << std::endl;
// 	if (line != "date,exchange_rate") {
// 		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
// 		return 0;
// 	}
// 				std::map<std::string, float>	_container;
// 				char date[11]; // Allocate memory for the date variable
// 				#include <cstdio> // Add the missing include directive

// 				float value;
// 				char remaining[10];
// 				for (; std::getline(data, line);) {
// 					//std::cout << line << " SEPARATED:" << std::endl;
					
// 					int i = std::sscanf(line.c_str(), "%10[^,],%f%9s", date, &value, remaining); // Use the correct format specifier
// 					//std::cout << i << std::endl;
// 					if (i == 2) { // Check the return value of sscanf
// 						// std::cout << date << "   " << value << std::endl;
// 						 std::pair<std::string, int> miPar(date, value);
// 						_container.insert(miPar); // Replace insert with emplace
// 					}
// 					else {
// 						std::cout << "Failed to parse the line: " << line << std::endl;
// 					}
// 				}
// 				for (std::map<std::string, float>::const_iterator iter = _container.begin(); iter != _container.end(); ++iter) {
// 					std::cout << iter->first << ": " << iter->second << std::endl;
//     			}
// }

// int main() {



// OLD MAIN

// bool	checkInput(std::string line) {
// 	bool	decimal;
// 	int		i = 0;
	
// 	while (line[i]) {
// 		if ((i == 4 || i == 7) && line[i] == '-') //checker -
// 			i++;
// 		else if ((i == 4 || i == 7) && line[i] != '-') //checker -
// 			return false;

// 		if (i == 10 && line[i] == ',') // checker ,
// 			i++;
// 		else if (i == 10 && line[i] != ',')
// 			return false;

// 		if (line[i] >= '0' && line[i] <= '9') { // Son numeros y mes de 1 al 12 y dia correcto
// 			if (i == 5 && (line[i] > '0' || line[i] > '1'))
// 				return false;
// 			else if (i == 5 && line[i] == '1') {
// 				if (line[i + 1] < '0' || line[i + 1] > '2')
// 					return false;
// 			}
// 			else if (i == 8 || i == 9) {
// 				if (i == 8 && (line[i] < '0' || line[i] > '3'))
// 					return false;
// 				else if ((i == 8 && line[i] == '3') && line[i + 1] > 1)
// 					return false;
// 			}

// 			if (line[5] == '0' && line[6] == '2' && (line[8] > '0' && line[8] > '2'))
// 				return false;
// 			// Meter lo de si es 28 o 29 de feberero, aunque para .csv no es necesario
// 			i++;
// 		}
// 		else if (line [i] == '.' && i > 11 & decimal == false && line[i + 1] != '\0') {
// 			decimal = true;
// 			i++;
// 		}
// 		else
// 			return false;
// 	}
// 	return true;
// }

// bool	inputDB(BitcoinExchange& ex) {
// 	std::ifstream	data("./resources/data.csv");
// 	if (!data.is_open()) {
// 		std::cout << "WARNING: The program can't open the database. The database need is in ./recources/data.csv." << std::endl;
// 		return false;
// 	}
// 	std::string	line;
// 	std::getline(data, line);
// 	if (line != "date,exchange_rate") {
// 		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
// 		return (data.close(), false);
// 	}
// 	while (std::getline(data, line)) {
// 		if (checkInput(line) == true)
// 		{
// 			std::string	date = line.substr(0,10);
// 			std::string	valueSTR = line.substr(11);
// 			double		value = std::atof(valueSTR.c_str());
// 			std::pair<std::string, double>	miPar(date, value); // Esto se usa para poder insertar cosas en el mapa por Pares
// 			ex.insertMap(miPar);
// 		}
// 		else // A Lo mejor eliminar si no tengo en cuenta en el .csv el 28 o 29 segun el año
// 			std::cout << "Failed to parse the line: " << line << std::endl;
// 	}
// 	data.close();
// 	return true;
// }