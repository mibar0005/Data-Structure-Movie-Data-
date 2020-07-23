//Miguel Ibarra
//Movie Data Structure 

//Header files
#include <iostream>
#include <iomanip>    
#include <string>     //For using string objects
using namespace std;

//create a structure named MovieData
//Store the title, director, year released
//and running time in minutes 

struct MovieData
{
  string title;       //Title of the movie 
  string director;    //Name of director 
  int yearReleased;   //Year released
  int runningTime;    //Time of movie in minutes
};

//function prototypes
void showMovieData(MovieData movie);

//start main function
int main()
{
  //create two variables of MovieData type
  MovieData movie1, movie2, movie3, movie4, movie5;

  //store the valies in members of the first MovieData
  movie1.title = "The Shinning";   
  movie1.director = "Stephen Spilberg";
  movie1.yearReleased = 1984;
  movie1.runningTime = 118;

  //Store the values in members of the second MovieData
  movie2.title = "I.T";
  movie2.director = "Stephen King";
  movie2.yearReleased = 1991;
  movie2.runningTime = 285;

  movie3.title = "City of God";
  movie3.director = "Jao Mautinho";
  movie3.yearReleased = 2008;
  movie3.runningTime = 110;

  movie4.title = "The Lion King";
  movie4.director = "Pixar";
  movie4.yearReleased = 2019;
  movie4.runningTime = 133;

  movie5.title = "Good Boys";
  movie5.director = "Seth Rogen";
  movie5.yearReleased = 2019;
  movie5.runningTime = 98;
  //pass the first MovieData variable to the 
  //showMovieData function to display its information
  showMovieData(movie1);
  //pass the second movie data variable 
  //to showMovieData function 
  showMovieData(movie2);

  showMovieData(movie3);

  showMovieData(movie4);

  showMovieData(movie5);

  return 0;

//end of main function
}

//showMovieData function accepts a MovieData as a 
//parameter and display information clearly 
//and in a formatted manner 
void showMovieData (MovieData movie)
{
  cout << right;
  cout << "****************************************\n";
  cout << setw(25) << "Movie Information" << endl;
  cout << "****************************************\n";
  cout << left;
  cout << setw(25) << "Title: " << movie.title << endl;
  cout << setw(25) << "Director: " << movie.director << endl;
  cout << setw(25) << "Year Released: " << movie.yearReleased << endl;
  cout << setw(25) << "Running Time (minutes): " << movie.runningTime << endl; 
  cout << "****************************************\n\n\n";

//end of showMovie function 
}