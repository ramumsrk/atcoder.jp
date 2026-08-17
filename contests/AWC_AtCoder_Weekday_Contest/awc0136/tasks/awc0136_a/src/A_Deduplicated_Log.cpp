#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_deduplicated_log(
    const int& N
) -> void {
    vector<long long int> A(0,0);
    long long int element {}, last_element {};
    for (int i {}; i < N; i += 1) {
        cin>>element;
        if (
            A.empty()
            ||
            last_element != element
        ) {
            A.push_back(element);
            last_element = element;
        }
    }
    for (const auto& a : A) {
        cout<<a<<endl;
    }
}


auto
main(void) -> int {
    int N {};
    cin>>N;
    a_deduplicated_log(N);
    return EXIT_SUCCESS;
}
