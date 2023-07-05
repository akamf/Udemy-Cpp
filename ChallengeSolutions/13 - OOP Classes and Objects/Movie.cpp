#include "Movie.h"


Movie::Movie(std::string name, std::string rating, int times_watched) : name{name}, rating{rating}, times_watched{times_watched} { }
Movie::Movie(const Movie& source) : Movie(source.get_name(), source.get_rating(), source.get_times_watched()) { }
Movie::Movie(Movie&& source) : name{source.get_name()}, rating{source.get_rating()}, times_watched{source.get_times_watched()} { }

void Movie::display() const
{
    std::cout << "Title: " << get_name() << "\nRating: " << get_rating() << "\nTimes watched: " << get_times_watched() << "\n\n";
}
