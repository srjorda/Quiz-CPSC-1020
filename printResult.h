/******************************************************************************
Name:  Samuel Jordan (srjorda)
Due:   March 9, 2023
Class: CPSC1020
Desc:  A program that allows a player to answer randomly ordered quiz questions 
       sourced from a database in a simple text file. If the answer submitted
       by the user is correct, the player is told so and gains 1 point. If the 
       answer is incorrect, the player loses 1 point. Once all questions have 
       been asked, the program displays the final results.
File:  printResult function header file
Time:  3.5 hours
*******************************************************************************/
#ifndef PRINTRESULT_H
#define PRINTRESULT_H

std::string printResult(int questions, int correct, int wrong);

#endif
