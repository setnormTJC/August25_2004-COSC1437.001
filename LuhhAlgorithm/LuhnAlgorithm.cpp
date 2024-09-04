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
       4, 	5, 	5, 	6, 	7, 	3, 	7, 	5, 	8, 	6, 	8, 	9, 	9, 	8, 	5, 	5
    };

    //in place
    
    //:: -> the "scope resolution" operator
    /*std::cout << */validCCN.pop_back();// << "\n";
    //std::cout << "";
    //Step 2: (how to remove the last (rightmost) digit)? 
    std::cout << "After \"Step 2\" got executed: \n";
    printCCN(validCCN);
    
    //step 3: 
    std::reverse(validCCN.begin(), validCCN.end()); // myReverse(validCCN)
    std::cout << "Did std::reverse work? \n";
    printCCN(validCCN); 

    ///steps 4 and 5: 
    for (int i = 0; i < validCCN.size() - 1; i += 2) {

        validCCN[i] *= 2; //REFACTORING 

        if (validCCN[i] > 9) {

            validCCN[i] -= 9;

        }

    }

}

