#ifndef TEACHER_H
#define TEACHER_H

class Teacher : public Human {
public:
        using Human::Human;
	      Subjects GetSub() const;
	      std::string Info() const;
};

#endif 
