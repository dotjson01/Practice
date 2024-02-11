#include <stdio.h>

void calculate_population(double initial_population, double growth_rate, int years) {
    double population = initial_population;
    for (int year = 1; year <= years; year++) {
        population /= (1 + growth_rate / 100);
        printf("Year %d: %.0f\n", years - year + 1, population);
    }
}

int main() {
    // Initial population of Pune
    double initial_population = 100000;

    // Growth rate
    double growth_rate = 10;

    // Number of years
    int years = 10;

    calculate_population(initial_population, growth_rate, years);

    return 0;
}
