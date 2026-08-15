#include <iostream>
#include <cstdlib>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::tolower;
using namespace std::literals::string_literals;

auto
b_survey_tabulation(
    const int& N
) -> int {
    map<string,int> string_int;
    string input_string {};
    for (int i {}; i < N; i += 1) {
        cin>>input_string;
        string another_string {};
        for (const auto& ch : input_string) {
            another_string.push_back(tolower(ch));
        }
        if (!string_int.contains(another_string)) {
            string_int[another_string] = 1;
        } else {
            string_int[another_string] += 1;
        }
    }
    int max_same_answer {};
    for (const auto& [k, v] : string_int) {
        if (string_int[k] > max_same_answer) {
            max_same_answer = string_int[k];
        }
    }
    return max_same_answer;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    int max_same_answer {b_survey_tabulation(N)};
    cout<<max_same_answer<<endl;
    return EXIT_SUCCESS;
}