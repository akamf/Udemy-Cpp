#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"

#include <iostream>
#include <string>
#include <vector>


class Movies
{
public:
    Movies() = default;
    ~Movies() = default;

    bool add_movie(std::string name, std::string rating, int times_watched = 1);
    bool increment_times_watched(std::string name);
    void display() const;

private:
    std::vector<Movie> movies{};

};

#endif