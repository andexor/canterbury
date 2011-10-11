/*
 * Andexor Canterbury Database Server.
 * Copyright 2011 Andexor Network, Inc.
 * Author: Ed Jenkins
 */

#include "IntFile.h"

#include <cstdio>
#include <exception>

using namespace std;

IntFile::IntFile() {
}

void IntFile::create() {

	const int MAX_FILE_SIZE = 1024 * 1024 * 1024;
	const int RECORD_SIZE = sizeof(int);
    const int MAX_RECORDS = (MAX_FILE_SIZE / RECORD_SIZE) - 1;
    const int RECORDS = MAX_RECORDS;
	const int FILE_SIZE = RECORDS * RECORD_SIZE;

	FILE* f;
/*
	f = fopen("c.cdb", "r+b");
	if(f != NULL) {
		fclose(f);
		printf("File exists.\n");
		return;
	}
*/
	printf("MAX_FILE_SIZE=%i\n", MAX_FILE_SIZE);
	printf("RECORD_SIZE  =%i\n", RECORD_SIZE);
	printf("MAX_RECORDS  =%i\n", MAX_RECORDS);
	printf("RECORDS      =%i\n", RECORDS);
	printf("FILE_SIZE    =%i\n", FILE_SIZE);

	int* data = NULL;

	try {
		// allocate file
		data = new int[RECORDS];
		f = fopen("c.cdb", "w+b");
		fwrite(data, RECORD_SIZE, RECORDS, f);
		// update header
		fseek(f, 0, SEEK_SET);
		int type = 1;
		fwrite(&type, sizeof(int), 1, f);
	} catch(const exception& e) {
		printf("ERROR:  %s\n", e.what());
		return;
	}

	fclose(f);
	delete[] data;
	data = NULL;

}

IntFile::~IntFile() {
}
