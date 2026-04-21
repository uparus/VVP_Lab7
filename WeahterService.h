#ifndef WEAHTERSERVICE_H
#define WEATHERSERVICE_H

#include <iostream>
#include <string>
using namespace std;

class Weather
{
private:
    string m_city;
    double m_lon;
    double m_lat;
    double m_temperature;
    string m_weather;
    double m_windSpeed;
    int m_clouds;
public:
    Weather(string city = "Kirov", double lon = 46.6601, double lat = 58.5966, 
        double temperature = 5.69, string weather = "Rain", double windSpeed = 4.27, 
        int clouds = 100) : m_city(city), m_lon(lon), m_lat(lat), m_temperature(temperature),
        m_weather(weather), m_windSpeed(windSpeed), m_clouds(clouds){}
};



#endif