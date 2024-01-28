/******************************************************************************
Name:  Samuel Jordan (srjorda)
Due:   March 9, 2023
Class: CPSC1020
Desc:  A program that allows a player to answer randomly ordered quiz questions 
       sourced from a database in a simple text file. If the answer submitted
       by the user is correct, the player is told so and gains 1 point. If the 
       answer is incorrect, the player loses 1 point. Once all questions have 
       been asked, the program displays the final results.
File:  printResult function cpp file
Time:  3.5 hours
*******************************************************************************/
#include "Quiz.h"
#include "printResult.h"

// prints final results passed into the function, as well as score from Quiz
std::string printResult(int questions, int correct, int wrong) {
    std::stringstream ss;
    ss << "Number of questions: "    << questions << std::endl
              << "Number correct answers: " << correct   << std::endl
              << "Number wrong answers: "   << wrong     << std::endl
              << "Final score: "            << Quiz::getScore();
    return ss.str();
}