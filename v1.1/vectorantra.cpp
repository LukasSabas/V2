#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <exception>
#include <stdexcept>
#include <chrono>
#include <iterator>
#include <list>
#include "laikmatis.h"
#include "skirstymas.h"
#include "studentas.h"
void vectorperkelti(std::vector <Studentas>& s, int& a, int& b, double& c) {
	std::vector<Studentas> ting;
	ting.reserve(a);
	int g;
	std::string vardas, pavarde;
	vardas = "Vardas";
	pavarde = "Pavarde";
	std::cout << "Iveskite ar norite vector skirstyti pagal vidurki '0', ar pagal mediana '1':" << std::endl;
	std::cin >> g;
	std::ofstream mf1("moksliukai.txt");
	std::ofstream mf2("tinginiai.txt");

	Timer uu;
	if (g == 0) {
		std::remove_copy_if (s.begin(), s.end(), back_inserter(ting), [](Studentas& i) {return i.gal(0) >= 5;});
		std::remove_if(s.begin(), s.end(), [](Studentas& i) { return i.gal(0) < 5;});
		int minus = ting.size();
		s.resize(a-minus);
	}
	else {
		std::remove_copy_if(s.begin(), s.end(), back_inserter(ting), [](Studentas& i) {return i.gal(1) >= 5;});
		std::remove_if(s.begin(), s.end(), [](Studentas& i) { return i.gal(1) < 5;});
		int minus = ting.size();
		s.resize(a - minus);
	}
	c = uu.elapsed();

	if (mf1.is_open() && mf2.is_open()) {
		mf1 << std::left << std::setw(20) << vardas << std::left << std::setw(20) << pavarde << "Galutinis" << std::endl;
		mf2 << std::left << std::setw(20) << vardas << std::left << std::setw(20) << pavarde << "Galutinis" << std::endl;
		if (g == 0) {
			for (auto& t : ting) {
				mf2 << std::left << std::setw(20) << t.getpav() << std::left << std::setw(20) << t.getvar() << t.gal(g) << std::endl;
			}
			for (auto& m : s) {
				mf1 << std::left << std::setw(20) << m.getpav() << std::left << std::setw(20) << m.getvar() << m.gal(g) << std::endl;
			}
		}
		else {
			for (auto& t : ting) {
				mf2 << std::left << std::setw(20) << t.getpav() << std::left << std::setw(20) << t.getvar() << t.gal(g) << std::endl;
			}
			for (auto& m : s) {
				mf1 << std::left << std::setw(20) << m.getpav() << std::left << std::setw(20) << m.getvar() << m.gal(g) << std::endl;
			}
		}
		s.clear();
		ting.clear();
	}
	else {
		std::cout << "File could not open" << std::endl;
	}
	mf1.close();
	mf2.close();
}
