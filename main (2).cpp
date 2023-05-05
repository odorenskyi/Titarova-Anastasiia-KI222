#include <iostream>
using namespace std;

int main() {
    const int WIND_SPEEDS[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    const string WIND_DESCRIPTIONS[13] = {"Calm", "Light air", "Light breeze", "Gentle breeze", "Moderate breeze", "Fresh breeze", "Strong breeze", "Near gale", "Gale", "Strong gale", "Storm", "Violent storm", "Hurricane"};

    int wind_speed;
    int min_wind_speed = INT_MAX;

    for (int i = 0; i < 24; i++) {
        cout << "Enter the wind speed for hour " << i+1 << ": ";
        cin >> wind_speed;

        if (wind_speed < min_wind_speed) {
            min_wind_speed = wind_speed;
        }
    }

    int beaufort_scale = 0;

    for (int i = 0; i < 13; i++) {
        if (min_wind_speed <= i*2) {
            beaufort_scale = WIND_SPEEDS[i];
            break;
        }
    }

    cout << "The minimum wind speed for the day is " << min_wind_speed << " m/s (" << WIND_DESCRIPTIONS[beaufort_scale] << " on the Beaufort scale)." << endl;

    return 0;
}
