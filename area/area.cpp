/*
 * area.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: User
 */




/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringlength,stringwidth;
   float length = 0;
   float width = 0;
   float area = 0;

   std::cout << "Enter length of a room: ";
   std::getline (std::cin,stringlength);
   std::stringstream(stringlength) >> length;

   std::cout << "Enter length of a room: ";
   std::getline (std::cin,stringwidth);
   std::stringstream(stringwidth) >> width;

   area  = length*width;



   std::cout << "area is " << area;
   return 0;
 }
