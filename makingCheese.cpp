#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

float contains = 2.76;
float price = 4.12;
float profit = 1.45;

int main()
{
    int cheeseProduced;

    //Intro message. Setfill only needs to be coded once until changed otherwise later on to the periods.
    cout << setw(80) << setfill('*') << "" << endl;
    cout << setw(26) << ""<< " Cheese, Costs, and Profits " << setw(26) << "" << endl;
    cout << setw(80) << "" << endl;

    //Displays message for the user and assigns a value to the int cheeseProduced.
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> cheeseProduced;

    //Sets float and double values to display two decimal points at max, and will always display two decimal points. Only needs to be declared once.
    cout << setprecision(2) << fixed;
    
    //Calculates the number of cointainers needed and rounds decimal value up to next nearest int.
    int containers = ceil(cheeseProduced / contains);
    cout << "\nThe number of containers to hold the cheese is: " << setfill('.') << right << setw(30) << "" << containers << endl;

    //Set of variables to get the number of characters in the container variable. This allows us to maintain the alignment of the output columns with one another no matter the input.
    string containerToString = to_string(containers);
    int containerLength = containerToString.length();

    //Converts our text and number into a string for easy reuse while also outputing our desired values for the user to see.
    string s1 = "The cost of producing " + to_string(containers) + " containers(s) of cheese is: ";
    cout << setw(s1.length()) << left << s1 << setw(27-containerLength) << right << "$" << containers * price << endl;

    string s2 = "The profit from producing " + to_string(containers) + " containers(s) of cheese is: ";
    cout << setw(s2.length()) << left << s2 << setw(23-containerLength)<< right << "$" << containers * profit << endl;


    //Prevents the code from auto closing upon completion. Requires user action.
    system("pause");
}