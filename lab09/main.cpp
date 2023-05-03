#include <iostream>

using namespace std;

int main() {
    int population, deaths, births, arrivals, departures;

    cout << "Enter the population of the region on January 1: ";
    cin >> population;

    cout << "Enter the number of deaths from January 1 to present day: ";
    cin >> deaths;

    cout << "Enter the number of births from January 1 to present day: ";
    cin >> births;

    cout << "Enter the number of arrivals from January 1 to present day: ";
    cin >> arrivals;

    cout << "Enter the number of departures from January 1 to present day: ";
    cin >> departures;

    population += births - deaths + arrivals - departures;

    cout << "The current population of the region is " << population;
    cout << "The change in population from January 1 to present day is " << (population - arrivals + departures - deaths - births);

    return 0;
}
