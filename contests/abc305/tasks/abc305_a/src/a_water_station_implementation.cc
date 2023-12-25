#include "a_water_station_constraints.hh"

// std::cin
// std::cout
#include <iostream>

// std::format
#include <format>

// assert
#include <cassert>

// Function definition
short int read_takahashi_distance()
{
    std::cout<<std::format(
      "Enter distance walked by takahashi: "
    );
    int short takahashi_distance {};
    std::cin>>takahashi_distance;
    assert(
      takahashi_distance >= minimum_distance
      &&
      takahashi_distance <= maximum_distance
    );
  return takahashi_distance;
}

// Function definition
void print_water_station_points()
{
    for ( short int start_point { minimum_distance } ; start_point <= maximum_distance ; start_point += distance_between_water_stations )
    {
      std::cout<<std::format(
        "Water station at point '{}' kilometer(s)" , start_point
      )<<std::endl;
    }
  return;
}

/**
  * Function definition
  * While travelling @param
  * `takahashi_distance` where can
  * `Takahashi` find the nearest or
  * closest water-station and @return
  * the water-station found
  */
short int nearest_water_station_distance( int short const takahashi_distance )
{
    if ( is_takahashi_at_start( takahashi_distance ) )
    {
      return takahashi_distance;
    }
    if ( is_takahashi_at_end( takahashi_distance ) )
    {
      return takahashi_distance;
    }
    int short result {};
    for (
          int short previous_point { minimum_distance },
          next_point { distance_between_water_stations };
          previous_point <= ( maximum_distance - distance_between_water_stations );
          previous_point = next_point,
          next_point += distance_between_water_stations
        )
    {
      if ( is_takahashi_distance_between_water_stations( takahashi_distance , previous_point , next_point ) )
      {
        if (
            takahashi_distance - previous_point
            <=
            next_point - takahashi_distance
           )
        {
          result = previous_point;
          break;
        }
        else if (
            next_point - takahashi_distance
            <=
            takahashi_distance - previous_point
            )
        {
          result = next_point;
          break;
        }
      }
      /*
      else if ( takahashi_distance <= previous_point )
      {
        result = previous_point;
        break;
      }
      else if ( takahashi_distance >= next_point )
      {
        result = next_point;
        break;
      }*/
    }
  return result;
}

/**
  * Function definition
  * If @param `takahashi_distance`
  * == `minimum_distance` @return
  * @param `takahashi_distance` 
  */
bool is_takahashi_at_start( short int takahashi_distance )
{
  return ( takahashi_distance == minimum_distance ) ? true : false;
}

/**
  * Function definition
  * If @param `takahashi_distance`
  * == `maximum_distance` @return
  * @param `takahashi_distance`
  */
bool is_takahashi_at_end( int short takahashi_distance )
{
  return ( takahashi_distance == maximum_distance ) ? true : false;  
}
/**
  * Function definition
  * Check if @param takahashi_distance
  * is between @param previous_point
  * and @param next_point
  */
bool is_takahashi_distance_between_water_stations( const short int takahashi_distance , int const short previous_point , short const int next_point )
{
  return ( ( takahashi_distance >= previous_point ) && ( takahashi_distance <= next_point ) ) ? true : false;
}