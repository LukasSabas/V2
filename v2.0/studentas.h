#ifndef studentas_h
#define studentas_h
#include <iostream>
#include <vector>
#include <list>
//! Base klase, kuri apraso asmes varda ir pavarde
class Asmuo {
protected:
	std::string var;
	std::string pav;
public:
	Asmuo(std::string, std::string);
	Asmuo();
	~Asmuo();
	inline std::string getvar() const { return var; };
	inline std::string getpav() const { return pav; };
	virtual std::string vardas() = 0;
	virtual std::string pavarde() = 0;

};

//! Derived klase, kuri paima duomenis is Base klases ir dar prideda egzamino ir namu darbu vertinimus
class Studentas : public Asmuo {
private:
	std::vector<int> nd{};
	double egz;
public:
	Studentas() : egz(0), Asmuo() { }
	Studentas(std::istream& is);

	std::istream& readStudent(std::istream& is);
	double gal(int a);
	std::string vardas() { return var; };
	std::string pavarde() { return pav; };
	Studentas(const Studentas& s1);
	Studentas& operator=(const Studentas& s1);
	~Studentas();

};
#endif
