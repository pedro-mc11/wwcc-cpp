#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Movie {
    string title;
    string director;
    int year;
    double rating;
    string genre;
};

Movie addMovie(vector<Movie>& movieList);
void menu(vector<Movie>& movieList);

Movie addMovie(vector<Movie>& movieList) {
    Movie newMovie;

    string title;
    string director;
    int year;
    double rating;
    string genre;

    cout << "Enter movie information:" << endl;
    cout << "Title: ";
    cin.ignore();
    getline(cin , newMovie.title);

    cout << "Director: ";
        cin.ignore();
    getline(cin , newMovie.director);

    cout << "Year released: "; 
    cin >> newMovie.year;

    cout << "Rating (0-10): ";
    cin >> newMovie.rating;
    cout << "Genre: ";
    cin >> newMovie.genre;

    cout << endl;
    cout << newMovie.title << " was successfully added to your Movie Database.";
    cout << endl;
    
    movieList.push_back(newMovie); 

    return newMovie;
}


void menu(vector<Movie>& movieList) {
    int choice;
    

    cout << endl;
    cout << "1 -------------- Add movie" << endl; //done
    cout << "2 -------------- Statistics" << endl;
    cout << "3 -------------- Display database" << endl; //done
    cout << "4 -------------- Exit" << endl; //done
    cout << endl;
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1:
            addMovie(movieList);
            menu(movieList);
            break;
        case 2:
            cout << "There are " << movieList.size() << " in this list.";
        case 3:
            if (movieList.empty()) {
                cout << "Your Movie Database is empty." << endl;
            }
            else {
                for (const Movie &movie : movieList) {
                    cout << movie.title << " (" << movie.year << ")" << endl;
                    cout << "Director: " << movie.director << endl;
                    cout << "Rating: " << movie.rating << "/10" << endl;
                    cout << "Genre: " << movie.genre << endl;
                    cout << endl;
                }
            }
            menu(movieList);
            break;
        case 4:
            cout << "Thanks for using Movie Database, goodbye!";
            exit(1);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            menu(movieList);
            break;


    }    
        
    
}

int main() {
    vector<Movie> movieList;

    cout << "  Movie Database" << endl;
    cout << "  **************" << endl;

    menu(movieList);

    

    return 0;
}