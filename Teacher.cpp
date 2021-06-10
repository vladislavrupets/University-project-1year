#include "Subjects.h"
#include "Human.h"
#include "Teacher.h"
#include <string>

enum class Subjects {
	MATH,
	ENG,
	IT,
	PE,
	UNKNOWN
};

class Teacher : public Human {
private:
	Subjects subject;
public:
	using Human::Human;
	Teacher() : subject(Subjects::UNKNOWN) {}
	Teacher(Subjects subject0) : subject(subject0) {}
	Subjects GetSub() const {
		return subject;
	}
	std::string Info() const {}
};