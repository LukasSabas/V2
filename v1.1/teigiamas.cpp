#include <stdexcept>
#include "teigiamas.h"
int teigiamas(int& a) {
	if (a < 0) {
		throw std::invalid_argument("Mokiniu skaicius turi buti teigiamas skaicius");
	}
	return (a);
}