#include "Tours.h"

#include <iostream>
#include <iomanip>


int main()
{
    Tours tours { "Tour Tickets Prices from Miami",
        {
            {
                "Argentina", {
                    { "Buenos Aires", 14'576'300, 723.77 },
                    { "La Plata", 827'100, 850.45 },
                    { "Rosario", 1'305'100, 765.98 }
                }
            },
            {
                "Brazil", {
                    { "Rio De Janiero", 6'476'600, 567.45 },
                    { "Salvador", 2'920'300, 855.99 },
                    { "Sao Paulo", 11'860'200, 975.45 }
                },
            },
            {
                "Chile", {
                    { "Santiago", 6'259'400, 520.00 },
                    { "Valdivia", 147'700, 569.12 }
                },
            },
            {
                "Colombia", {
                    { "Bogota", 8'089'700, 400.98 },
                    { "Cali", 2'420'100, 424.12 },
                    { "Cartagena", 1'024'900, 345.34 },
                    { "Medellin", 2'508'500, 350.98 }
                },
            },

        }
    };

    const int total_width {68}, sub_width {17};

    std::cout << std::setw((total_width + tours.title.length()) / 2) << std::right << tours.title << std::endl << std::endl;

    std::cout << std::setw(sub_width) << std::left << "Country"
              << std::setw(sub_width) << std::left << "City"
              << std::setw(sub_width) << std::right << "Population"
              << std::setw(sub_width) << std::right << "Price"
              << std::endl;

    std::cout << std::setw(total_width) 
              << std::setfill('-') 
              << "" << std::endl;

    std::cout << std::setfill(' ')
              << std::setprecision(2)
              << std::fixed;

    for (Country country : tours.countries)
    {
        for (size_t i = 0; i < country.cities.size(); i++)
        {
            std::cout << std::setw(sub_width) << std::left << ((i == 0) ? country.name : "")
                      << std::setw(sub_width) << std::left << country.cities.at(i).name
                      << std::setw(sub_width) << std::right << country.cities.at(i).population
                      << std::setw(sub_width) << std::right << country.cities.at(i).cost
                      << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;

    return 0;
}