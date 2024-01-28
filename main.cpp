/******************************************************************************
Name:  Samuel Jordan (srjorda)
Due:   March 9, 2023
Class: CPSC1020
Desc:  A program that allows a player to answer randomly ordered quiz questions 
       sourced from a database in a simple text file. If the answer submitted
       by the user is correct, the player is told so and gains 1 point. If the 
       answer is incorrect, the player loses 1 point. Once all questions have 
       been asked, the program displays the final results.
File:  main
Time:  3.5 hours
*******************************************************************************/
#include "Quiz.h"
#include "printResult.h"

int main(int argc, char *argv[]) {
    
//////////////////////////////////// Setup /////////////////////////////////////
    std::string strQ, strA;
    std::vector<Quiz> quizVector;
    
    std::ifstream inFile;
    inFile.open(argv[1]);
    if (inFile.is_open() == false) {
        std::cout << "Error opening input file. Goodbye!" << std::endl;
        exit(0);
    }
    
    while (getline(inFile, strQ, ' ')) {    // scans "Q: " or to eof
        getline(inFile, strQ);              // scans question
        getline(inFile, strA, ' ');         // scans "A: "
        getline(inFile, strA);              // scans answer
        quizVector.push_back({strQ, strA}); // pair pushed to back of vector
    }
    inFile.close();
    
    srand(unsigned(time(0)));               // used to randomize the shuffle
    random_shuffle(quizVector.begin(), quizVector.end());
    
///////////////////////////////////// Game /////////////////////////////////////
    int questions = 0,      // # questions asked
        correct = 0,        // # answers correct
        wrong = 0;          // # answers incorrect
    std::string ans;        // user input for answer

    for (Quiz q : quizVector) {
        std::cout << q.getQuestion() << std::endl;  // user presented with first
        std::cout << "Type in your answer: ";       // question from vector
        getline(std::cin, ans);                     // answer from user
        
        if (ans == q.getAnswer()) {                 // if input = expected
            std::cout << "Correct!" << std::endl;
            correct++;
            Quiz::updateScore(1);
        }
        else {                                      // if input != expected
            std::cout << "Wrong! Correct answer: " << q.getAnswer() << std::endl;
            wrong++;
            Quiz::updateScore(-1);
        }
        std::cout << "Current score: " << Quiz::getScore() << std::endl << std::endl;
        questions++;
    }
    
    // final results displayed
    std::cout << printResult(questions, correct, wrong);

    return 0;
}