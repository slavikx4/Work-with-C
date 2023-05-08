#include "Main.h"

void Main() {
	if (SetOrGet()) {
		Get();
	}
	else {
		Set();
	}
}