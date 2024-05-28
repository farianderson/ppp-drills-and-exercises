// 4. Write a program to to play a numbers guessing game. The user thinks of a
//    number between 1 and 100 and your program asks questions to figure out
//    what the number is (e.g., "is the number you are thinking of less thatn
//    50?"). Your program should be able to identify then number after asking
//    no more than seven questions. Hint: use the < and <= operators and and
//    the if-else construct.

#include <iostream>
#include <string>
int main()
{
    std::cout << "think of a number between 1 and 100. write \"ok\" to continue"
        << std::endl;

    std::string input;
    if(std::cin >> input)
    {
        if(input != "ok")
        {
            std::cout << "program exit...";
            return 0;
        }
    }
    else
    {
        std::cout << "program exit...";
        return 0;
    }

    int min = 1, max = 100;
    bool guessed = false;
    for(int i = 0; ; )
    {
        bool last_question = false;

        int newb = (min + max)/2;
        
        std::cout << min << "," << max << std::endl;

        std::cout << "question " << ++i << std::endl;
        if(max == min + 1 || i == 7)
        {
            last_question = true;
            std::cout << "is it " << newb << " ? [y/n] "; 
        }
        else
            std::cout << "is it less than or equal to " << newb << " ? [y/n] ";

        char c;
        if(std::cin >> c)
        {
            if(c == 'y')
            {
                if(last_question)
                {
                    guessed = true;
                    break;
                }
                else
                    max = newb;
            }
            
            if(c == 'n')
            {
                if(last_question) break;
                else
                    min = newb + 1;
            }
        }
        else
        {
            std::cout << "bad input.. program exit." << std::endl;
            return 0;
        }

    }

    if(guessed) std::cout << "successfully guessed." << std::endl;
    else
    {
        std::cout << "then it's " << min + 1 << " [y/n] ";

        char c;
        if(std::cin >> c)
            if(c == 'y')
                std::cout << "successfully guessed." << std::endl;
            else std::cout << "program failed :'(" << std::endl;
        else std::cout << "bad input.. program exit.";

    }
}
