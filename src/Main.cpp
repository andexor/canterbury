/*
 * Andexor Canterbury Database Server.
 * Copyright 2011 Andexor Network, Inc.
 * Author: Ed Jenkins
 */

#include <cstdlib>

#include "Limits.h"
#include "IntFile.h"

int main() {
/*
	Limits* limits = new Limits();
	limits->print();
	delete limits;
	limits = NULL;
*/
	IntFile* intFile = new IntFile();
	intFile->create();
	delete intFile;
	intFile = NULL;

	return 0;

}
