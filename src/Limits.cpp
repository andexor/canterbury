/*
 * Andexor Canterbury Database Server.
 * Copyright 2011 Andexor Network, Inc.
 * Author: Ed Jenkins
 */

#include <limits.h>
#include <stdint.h>

#include <iostream>

#include "Limits.h"

using namespace std;

Limits::Limits() {
    cout << "Constructor" << endl;
}

void Limits::print() {
    cout << "Hello, World!" << endl;

    cout << "char=" << sizeof(char) << endl;
    cout << "short=" << sizeof(short) << endl;
    cout << "int=" << sizeof(int) << endl;
    cout << "long=" << sizeof(long) << endl;
    cout << "long long=" << sizeof(long long) << endl;

    cout << "int8_t=" << sizeof(int8_t)  << "  max=" << SCHAR_MAX << endl;
    cout << "int16_t=" << sizeof(int16_t) << " max=" << SHRT_MAX << endl;
    cout << "int32_t=" << sizeof(int32_t) << " max=" << INT_MAX << endl;
    cout << "int64_t=" << sizeof(int64_t) << " max=" << LONG_MAX << endl;
    cout << "size_t=" << sizeof(size_t) << endl;
//    cout << "SIZE_MAX=" << SIZE_MAX << endl;
    cout << "__WORDSIZE=" << __WORDSIZE << endl;

    cout << "streamsize=" << sizeof(streamsize) << endl;
    cout << "streampos=" << sizeof(streampos) << endl;
    cout << "streamoff=" << sizeof(streamoff) << endl;

    const int MAX_FILE_SIZE = INT_MAX;
    cout << "MAX_FILE_SIZE=" << MAX_FILE_SIZE << endl;
    int OBJECT_SIZE = sizeof(int32_t);
    cout << "OBJECT_SIZE=" << OBJECT_SIZE << endl;
    int MAX_OBJECTS = (MAX_FILE_SIZE / OBJECT_SIZE) - 1;
    cout << "MAX_OBJECTS=" << MAX_OBJECTS << endl;
    int MAX_FILE_LEN = MAX_OBJECTS * OBJECT_SIZE;
    cout << "MAX_FILE_LEN=" << MAX_FILE_LEN << endl;
    int WASTED = MAX_FILE_SIZE - MAX_FILE_LEN;
    cout << "WASTED=" << WASTED << endl;
}

Limits::~Limits() {
    cout << "Destructor" << endl;
}
