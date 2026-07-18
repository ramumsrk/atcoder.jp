#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
a_obesity(
    const double& H,
    double const& W
) -> string {
    double bmi {(W/(H/100))/(H/100)};
    // cout<<"BMI: "<<bmi<<endl;
    if (bmi >= 25) {
        return "Yes"s;
    } else {
        return "No"s;
    }
}

auto
main(void) -> int {
    int H {}, W {};
    cin>>H>>W;
    string yes_or_no {a_obesity(H, W)};
    cout<<yes_or_no<<endl;
    return EXIT_SUCCESS;
}