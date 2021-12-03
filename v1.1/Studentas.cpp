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
#include <sstream>
#include <numeric>
#include "studentas.h"

Studentas::Studentas(std::istream& is) {
	readStudent(is);
}
std::istream& Studentas::readStudent(std::istream& is) {
	is >> this->var >> this->pav;
	this->nd.reserve(10);
	int suma;
	for (int i = 0;i < 10;i++) {
		int x;
		is >> x;
		this->nd.push_back(x);
	}
	is>>this->egz;
}
double Studentas::gal(int a) {
	double med, vid, gal;
	int suma;
	suma = std::accumulate(nd.begin(), nd.end(), 0);
	if (a == 0) {
		vid = suma / nd.size();
		gal = 0.4 * vid + 0.6 * egz;
	}
	else {
		std::sort(nd.begin(), nd.end());
		if (nd.size() % 2) {
			med = 0.5 * (nd[nd.size() / 2 - 1] + nd[nd.size() / 2]);
		}
		else {
			med = nd[nd.size() / 2];
		}
		gal = 0.4 * med + 0.6 * egz;
	}
	return gal;
}
//bool compare(const Studentas& a, const Studentas& b) {	
//}