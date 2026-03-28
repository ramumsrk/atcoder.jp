#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int Q {};
    cin>>Q;
    vector<long long int> T(0,0);
    for (int q {}; q < Q; q += 1) {
        int q_type {};
        long long int h {};
        cin>>q_type;
        if (q_type == 1) {
            cin>>h;
            T.push_back(h);
            cout<<T.size()<<endl;
        } else if (q_type == 2) {
            cin>>h;
            int elements {};
            for (int i {}; i < static_cast<int>(T.size()); i += 1) {
                if (h >= T[i]) {
                    elements += 1;
                }
            }
            T.resize(T.size()-elements);
            cout<<T.size()<<endl;
        }
    }  
    return EXIT_SUCCESS;
}