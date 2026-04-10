#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
main(void) -> int {
    int N {};
    cin>>N;
    int refund_amount {};
    for (int i {}; i < N; i += 1) {
        string T {};
        int P {};
        cin>>T>>P;
        if (T == "normal"s) {
            refund_amount += P;
        } else if (T == "half"s) {
            refund_amount += P/2;
        }
    }
    cout<<refund_amount<<endl;
    return EXIT_SUCCESS;
}