#pragma once
#include "Service.h"

#include <iostream>
#include <string>
using namespace std;

class XmlService : public Service
{
public:
    virtual Weather getWeather(string s) override;
    virtual ~XmlService(){};
};