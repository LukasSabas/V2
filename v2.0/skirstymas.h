#ifndef skirstymas_h
#define skirstymas_h
#include "studentas.h"
//! Skirstymo funkcija, kuri duomenis is vieno vektoriaus isveda i du atskirus failus pagal reikalavimus.
void skirstymas(std::vector <Studentas>& s, int& a, int& b, double& c);
//! Dalijimo funkcija, kuri duomenis padalina i atskirus du vektorius pagal reikalavimus ir tada isveda i faila.
void vectordalinimas(std::vector <Studentas>& s, int& a, int& b, double& c);
//! Perkelimo funkcija, kuri is vieno vektoriaus perkelia duomenis atitinkancius reikalavima i kita fektoriu. Is seno vektoriaus tos reiksmoes yra panaikinamos. Tada duomenys is abieju vektoriu yra isvedami i atskirus failus.
void vectorperkelti(std::vector <Studentas>& s, int& a, int& b, double& c);
#endif