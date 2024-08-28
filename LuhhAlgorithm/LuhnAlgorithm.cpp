/*Author list: 
Company name
Copyright/copyleft (Apache license)

*/

#include <iostream>

#include<vector> 

void printCCN(std::vector<int> validCCN)
{
    for (auto& number : validCCN) //"range-based" for loop
    {
        std::cout << number << " ";
    }
}
//using namespace std; 

int main()
{

    std::vector<int> invalidCCN = 
    {
        8, 6, 7, 5, 3, 0, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };

    //int staticCCN[16]; //"C-style" array (and it is "static") 


    std::vector<int> validCCN =
    {
       4, 	5, 	5, 	6, 	7, 	3, 	7, 	5, 	8, 	6, 	8, 	9, 	9, 	8, 	5, 	16494
    };

    //:: -> the "scope resolution" operator
    std::cout << validCCN.back() << "\n";
    
    //Step 1: (how to remove the last (rightmost) digit)? 
    printCCN(validCCN);

    //validCCN.

    //VALID_CCN.


    //std::cout << "Hello World!\n";
}

