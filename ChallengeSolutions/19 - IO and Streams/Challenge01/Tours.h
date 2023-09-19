#pragma once

#include <string>
#include <vector>

struct City {
    std::string name;
    long population;
    double cost;

};

struct Country {
    std::string name;
    std::vector<City> cities;

};

struct Tours {
    std::string title;
    std::vector<Country> countries;

};
