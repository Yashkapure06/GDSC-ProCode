//Date 07 oct 2022
/*Accept a string from user and Return LARGEST PALINDROME word from it
Input : str1 = "This is a racecar"
Output : "racecar"

Input : str1 = "rotator did mistakes"
Output : "rotator"

Input : str1 = "christmas eve is better than noon"
Output : "noon"
*/

#include <iostream>
#include <sstream>
#include <string>
#include <iterator>
#include <algorithm>

int main() 
{
    std::string s;
    
    std::cout << "Enter a text: ";

    std::getline( std::cin, s );
    
    size_t total_words = 0;
    size_t palindrome_words = 0;
    std::string max_palindrome;
    
    std::istringstream is( s );
    std::string word;
    
    while ( is >> word )
    {
        ++total_words;
        if ( std::equal( std::begin( word ), std::end( word ), 
                         std::rbegin( word ), std::rend( word ) ) )
        {
            ++palindrome_words;
            
            if ( max_palindrome.size() < word.size() )
            {
                max_palindrome = word;
            }
        }                        
    }
    
   
    
    if ( palindrome_words != 0 )
    {
        std::cout << "The maximum palindrome is: " << max_palindrome << '\n';
    }
    
    return 0;
}