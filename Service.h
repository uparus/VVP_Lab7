#ifndef SERVICE_H
#define SERVICE_H
#include "WeahterService.h"

#include <iostream>
#include <string>
using namespace std;

class Service
{
public:
    virtual Weather getWeather(string s) = 0;
    virtual ~Service() = default;
};


#endif