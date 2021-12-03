#ifndef studentas_h
#define studentas_h
#include <iostream>
#include <vector>
#include <list>
class Studentas {
private:
	std::string var;
	std::string pav;
	std::vector<int> nd{};
	double egz;
public:
	Studentas() : egz(0) { }
	Studentas(std::istream& is);
	inline std::string getvar() const { return var; }
	inline std::string getpav() const { return pav; }
	std::istream& readStudent(std::istream& is);
	double gal(int a);
	Studentas(const Studentas& s1);
	Studentas& operator=(const Studentas& s1);
	~Studentas();
	//Studentas(const Studentas& s1);
	//Studentas operator=(const Studentas& s1);
};
#endif
