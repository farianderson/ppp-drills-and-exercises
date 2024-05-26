// 1. If you haven't already, do the Try this exercises from this chapter.



// Seriously?




// TRY THIS
//
//    Use the example above as a model for a program that converts yen ('y'),
//    kroner ('k'), and pounds ('p') into dollars. if you like realism, you can
//    find conversion rates on the web.

#include <iostream>
constexpr double YtoD = 0.006370847; // 2024/24/May
constexpr double KtoD = 0.094106040; // 2024/24/May
constexpr double PtoD = 1.274100000; // 2024/24/May 
constexpr double YutoD = 0.1406255;  // 2024/24/May                                     

double ToDollar(double money, char unit)
{

    if (unit == 'y')
        return YtoD * money;
    else if (unit == 'k')
        return KtoD * money;
    else if (unit == 'p')
        return PtoD * money;
    else
    {
        std::cout << "unit not valid" << std::endl;
        return -1;
    }
}

// TRY THIS
//
//    Rewrite your currency converter program from the previous Try this to use
//    a switch-statement. Add conversions from yuan and kroner. Which version
//    of the program is easier to write, understand, and modify? Why?

double ToDollar_switch(double money, char unit)
{
    switch (unit)
    {
        case 'y':
            return YtoD * money;
        case 'k':
            return KtoD * money;
        case 'p':
            return PtoD * money;
        case 'u':
            return YutoD * money;
        default:
            std::cout << "not valid unit" << std::endl;
            return -1;
    }
}

// honestly, the if-statement is easier for me to write, but the switch-
// statement is easier to understand and modify. it doesn't need {} to block
// the code :)

// TRY THIS
//
//    The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to
//    write out a table of characters with their corresponding integer values.

void print_a2z()
{
    for (int i = 0; 'a'+i <= 'z'; i++)
        std::cout << char ('a'+i) << '\t' << 'a'+i << std::endl;
}

// TRY THIS
//
//    Rewrite the character value example from the previous Try this to use a
//    for-statement. Then modify your program to also write out a table of the
//    integer values for uppercase letters and digits.

void print_02z()
{
    for (int i = 0; '0'+i <= '9'; i++)
        std::cout << char ('0'+i) << '\t' << '0'+i << std::endl;

    std::cout << std::endl;

    for (int i = 0; 'A'+i <= 'Z'; i++)
        std::cout << char ('A'+i) << '\t' << 'A'+i << std::endl;

    std::cout << std::endl;

    for (int i = 0; 'a'+i <= 'z'; i++)
        std::cout << char ('a'+i) << '\t' << 'a'+i << std::endl;
}

// TRY THIS
//    Implement square() without using the multiplication operator; that is, do
//    the x*x by repeated addition (start a variable result at 0 and add x to 
//    it x times). Then run some version of "the first program" using that
//    square().

int square(int n)
{
    int o = 0;
    for(int i = 0; i < n; i++)
        o += n; 
    return o;

    //sorry which "first program" are you talking about??
}

// TRY THIS
//    Write a program that bleeps out words that you don't like; that is, you 
//    read in words using cin and print them again on cout. if a word is among
//    a few you have defined, you write out BLEEP instead of that word. start
//    with one "dislike word" such as
//
//      string dislike = "Broccoli";
//
//    When that works, add a few more.

#include <string>         
#include <vector>

void print_bleep(std::string word, std::pmr::vector<std::string> bleep_words)
{
    bool bleep = false;
    for(std::string s:bleep_words)
        if(word == s)
        {
            bleep = true;
            std::cout << "BLEEP" << std::endl;
            return;
        }

    std::cout << word << std::endl;
}

int main()
{
    std::pmr::vector<std::string> bleep_words = {"word1","word2","word3"};
    std::string input;
    while(std::cin >> input)
    {
        print_bleep(input,bleep_words);
    }
}
