#include <iostream>
#include "tile.h"
#include <time.h>

using namespace std;

Tile::Tile(int x_pos, int y_pos) {
    x = x_pos;
    y = y_pos;

    if (x == 0 and y == 0) {
        const char* startingTile = ChooseStartingTile();

        Biome.symbol = startingTile[0];
        if (Biome.symbol == 'A') {
            Biome.value = 3;
        }
        else {
            Biome.value = 1;
        }

        Landscape.symbol = startingTile[1];
        Landscape.value = 3;

        Material.symbol = startingTile[2];
        if (Material.symbol == 'T') {
            Material.value = 3;
        }
        else if (Material.symbol == 'V') {
            Material.value = 2;
        } 
        else {
            Material.value = 1;
        }
    }

    else {
        Tile();
    }
}

const char* Tile::ChooseStartingTile() {
    const char* arr[6] = {"ART", "ARV", "ARM", "GRT", "GRV", "GRM"};
    const char * choice  = arr[rand()%6];
    delete[] arr;
    return choice;

}