#include <iostream>
#include <cstdlib>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::map;

auto
a_encyclopedia_completion(
    const int& N
) -> void {
    map<int,int> species_count;
    int species_sum {};
    for (int i {}, S {}; i < N; i += 1) {
        cin>>S;
        if (!species_count.contains(S)) {
            species_count[S] = 1;
        } else {
            species_count[S] += 1;
        }
    }
    for (const auto& [k, v] : species_count) {
        species_sum += k;
    }
    cout<<species_count.size()<<' '<<species_sum<<endl;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    a_encyclopedia_completion(N);
    return EXIT_SUCCESS;
}
