#include "Movies.h"


bool Movies::add_movie(std::string name, std::string rating, int times_watched)
{
    for (Movie& movie : movies)
    {
        if (movie.get_name() == name)
            return false;
    }
    movies.push_back(Movie(name, rating, times_watched));
    return true;
}
bool Movies::increment_times_watched(std::string name)
{
    for (Movie& movie : movies)
    {
        if (movie.get_name() == name)
        {
            movie.increment_times_watched();
            return true;
        }
    }
    return false;
}
void Movies::display() const
{
    std::cout << "\n=== MOVIES ============\n\n";
    for (Movie movie : this->movies)
        movie.display();
    std::cout << "========================\n\n";
}
