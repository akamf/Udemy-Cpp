#include "Movies.h"

#include <iostream>
#include <string>

void increment_times_watched(Movies& movies, std::string name);
void add_movie(Movies& movies, std::string name, std::string rating, int times_watched = 1);

int main()
{
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);
    add_movie(my_movies,"Star Wars", "PG",5);
    add_movie(my_movies,"Cinderella", "PG",7);
     
    my_movies.display();
    
    add_movie(my_movies,"Cinderella", "PG",7);
    add_movie(my_movies,"Ice Age", "PG",12);
 
    my_movies.display();
    
    increment_times_watched(my_movies,"Big");
    increment_times_watched(my_movies,"Ice Age");
    
    my_movies.display();
    
    increment_times_watched(my_movies,"XXX");

    return 0;
}

void increment_times_watched(Movies& movies, std::string name)
{
    if (movies.increment_times_watched(name))
        std::cout << "Incremnted times watched for " << name << "\n";
    else
        std::cout << "Couldn't find the movie, " << name << ", in the movie list.\n";
}
void add_movie(Movies& movies, std::string name, std::string rating, int times_watched)
{
    if (movies.add_movie(name, rating, times_watched))
        std::cout << "Added " << name << " to the movie list.\n";
    else
        std::cout << name << " already exists in the movie list.\n";
}