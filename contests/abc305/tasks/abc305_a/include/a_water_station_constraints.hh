#ifndef _a_water_station_constraints_
#define _a_water_station_constraints_
/**
  * Starting point of the ultra-marathon
  */
constexpr int short minimum_distance { 0 };
/**
  * Ending point of the ultra-marathon 
  */
constexpr short int maximum_distance { 100 };
/**
  * Complete distance between
  * `maximum_distance` and
  * `minimum_distance`
  */
short constexpr int total_distance { maximum_distance - minimum_distance };
/**
  * Distance between two consecutive
  * water-stations 
  */
int constexpr short distance_between_water_stations { 5 };
/**
  * Function declaration
  * Print all the water stations
  * between `minimum_distance` and
  * `maximum_distance`
  */
void print_water_station_points();
/**
  * Function declaration 
  * Read the distance travelled by
  * `Takahashi` so far
  */
int short read_takahashi_distance();
/**
  * Function declaration
  * While travelling @param takahashi_distance
  * where can `Takahashi` find the nearest or
  * closest water-station?
  */
short int nearest_water_station_distance( int const short takahashi_distance );
/**
  * Function declaration
  * If @param takahashi_distance
  * == `minimum_distance` @return
  * true
  */
bool is_takahashi_at_start( short int takahashi_distance );
/**
  * Function declaration
  * If @param `takahashi_distance`
  * == `maximum_distance` @return
  * `true`
  */
bool is_takahashi_at_end( int short takahashi_distance );
/**
  * Function declaration
  * Check if @param takahashi_distance
  * is between @param previous_point
  * and @param next_point
  */
bool is_takahashi_distance_between_water_stations( const short int takahashi_distance , int const short previous_point , short const int next_point );
#endif // _a_water_station_constraints_