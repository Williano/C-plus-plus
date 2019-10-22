/********************************************
 * Title: ArgumentsDemo.cpp                 *
 * Description: This program demonstrates   *
 *              how to read command line    *
 *              arguments.                  *
 * Author: William Kpabitey Kwabla          *
 * Date: 22/10/19                           *
*********************************************/

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "You entered " << (argc - 1) << " command line arguments\n";

    if (argc > 1)
    {
        std::cout << "Here they are: \n";

        for (int count = 1; count < argc; count++)
        {
            std::cout << argv[count] << std::endl;
        }
    }

    return 0;
}