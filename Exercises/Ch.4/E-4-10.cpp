//10. Write a program that plays the game "Rock, Paper, Scissors." If you are
//    not familiar with the game do some research (e.g., on the web using 
//    Google). Reasearch is a common task for programmers. Use a switch-
//    statement to solve this exercise. Also, the machine should give random
//    answers (i.e., select the next rock, paper, or scissors randomly). Real
//    randomness is too hard to provide just now, so just build a vector with
//    a sequence of values to be used as "the next value." If you build the 
//    vector into the program, it will always play the same game, so maybe you
//    should let the user input some values. Try variations to make it less
//    easy for the user to guess which move the machine will make next.


#include<iostream>
#include<vector>

const std::vector<char> answers = {'r','p','s'};

int main()
{
    int me = 0, you = 0;

    // c0 will be used to keep the previous input
    // n will be calculated using c0 in order to generate something new
    char c, c0 = 0, n = 0;
    while(true)
    {
        std::cout << std::endl;
        std::cout << "rock,\tpaper,\tscissors... ?" << std::endl;
        std::cout << "r\tp\ts" << std::endl;
        if(std::cin >> c)
        {
            bool validInput = true;
            std::cout << std::endl << "You -> ";
            switch (c)
            {
                case 'r':
                    std::cout << "Rock";
                    c = 0;
                    break;
                case 'p':
                    std::cout << "Paper";
                    c = 1;
                    break;
                case 's':
                    std::cout << "Scissors";
                    c = 2;
                    break;
                default:
                    std::cout << "input not valid" << std::endl;
                    std::cout << "input can be only 'r', 'p', or 's'.";
                    std::cout << std::endl;
                    validInput = false;
            }
            if (!validInput) continue;
            
            std::cout << "|";

            //c0*c0 + 1 will never become 3, so n will always change
            n += c0*c0 + 1;
            n %= 3;
            switch (n)
            {
                case 0:
                    std::cout << "Rock";
                    break;
                case 1:
                    std::cout << "Paper";
                    break;
                case 2:
                    std::cout << "Scissors";
                    break;
            }
            std::cout << " <- Me" << std::endl;

            //last input will be added to c0
            c0 += c;
            c0 %= 3;

            //calcuating the scores
            if ((c+1)%3 == n)
                me++;
            else if((n+1)%3 == c)
                you++;

            std::cout << "You " << you;
            std::cout << "|";
            std::cout << me << " Me";
            std::cout << std::endl;

            //the answers are not random
            //you may fall in a repeating loop of answers :)
            //I'd like to use time but it's not yet allowed ^_^
            
        }
    }
}
