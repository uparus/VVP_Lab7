#include "JsonService.h"
#include "XmlService.h"

int main(){

    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    JsonService js;
    Weather ws = js.getWeather("weather.json");
    w.print();

    return 0;
}