#include <iostream>
#include <cstdlib>
#include <numbers>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::numbers::pi;
using std::setprecision;

auto
main(void) -> int {
    int D {};
    cin>>D;
    double radius {D/2.0};
    auto circle_area {pi*(radius*radius)};
    cout<<setprecision(15)<<circle_area<<endl;
    return EXIT_SUCCESS;
}