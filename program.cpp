#include <iostream>
#include <string>

using namespace std;

// Base class
class Weather {
protected:
    string weatherData;

public:
    virtual void fetchWeatherData() = 0;
    virtual void displayForecast() = 0;
};

// Derived class
class WeatherForecast : public Weather {
public:
    void fetchWeatherData() override {
        // Dummy data for demonstration
        weatherData = "Sunny, 25°C";
        cout << "Weather data fetched successfully." << endl;
    }

    void displayForecast() override {
        if (weatherData.empty()) {
            cout << "Please fetch weather data first." << endl;
        } else {
            cout << "Weather Forecast: " << weatherData << endl;
        }
    }
};

int main() {
    WeatherForecast weatherApp;
    int choice;

    do {
        cout << "========= Weather Forecast App =========" << endl;
        cout << "1. Fetch Weather Data" << endl;
        cout << "2. Display Forecast" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                weatherApp.fetchWeatherData();
                break;
            case 2:
                weatherApp.displayForecast();
                break;
            case 3:
                cout << "Exiting Weather Forecast App. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 3);

    return 0;
}
