#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <ctime>

#include "Dog.h"

// Created by Andrew Mayak on 10/14/25.
// Compsi330 Dog Class Implementation File

using namespace std;


// Default Constructor
Dog::Dog() : name(""), weight(0), gender(0), breed(""), birthDate(""), health(0), hasShots(0), monthsInKennel(0)
{
}


// 2nd Constructor
Dog::Dog(string n, int w, bool g, string b, string bd, int hr, int hs, int k) : name(n), weight(w), gender(g), breed(b), birthDate(bd), health(hr), hasShots(hs), monthsInKennel(k)
{
}

//--------------Name---------------
// Name Setters and Getters
void Dog::setName(string n)
{
    name = n;
}
string Dog::getName() const
{
    return name;
}

//--------------Weight---------------
// Weights Setters and Getters
void Dog::setWeight(int w)
{
    weight = w;
}
int Dog::getWeight() const
{
    return weight;
}

//--------------Gender---------------
// Genders Setters and Getters
void Dog::setGender(bool g)
{
    gender = g;
}
bool Dog::getGender() const
{
    return gender;
}

//--------------Breed---------------
// Breed Setters and Getters
void Dog::setBreed(string b)
{
    breed = b;
}
string Dog::getBreed() const
{
    return breed;
}

//--------------Birth Date---------------
// Birth Date setters and getters
void Dog::setBirthDate(string bd)
{
    birthDate = bd;
}
string Dog::getBirthDate() const
{
    return birthDate;
}

//--------------Health Rating---------------
// Health Rating Setters and Getters
void Dog::setHealthRating(int hr)
{
    health = hr;
}
int Dog::getHealthRating() const
{
    return health;
}

//--------------Has Shots---------------
// Has Shots Setters and Getters
void Dog::setHasShots(bool hs)
{
    hasShots = hs;
}
bool Dog::getHasShots() const
{
    return hasShots;
}

//--------------Months in Kennel---------------
// Months in Kennel Setters and Getters
void Dog::setMonthsInKennel(int k)
{
    monthsInKennel = k;
}
int Dog::getMonthsInKennel() const
{
    return monthsInKennel;
}

// Compares Dog age with current date and finds age in human and Dog Years
int Dog::InHumanYears()
{
    // Chart of all Dog ages and Human Years

    // Human Years      | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
    //---------------------------------------------------------------------------------------------------
    // Small Dog Years  | 15 | 24 | 28 | 32 | 36 | 40 | 44 | 48 | 52 | 56 | 60 | 64 | 68 | 72 | 76 | 80 |
    // Medium Dog Years | 15 | 24 | 28 | 32 | 36 | 42 | 47 | 51 | 56 | 60 | 65 | 69 | 74 | 78 | 83 | 87 |
    // Large Dog Years  | 15 | 24 | 28 | 32 | 36 | 45 | 50 | 55 | 61 | 66 | 72 | 77 | 82 | 88 | 93 | 99 |

    // Lists of all dog Size Ages
    const int SMALL_DOGS_AGE[] = { 0, 15, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 68, 72, 76, 80 };
    const int MEDIUM_DOGS_AGE[] = { 0, 15, 24, 28, 32, 36, 42, 47, 51, 56, 60, 65, 69, 74, 78, 83, 87 };
    const int LARGE_DOGS_AGE[] = { 0, 15, 24, 28, 32, 36, 45, 50, 55, 61, 66, 72, 77, 82, 88, 93, 99 };

    /// the dog's age in human years
    int dogAge;
    int humanAge;

    // extracts based on index and length based on format MM/DD/YYYY
    string sMonth = birthDate.substr(0, 2);
    string sDay = birthDate.substr(3, 2);
    string sYear = birthDate.substr(6, 4);

    // converts string to integers of month day and year
    int month = stoi(sMonth);
    int day = stoi(sDay);
    int year = stoi(sYear);

    // tests the date conversion
    //cout << "Date: " << month << "/" << day << "/" << year << endl;

    // prints invalid message if month day or year are invalid
    if (month < 1 or month > 12 or day < 1 or day > 31 or year < 1 or year > 9999)
    {
        cout << "Invalid Date format: Please enter (MM/DD/YYYY) " << endl;
        // returns error number
        return -1;
    }
    else
    {
        // Gets local or current time, corrects for today's year
        //time_t CurrentTime = time(nullptr);
        //int CurrentYear = localtime(&CurrentTime)->tm_year + 1900;

        time_t CurrentTime = time(nullptr);
        struct tm localTime;
        localtime_s(&localTime, &CurrentTime);
        int CurrentYear = localTime.tm_year + 1900;

        // Testing Years call
        //cout << "Current Year: " << CurrentYear <<endl;
        //cout << "Dog's Birth Year: " << year <<endl;

        dogAge = CurrentYear - year;

        //                        Compares Breeds
        //-------------------------------------------------------------

        // testing breed call
        // cout << breed;


        // Large Dog Age
        if (breed == "Borzoi" || breed == "Dalmatian")
        {
            humanAge = SMALL_DOGS_AGE[CurrentYear - year];
            // Testing age call
            //cout << "Dog's age in Human Years: " << dogAge << endl;
            //cout << "Dog's age in Dog Years: " << humanAge<< endl;
            return humanAge;
        }
        // Medium Dog Age
        else if (breed == "Alaskan Husky" || breed == "Boxer" || breed == "Border Collie")
        {
            humanAge = SMALL_DOGS_AGE[CurrentYear - year];
            // Testing age call
            //cout << "Dog's age in Human Years: " << dogAge << endl;
            //cout << "Dog's age in Dog Years: " << humanAge<< endl;
            return humanAge;
        }
        // Small Dog Age
        else
        {
            humanAge = SMALL_DOGS_AGE[CurrentYear - year];
            // Testing age call
            //cout << "Dog's age in Human Years: " << dogAge << endl;
            //cout << "Dog's age in Dog Years: " << humanAge<< endl;
            return humanAge;
        }

    }

}


