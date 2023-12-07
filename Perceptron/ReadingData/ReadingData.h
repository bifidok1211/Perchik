#pragma once
#include<iostream>
#include<fstream>
#include <string>
#include "NetWork.h"
struct data_info {
	double* pixels;
	int digit;
};
data_info* ReadData(std::string path, const NetWork::data_Network& data_NW, int& examples);
