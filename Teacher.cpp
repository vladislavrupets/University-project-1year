#include "Subjects.h"
#include "Human.h"
#include "Teacher.h"
#include <string>

class Teacher : public Human {
public:
	using Human::Human;
	Subjects GetSub() const {
		return subject;
	}
	std::string Info() const {}
};
