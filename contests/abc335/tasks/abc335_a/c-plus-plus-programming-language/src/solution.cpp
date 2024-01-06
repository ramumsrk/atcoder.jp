/*
 * std::cin
 * std::endl
 */
#include <iostream>

// EXIT_SUCCESS
#include <cstdlib>

/*
 * C++ program execution starts
 * from main() function
 */
int
main()
{
    /*
     * Read input string
     */
    std::string S {};
    std::getline( std::cin>>std::ws , S );

    S[S.length() - 1] = '4';

    std::cout<<S<<std::endl;
  /*
   * Return EXIT_SUCCESS to
   * the underlying operating
   * system
   */
  return EXIT_SUCCESS;
}
