/*
 * degree.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: User
 */



#include<iostream>

using namespace std;

 int main ()
 {
   float FTemp = 0;
   float CTemp = 0;

   cout << "Enter a Farenheit temperature: ";
   cin >> FTemp;

   CTemp = (FTemp - 32) / (9.0/5.0);
   cout << "\n" << FTemp <<" in farenheit is "<< CTemp << " in degrees\n";
   return 0;
 }
