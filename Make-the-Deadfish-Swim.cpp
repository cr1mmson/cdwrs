#include <vector>
#include <string_view>
#include <cmath>
using namespace std;

vector<int> parse(string_view data) {
    vector <int> result;
    int total = 0;
    for (char c:data) {
        switch (c) {
            case 'i':
                total++;
            break;
            case 'd':
                total--;
            break;
            case 's':
                total = pow(total,2);
            break;
            case 'o':
                result.push_back(total);
                break;
        }
    }

    return result;
}
