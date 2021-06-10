#include "Human.h"
#include <string>

class Human {

private:
	std::string first_name, surname, second_name;
	int age;
	int height;
public:
	Human() : first_name(""), surname(""), second_name(""), age(0), height(0) {}
	Human(std::string first_name0, std::string surname0, std::string second_name0, int age0, int height0) :
		first_name(first_name0), surname(surname0), second_name(second_name0), age(age0), height(height0) {}

	 std::string Info() const {
		return "First name: " + first_name + "," + " Surname: " + surname + "," + " Second name: " + second_name + "," +
			" Age: " + std::to_string(age) + "," + " Heigh: " + std::to_string(height);
	}
};

