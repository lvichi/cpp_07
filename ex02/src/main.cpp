/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:39:22 by lvichi            #+#    #+#             */
/*   Updated: 2025/06/15 14:39:22 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <exception>
#include "Array.hpp"


int main( int argc, char** argv )
{
  ( void )argc;
  ( void )argv;

  // Constructor
  Array<int> emptyArray;
  std::cout << "Size of emptyArray: "
            << emptyArray.size() << std::endl << std::endl;

  // Constructor with argument
  Array<std::string> stringArray( 10 );
  std::cout << "Size of stringArray: "
          << stringArray.size() << std::endl << std::endl;
  stringArray[0] = "String 1";
  stringArray[1] = "String 2";
  stringArray[2] = "String 3";
  stringArray[3] = "String 4";
  stringArray[4] = "String 5";
  stringArray[5] = "String 6";
  stringArray[6] = "String 7";
  stringArray[7] = "String 8";
  stringArray[8] = "String 9";
  stringArray[9] = "String 10";

  for ( unsigned int i = 0; i < stringArray.size(); i++ ) {
    std::cout << stringArray[i] << std::endl << std::endl;
  }

  // Forcing an Out of Bounds exception
  try {
    std::cout << stringArray[10] << std::endl << std::endl ;
  } catch( std::exception& e ) {
    std::cout << "Error caught: " << e.what() << std::endl << std::endl;
  }

  // Copy and Assignment constructors
  Array<std::string> copyStringArray( stringArray );

  Array<std::string> assignmentStringArray;
  assignmentStringArray = stringArray;

  std::cout << "stringArray value: " << stringArray[0] << std::endl
            << "copyStringArray value: " <<  copyStringArray[0] << std::endl
            << "assignmentStringArray value: " << assignmentStringArray[0]
            << std::endl << std::endl
            << "stringArray address: "  << &stringArray[0] << std::endl
            << "copyStringArray address: "  << &copyStringArray[0] << std::endl
            << "assignmentStringArray address: "  << &assignmentStringArray[0]
            << std::endl << std::endl;

  // Const version of operator []
  const Array<std::string> constArray( stringArray );


  std::cout << "constArray value [3]: " << constArray[3] << std::endl
            << "constArray size: " << constArray.size()
            << std::endl << std::endl;

  // constArray[3] = "Error String";    // Uncomment this line to check for const value error.

  return 0;
}
