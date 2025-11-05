#pragma once
///---------------------------------------------------------------------
// Andrew Mayak                 CMPSC330                 Fall 2025
//
// This is the header file to create Stacks
//---------------------------------------------------------------------

#pragma once

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <vector>
using namespace std;

class Dog {
private:

    // Dog Name - Attribute
    string name;

    // Dog Gender - Attribute ( true - male , false - female)
    bool gender;

    // Dog Breed - Attribute
    string breed;

    // Breeds in a list to check if valid breed
    vector<string> allBreeds = { "Affenpinscher", "Alaskan Husky", "Boxer",  "Border Collie", "Borzoi","Dalmatian" };

    // Dog Weight - Attribute
    int weight;

    // Dog Birth Date - Attribute
    // format =  mm/dd/yyyy
    string birthDate;

    // Health Rating - Attribute
    // from 1- 5 (poor to healthy)
    int health;

    //Does it have shots? - Attribute (True - has shot, False - Does not)
    bool hasShots;

    // Dog months in Kennel - Attribute
    int monthsInKennel;

    // Restricted Breeds of the Kennel
    vector<string> kennelBreeds = { "Affenpinscher", "Boxer" };


public:

    // Default Constructor
    Dog();

    // Second Constructor
    Dog(string n, int w, bool g, string b, string bd, int hr, int hs, int k);

    // Dog name setter and getter
    void setName(string n);
    string getName() const;

    // Dog weight setter and getter
    void setWeight(int w);
    int getWeight() const;

    // Dog gender setter and getter
    void setGender(bool g);
    bool getGender() const;

    // Dog breed setter and getter
    void setBreed(string b);
    string getBreed() const;

    // Dog Birth Date setter and getter
    void setBirthDate(string bd);
    string getBirthDate() const;

    // Dog Health Rating setter and getter
    void setHealthRating(int hr);
    int getHealthRating() const;

    // Dog Has Shots setter and getter
    void setHasShots(bool hs);
    bool getHasShots() const;

    // Dog Months in Kennel setter and getter
    void setMonthsInKennel(int k);
    int getMonthsInKennel() const;

    // Gets dog age in Human and Dog Years
    int InHumanYears();

};


#endif DOG_H
