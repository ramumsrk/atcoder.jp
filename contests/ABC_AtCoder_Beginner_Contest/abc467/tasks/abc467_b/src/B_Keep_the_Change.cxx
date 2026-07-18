#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
b_keep_the_change(
    const int& N
) -> void {
    int initial_X {10'000}, initial_Y {10'000};
    for (int i {}; i < N; i += 1) {
        int A {}, B {};
        string S {};
        cin>>A>>B>>S;
        if (S == "take"s) {
            initial_Y -= B;
            initial_Y += B - A;
        } else if (S == "keep"s) {
            initial_X -= B;
        }
    }
    cout<<(initial_Y - initial_X)<<endl;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    b_keep_the_change(N);
    return EXIT_SUCCESS;
}