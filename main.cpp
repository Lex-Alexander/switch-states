//////////////////////////////////////////////////////////////////
//Module :switch.cpp
//
//Purpose :To Demonstrates the switch statement and case label
//
//
//
///////////////////////////////////////////////////////////////////

#include <iostream>


int main()
{
    int num;
    // Get a number from the user
    std::cout << "Enter a number from 1 to 5 > ";
    std::cin >> num;

    //Make a decision base on the number

    switch(num){

    case 1:
        std::cout <<"You chose number one.\n";
        break;

    case 2:
        std::cout <<"You chose the number two";
        break;

    case 3:
        std::cout <<"You chose the number three";
        break;

    case 4:
        std::cout <<"You chose the number four";
        break;

    case 5:
        std::cout <<"You chose the number five";
        break;



    default:
        std::cout <<"Your number isn't 1 2 3 4 or 5\n"<< std::endl;




    }



}
