// EXIT_SUCCESS
#include <cstdlib>

/*
 * std::endl
 * std::cin
 */
#include <iostream>

/*
 * C++ program execution starts from
 * main() function
 */
int
main()
{
    /*
     * Read the value N
     */
    int N {};
    std::cin>>N;
    /*
     * Print the pairs
     */
    for ( int x {} ; x <= N ; x += 1 )
    {
      for (int y {} ; y <= N ; y += 1 )
      {
        for ( int z {} ; z <= N ; z += 1 )
        {
          if ( ( x + y + z ) <= N )
          {
            std::cout<<x<<' '<<y<<' '<<z<<std::endl;
          }
        }
      }
    }
  /*
   * Return EXIT_SUCCESS to the
   * underlying operating-system
   */
  return EXIT_SUCCESS;
}
