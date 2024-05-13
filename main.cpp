#include "grid.h"

using namespace std;

int main()
{
    cout << "Conway's game of life\n";
    cout << "Press the return key to display each generation\n";

    // Wait for user to press the return key
    cin.get();

    // Grid for the first generation
    grid current_generation;

    // Populate the cells at random
    current_generation.randomize();

    while(true)
    {
        // Draw the current generation
        current_generation.draw();
        
        // Wait for the user to press the return key
        cin.get();

        // Grid for newt generation
        grid next_generation;

        // Populate the cells in the next generation
        calculate(current_generation, next_generation);

        // Update to the next generation
        current_generation.update(next_generation);
    } 
}