#include "JsonService.h"
#include <json.hpp>

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using nlohmann::json;

Weather JsonService::getWeather(string s)
{
    std::ifstream fin(s);
    if(!fin) throw exception("error");

    json j;
    j = json::parse(fin);
    string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    string weather = j["weather"]["main"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];
    return Weather(city,lon,lat,temperature,weather,windSpeed,clouds);
}