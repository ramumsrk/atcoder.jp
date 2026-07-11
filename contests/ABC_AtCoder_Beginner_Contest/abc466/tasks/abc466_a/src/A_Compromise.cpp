#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
a_compromise(
    const int& N
) -> string {
    int negative_count {}, ith_choice {};
    for (int i {}; i < N; i += 1) {
        cin>>ith_choice;
        if (ith_choice < 0) {
            negative_count += 1;
        }
    }
    return negative_count == N ? "Yes"s : "No"s;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    cout<<a_compromise(N)<<endl;
    return EXIT_SUCCESS;
}