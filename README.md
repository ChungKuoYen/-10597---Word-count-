# -10597---Word-count-
Description

Google uses "word count" as a preprocessing for its search engine.  The program reads an article which has many words, and outputs the counts of each distinguished words.  The output words are sorted in the dictionary order.  A "word" is defined as a consecutive sequence of English letters (upper and/or lower case).

A class WordCount has been defined as follows:

// function.h
#include <iostream>
#include <string>

using namespace std;

class WordCount
{
public:
    WordCount(){};
    ~WordCount(){};

    /**
    read word into 'words' array
    and count words number 'numberOfTotalWords' at same time
    **/
    void readWords();

    /**
    sort words in the 'words' array in the dictionary order.
    **/
    void sortWords();

    /**
    find out number of different words and store in 'numberOfDiffWords'
    and put different words in string array 'diffwords'

    using the 'diffwords' array to count each words appear times
    and put in 'counting'
    **/
    void countWords();

    /**
    print out the result in format:
    <words><space><appear times>
    **/
    void dumpResult();

private:
    static const int numberOfMaxWords=65536;

    string words[numberOfMaxWords]; ///store the input article
    int numberOfTotalWords;         /// the total number of words

    string *diffwords;     /// store the pointer to different words
    int numberOfDiffWords; /// the number of different words
    int *counting;         /// counts for different words
};

And the program flow is described in the main.cpp

// main.cpp
#include <iostream>
#include "function.h"

using namespace std;

int main()
{
    WordCount wc;

    wc.readWords();
    wc.sortWords();
    wc.countWords();
    wc.dumpResult();

    return 0;
}

Your job is to implement each member function of the class.
Input

An article and end with EOF
Output

Print the counts of each distinguished words
