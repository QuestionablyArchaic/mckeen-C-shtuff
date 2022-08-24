// NewtonSQRT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double root; // stores the number being square rooted
    double rootytooty = 1; // sqrt sub i
    double rooty = 0; // sqrt sub i+1
    int iterations;
    int menu;
    cout << "Enter 0 if you wish to terminate the loop! Enter any other number to continue the loop.\n";
    cin >> menu; // menu index is taken here
    while (menu != 0) { // sentinel value is 0 
        cout << "\nEnter n value here: ";
        cin >> root; // initialization
        cout << "\nThe value of n is " << root; // initialization
        cout << "\nHow many iterations do you want the loop to run? ";
        cin >> iterations; // initialization
        for (int i = 0; i < iterations; i++) { // for loop because we know how many iterations are requested
            rooty = 0.5 * (rootytooty + root / rootytooty); 
            cout << "\nThe current estimate is " << rooty; // for testing and seeing the progression per iteration
            rootytooty = rooty; // updating the working variable per iteration
            
        }
        cout << "\nAfter " << iterations << " iteration(s), the approximate square root of " << root << " is " << rooty << "."; // display the final answer
        cout << "\nEnter 0 if you wish to terminate the loop! Enter any other number to continue the loop. \n";
        cin >> menu; // menu index is taken again here, in order to allow the user to break the loop
    }
    cout << "Thanks for stopping by! Now use an actual calculator to get the square root."; // this literally takes more time to use than a calculator, why use this...


        /* Book Answer
     double NewtonSQRT()
    {
        double answer = 1;
        int i = 0;
        assert((n>0 && (numIterations>0));
        while (i < numIterations)
        {
            answer = 0.5 * (answer + n / answer);
            i++;
        }
    return answer;
    }
       */

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
