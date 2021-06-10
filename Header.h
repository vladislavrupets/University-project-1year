#ifndef __HUMAN_H__
#define __HUMAN_H__

class Human {
private:
	string first_name, surname, second_name;
	int age;
	int height;
public:
	Human() : first_name(""), surname(""), second_name(""), age(0), height(0) {}
	Human(string first_name0, string surname0, string second_name0, int age0, int height0) :
		first_name(first_name0), surname(surname0), second_name(second_name0), age(age0), height(height0) {}

	string Info() const {
		return "First name: " + first_name + "," + " Surname: " + surname + "," + " Second name: " + second_name + "," +
			" Age: " + to_string(age) + "," + " Heigh: " + to_string(height);
	}
};
#endif 