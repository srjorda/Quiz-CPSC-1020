/******************************************************************************
Name:  Samuel Jordan (srjorda)
Due:   March 9, 2023
Class: CPSC1020
Desc:  A program that allows a player to answer randomly ordered quiz questions 
       sourced from a database in a simple text file. If the answer submitted
       by the user is correct, the player is told so and gains 1 point. If the 
       answer is incorrect, the player loses 1 point. Once all questions have 
       been asked, the program displays the final results.
File:  Quiz class cpp file (initialization)
Time:  3.5 hours
*******************************************************************************/
#include "Quiz.h"

int Quiz::score = 0;

// getters
std::string Quiz::getQuestion()
    { return question; }
std::string Quiz::getAnswer()
    { return answer; }
int Quiz::getScore()
    { return score; }

// applies change to score. If score is less than 0, updates to 0
void Quiz::updateScore(int val) {
    score += val;
    if (score < 0)
        score = 0;
}