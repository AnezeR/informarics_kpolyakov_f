#include <iostream>

using namespace std;

int main() {

    int N, min15 = 6000, min20 = 6000, min25 = 6000, count15 = 0, count20 = 0, count25 = 0;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        string buf;

        cin >> buf >> buf >> buf;

        int pers = stoi(buf);
        cin >> buf;
        int price = stoi(buf);

        if (pers == 15){
            if (price < min15) {
                min15 = price;
                count15 = 1;
            } else if (price == min15)
                count15++;
        }

        if (pers == 20){
            if (price < min20) {
                min20 = price;
                count20 = 1;
            } else if (price == min20)
                count20++;
        }

        if (pers == 25){
            if (price < min25) {
                min25 = price;
                count25 = 1;
            } else if (price == min25)
                count25++;
        }
    }

    cout << count15 << ' ' << count20 << ' ' << count25;

    return 0;
}