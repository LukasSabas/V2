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
#include <numeric>
#include <sstream>
#include "studentas.h"
#include "teigiamas.h"
#include "skirstymas.h"
#include "laikmatis.h"

using namespace std;

int main()
{
	int m, t = 0, l, d = 10;
	double laikas2, laikas3;
	cout << "Iveskite kiek norite sugeneruoti duomenu: 1000, 10000, 100000, 1000000, 10000000" << endl;
	cin >> l;
	string prad = "duom";
	string pab = ".txt";
	auto kiekis = std::to_string(l);
	string failas = prad + kiekis + pab;
	std::vector<Studentas> stud;
	ifstream f;
	f.open(failas);
	if (f.is_open()) {
		m = 0;
		string o, b;
		getline(f, b);
		int k = 0, g = 0;
		while (g < b.length()) {
			if (b[g] == ' ' && b[g + 1] != ' ') {
				k = k + 1;
			}
			g = g + 1;
		}
		k = k - 2;
		while (getline(f, o))
		{
			m = m + 1;
		}
		f.close();
		f.open(failas);
		if (getline(f, b)) {}
		Timer kk;
		for (int i = 0;i < l;i++) {
			Studentas st;
			st.readStudent(f);
			stud.push_back(st);
			st.~Studentas();
		}
		laikas2 = kk.elapsed();
		f.close();
	}
	std::sort(stud.begin(), stud.end(), [](const Studentas& a, const Studentas& b) {
		return a.getpav() < b.getpav();
		});
	int rasymas;
	cout << "Jei norite is karto rasyti i faila spauskite '0', jei norite dalinti i du failus spauskite '1', jei norite tik tinginius perkelti i kita faila spauskite '2':" << endl;
	cin >> rasymas;
	if (rasymas == 0) {
		skirstymas(stud, l, d, laikas3);
	}
	if (rasymas == 1) {
		vectordalinimas(stud, l, d, laikas3);
	}
	if (rasymas == 2) {
		vectorperkelti(stud, l, d, laikas3);
	}
	//stud.clear();
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << l << " Eiluciu nuskaitymas i vector uztruko: " << laikas2 << endl;
	if (laikas3 != 0) {
		cout << l << " Eiluciu skirstymas i dvi gruopes ir surasymas i du atskirus failus is vector uztruko: " << laikas3 << endl;
	}
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << endl;
	cout << l << " Eiluciu visa programa su vector veike: " << laikas2 + laikas3 << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
}
