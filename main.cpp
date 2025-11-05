// Amdrew Mayak    Compsci330        Dog Class
// This is the main file to test the Dog class 

#include <iostream>
#include <ostream>
#include "Dog.h"

using namespace std;

int main()
{
    // ALL BELOW ARE TESTS, COMMENT OUT IF MODIFYING


    // Dog defined by:
    // name, weight, gender, breed, birthdate, health rating, if has shot and Months in Kennel
    // all breeds are: "Affenpinscher", "Alaskan Husky", "Boxer",  "Border Collie", "Borzoi","Dalmatian"

    //Dog dog1("Lucy", 193, true, "Borzoi", "12/21/2001", 5, false, 16);
    Dog dog1;

    // calls all in order
    cout << "Name: " << dog1.getName() << endl;
    cout << "Weight: " << dog1.getWeight() << endl;
    cout << "Breed: " << dog1.getBreed() << endl;
    cout << "Gender: " << dog1.getGender() << endl;
    cout << "Birth Date: " << dog1.getBirthDate() << endl;
    cout << "Health Rating: " << dog1.getHealthRating() << endl;
    cout << "Has Shots: " << dog1.getHasShots() << endl;
    cout << "Months in Kennel: " << dog1.getMonthsInKennel() << endl;

    // tests setters
    dog1.setName("Bob");
    dog1.setWeight(100);
    dog1.setBreed("Alaskan Husky");
    dog1.setGender(false);
    dog1.setBirthDate("05/15/2015");
    dog1.setHealthRating(2);
    dog1.setHasShots(true);
    dog1.setMonthsInKennel(1);


    // calls again all values in order
    cout << endl << "Name: " << dog1.getName() << endl;
    cout << "Weight: " << dog1.getWeight() << endl;
    cout << "Breed: " << dog1.getBreed() << endl;
    cout << "Gender: " << dog1.getGender() << endl;
    cout << "Birth Date: " << dog1.getBirthDate() << endl;
    cout << "Health Rating: " << dog1.getHealthRating() << endl;
    cout << "Has Shots: " << dog1.getHasShots() << endl;
    cout << "Months in Kennel: " << dog1.getMonthsInKennel() << endl;

    // tests the InHumanYears Function
    cout << "Dogs Age in Human Years: " << dog1.InHumanYears() << endl;




}
