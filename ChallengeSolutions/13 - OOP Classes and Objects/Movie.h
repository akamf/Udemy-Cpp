#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>


class Movie
{
public:
    Movie(std::string name, std::string rating, int times_watched = 1);
    Movie(const Movie& source);
    Movie(Movie&& source);
    ~Movie() = default;

    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }
    std::string get_rating() const { return rating; }
    void set_rating(std::string rating) { this->rating = rating; }
    int get_times_watched() const { return times_watched; }
    void set_name(int times_watched) { this->times_watched = times_watched; }

    void increment_times_watched() { times_watched++; }
    void display() const;
    
private:
    std::string name;
    std::string rating;
    int times_watched;

};



#endif