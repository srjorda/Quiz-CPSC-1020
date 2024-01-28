/******************************************************************************
Name:  Samuel Jordan (srjorda)
Due:   March 9, 2023
Class: CPSC1020
Desc:  A program that allows a player to answer randomly ordered quiz questions 
       sourced from a database in a simple text file. If the answer submitted
       by the user is correct, the player is told so and gains 1 point. If the 
       answer is incorrect, the player loses 1 point. Once all questions have 
       been asked, the program displays the final results.
File: Quiz class header file (declaration)
Time:  3.5 hours
*******************************************************************************/
#ifndef QUIZ_H
#define QUIZ_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

class Quiz {
  private: 
    // attributes
    std::string question {""};
    std::string answer {""}; 
    static int score;           // shared between all Quiz
  public:
    // constructors
    Quiz() = default;
    Quiz(std::string q, std::string a) : question(q), answer(a) {};
    // getters
    std::string getQuestion();
    std::string getAnswer();
    static int getScore();
    // updateScore function
    static void updateScore(int val);
};

#endif