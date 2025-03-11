/*
*Student Name: Jay Fisher
*File Name: Ch02Exercise13.cpp
*Data: 03/11/2025
*/

//  #include is used to import libraries that get copied into the code
//  <iostream> is used for inputs and outputs and <conio.h> is used for a press any key function _getch() 
#include <iostream>
#include <conio.h>

//  namespaces are used to group items much like a class or function
//  std is a namespace from <iostream> library
using namespace std;

//  c++ require the use of main to run a program, 
//  int is looking for an integer return(i believe 0 is standard for a successful run)
int main() {
    
    //  declaring float variables for percents and prices
    float original_price, mark_up_percentage, sales_tax_rate;

    //  Read the original price of the item sold
    cout << "\n\n  Enter the original price of the item: $";
    cin >> original_price;

    //  Read the percentage of the marked-up price
    cout << "\n  Enter the percentage of the marked-up price: ";
    cin >> mark_up_percentage;

    //  Read the sales tax rate
    cout << "\n  Enter the sales tax rate as a percent: ";
    cin >> sales_tax_rate;

    //  Calculate the store's selling price of the item
    float selling_price = original_price + (original_price * (mark_up_percentage / 100));

    //  Calculate the sales tax
    float sales_tax = selling_price * (sales_tax_rate / 100);

    //  Calculate the final price of the item
    float final_price = selling_price + sales_tax;

    //  Output the results
    cout << "  Original Price: $" << original_price << endl;
    cout << "  Mark-up Percentage: " << mark_up_percentage << "%" << endl;
    cout << "  Selling Price: $" << selling_price << endl;
    cout << "  Sales Tax Rate: " << sales_tax_rate << "%" << endl;
    cout << "  Sales Tax: $" << sales_tax << endl;
    cout << "  Final Price: $" << final_price << endl;
    cout << "\n\n  Press any key to continue ...";
    
    //  Wait for a key press before exiting
    _getch(); 

    //  Returns a value of 0
    return 0;
}