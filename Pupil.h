#ifndef PUPIL_H
#define PUPIL_H

class Pupil : public Human {
private:
	std::vector<Eval> evals;
	std::string _class;
public:
	using Human::Human;
	Pupil(): _class(""), evals(0) {}
	Pupil(std::string _class0, std::vector<Eval> evals0) : _class(_class0), evals(evals0) {}
	std::string Info() const;
	std::vector<Eval> GetEval();
};

#endif 
