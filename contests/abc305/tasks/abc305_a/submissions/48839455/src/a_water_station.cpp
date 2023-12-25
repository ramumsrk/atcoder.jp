// std::cin
// std::cout
#include <iostream>

// std::format
#include <format>

// assert
#include <cassert>

// EXIT_SUCCESS
#include <cstdlib>

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
 * While travelling @param
 * `takahashi_distance` where can
 * `Takahashi` find the nearest or
 * closest water-station
 */
short int nearest_water_station_distance(int const short takahashi_distance);
/**
 * Function declaration
 * If @param `takahashi_distance`
 * == `minimum_distance` @return
 * `true`
 */
bool is_takahashi_at_start(short int takahashi_distance);
/**
 * Function declaration
 * If @param `takahashi_distance`
 * == `maximum_distance` @return
 * `true`
 */
bool is_takahashi_at_end(int short takahashi_distance);
/**
 * Function declaration
 * Check if @param takahashi_distance
 * is between @param previous_point
 * and @param next_point
 */
bool is_takahashi_distance_between_water_stations(const short int takahashi_distance, int const short previous_point, short const int next_point);

// Function definition
short int read_takahashi_distance()
{
    std::cout << std::format(
        "Enter distance walked by takahashi: ");
    int short takahashi_distance {};
    std::cin >> takahashi_distance;
    assert(
        takahashi_distance >= minimum_distance
        && takahashi_distance <= maximum_distance);
    return takahashi_distance;
}

// Function definition
void print_water_station_points()
{
    for (short int start_point { minimum_distance }; start_point <= maximum_distance; start_point += distance_between_water_stations) {
        std::cout << std::format(
            "Water station at point '{}' kilometer(s)", start_point)
                  << std::endl;
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
short int nearest_water_station_distance(int short const takahashi_distance)
{
    if (is_takahashi_at_start(takahashi_distance)) {
        return takahashi_distance;
    }
    if (is_takahashi_at_end(takahashi_distance)) {
        return takahashi_distance;
    }
    int short result {};
    for (
        int short previous_point { minimum_distance },
        next_point { distance_between_water_stations };
        previous_point <= (maximum_distance - distance_between_water_stations);
        previous_point = next_point,
        next_point += distance_between_water_stations) {
        if (is_takahashi_distance_between_water_stations(takahashi_distance, previous_point, next_point)) {
            if (
                takahashi_distance - previous_point
                <= next_point - takahashi_distance) {
                result = previous_point;
                break;
            } else if (
                next_point - takahashi_distance
                <= takahashi_distance - previous_point) {
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
bool is_takahashi_at_start(short int takahashi_distance)
{
    return (takahashi_distance == minimum_distance) ? true : false;
}

/**
 * Function definition
 * If @param `takahashi_distance`
 * == `maximum_distance` @return
 * @param `takahashi_distance`
 */
bool is_takahashi_at_end(int short takahashi_distance)
{
    return (takahashi_distance == maximum_distance) ? true : false;
}
/**
 * Function definition
 * Check if @param takahashi_distance
 * is between @param previous_point
 * and @param next_point
 */
bool is_takahashi_distance_between_water_stations(const short int takahashi_distance, int const short previous_point, short const int next_point)
{
    return ((takahashi_distance >= previous_point) && (takahashi_distance <= next_point)) ? true : false;
}

/*
 * C++ program execution starts
 * from built-in `main()` function
 */
int main()
{
    int short takahashi_distance { read_takahashi_distance() };
    /*
     * Function call
     */
    print_water_station_points();
    /*
     * Function call
     */
    std::cout << std::format(
        "{}", nearest_water_station_distance(takahashi_distance))
              << std::endl;
    /*
     * Return `@return` `EXIT_SUCCESS`
     * to underlying operating-system
     */
    return EXIT_SUCCESS;
}
