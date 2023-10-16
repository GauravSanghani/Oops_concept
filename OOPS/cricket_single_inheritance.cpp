#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;

public:
    Cricketer(const std::string& n, int a) : name(n), age(a) {}

    void display_data() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int total_runs;
    double average_runs;
    std::string best_performance;

public:
    Batsman(const std::string& n, int a) : Cricketer(n, a) {
        total_runs = 0;
        average_runs = 0.0;
    }

    void input_data() {
        std::cout << "Enter total runs: ";
        std::cin >> total_runs;
        std::cin.ignore();
        std::cout << "Enter best performance: ";
        std::getline(std::cin, best_performance);
    }

    void calculate_average_runs(int matches_played) {
        if (matches_played == 0) {
            std::cout << "Matches played should be greater than 0 to calculate average runs." << std::endl;
        } else {
            average_runs = static_cast<double>(total_runs) / matches_played;
        }
    }

    void display_data() {
        Cricketer::display_data();
        std::cout << "Total Runs: " << total_runs << std::endl;
        std::cout << "Average Runs: " << average_runs << std::endl;
        std::cout << "Best Performance: " << best_performance << std::endl;
    }
};

int main() {
    std::string name;
    int age, matches_played;

    std::cout << "Enter the name of the batsman: ";
    std::getline(std::cin, name);
    std::cout << "Enter the age of the batsman: ";
    std::cin >> age;

    Batsman batsman(name, age);

    batsman.input_data();

    std::cout << "Enter matches played: ";
    std::cin >> matches_played;

    batsman.calculate_average_runs(matches_played);
    batsman.display_data();

    return 0;
}