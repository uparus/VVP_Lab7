#ifndef JSONSERVICE_H
#define JSONSERVICE_H
#include "WeahterService.h"
#include "Service.h"

#include <iostream>
#include <string>
using namespace std;

class JsonService : public Service
{
public:
    virtual Weather getWeather(string s) override;
    virtual ~JsonService() = default;
};


#endif