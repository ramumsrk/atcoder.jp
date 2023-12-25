#include "a_water_station_constraints.hh"

// std::format
#include <format>

// EXIT_SUCCESS
#include <cstdlib>

// std::cin
// std::cout
#include <iostream>

/**
  * C++ program execution starts
  * from built-in @fn main()
  */
int main()
{
    int short takahashi_distance { read_takahashi_distance() };

    print_water_station_points();

    std::cout<<std::format(
      "{}" , nearest_water_station_distance( takahashi_distance )
    )<<std::endl;

  /**
    * Return @return EXIT_SUCCESS
    * to underlying operating-system
    */
  return EXIT_SUCCESS;
}