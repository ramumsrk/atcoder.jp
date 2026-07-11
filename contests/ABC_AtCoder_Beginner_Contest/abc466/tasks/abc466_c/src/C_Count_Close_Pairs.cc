#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
c_count_close_pairs(
    const int& N
) -> void {
    int n {N};
    int i {}, j {};
    int pairs {};
    while (n) {
        cout<<"? i j ";
        cin>>i>>j;
        if (
            ((i >= 1) && (i < j))
            &&
            (j <= N)
            &&
            j - i == 1
        ) {
            cout<<"Yes"s<<endl;
            pairs += 1;
        } else {
            cout<<"No"s<<endl;
        }
        n -= 1;
    }
    cout<<"! "<<pairs<<endl;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    // function call
    c_count_close_pairs(N);
    return EXIT_SUCCESS;
}