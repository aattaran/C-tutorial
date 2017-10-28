/*
 * for1.cpp
 *
 *  Created on: Oct 24, 2017
 *      Author: User
 */




/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main()
{
    int in;
    float avg=0,sum=0;
    for(int i=0; i< 5;i++)
    {
        std::cout<<"enter a number\n";
        std::cin>>in;
        std::cout<<in;
        std::cout<<"\n";
        sum=sum+in;
        std::cout<<"sum is : "<<sum<<"\n";

    }
    avg=sum/5;
    std::cout<<"avg is : "<<avg;
    return 0;
}
