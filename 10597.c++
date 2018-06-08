#include <algorithm>
#include <iostream>
#include <string.h>
#include <string>
#include "function.h"

using namespace std;

    /**
    read word into 'words' array
    and count words number 'numberOfTotalWords' at same time
    **/
    void WordCount::readWords()
    {
        int i=0;
        char s[20];
        while(scanf("%s",s)!=EOF)
        {
           words[i] = s;
            i++;
        }
        numberOfTotalWords = i;

    }

    /**
    sort words in the 'words' array in the dictionary order.
    **/
    void WordCount::sortWords()
    {
        sort(words,words+numberOfTotalWords);
    }

    /**
    find out number of different words and store in 'numberOfDiffWords'
    and put different words in string array 'diffwords'

    using the 'diffwords' array to count each words appear times
    and put in 'counting'
    **/
    void WordCount::countWords()
    {
        int diffcount=0;
        diffwords = new string[numberOfMaxWords];
        counting = new int[numberOfMaxWords]();
        string tmp;
        tmp = words[0];
        for(int i=0;i<numberOfTotalWords+1;i++)
        {
            if(tmp==words[i])
            {
                counting[diffcount]++;

            }
            else{
                    diffwords[diffcount]=tmp;
                tmp = words[i];
                diffcount++;
            counting[diffcount]++;
            }
        }
        numberOfDiffWords=diffcount;
    }

    /**
    print out the result in format:
    <words><space><appear times>
    **/
    void WordCount::dumpResult()
    {
        for(int i=0;i<numberOfDiffWords;i++)
        {
        cout<<diffwords[i]<<' '<<counting[i]<<endl;

        }
    }

