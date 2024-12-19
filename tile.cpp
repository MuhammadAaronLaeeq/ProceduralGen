#include <iostream>
#include "tile.h"
#include <time.h>

using namespace std;

Tile::Tile(int x_pos, int y_pos) {
    x = x_pos;
    y = y_pos;
    value = 0;

    if (x == 0 and y == 0) {
        neighbours = 0;
        const char* startingTile = ChooseStartingTile();

        Biome.symbol = startingTile[0];
        if (Biome.symbol == 'A') {
            Biome.value = 3;
            value += 3;
        }
        else {
            Biome.value = 1;
            value += 1;
        }

        Landscape.symbol = startingTile[1];
        Landscape.value = 3;
        value += 3;

        Material.symbol = startingTile[2];
        switch (Material.symbol) {
            case 'T':
                Material.value = 3;
                value += 3;
                break;
            case 'V':
                Material.value = 2;
                value += 2;
                break;
            case 'M':
                Material.value = 1;
                value += 1;
                break;
        }
    }

    else if ( (x == 0 and y != 0) or (x != 0 and y == 0) ){
        neighbours = 1;
        Tile();
    }
    else {
        neighbours = 2;
        Tile();
    }
}

const char* Tile::ChooseStartingTile() {
    const char* arr[6] = {"ART", "ARV", "ARM", "GRT", "GRV", "GRM"};
    const char * choice  = arr[rand()%6];
    delete[] arr;
    return choice;

}

void Tile::printTile() {
    printf("%c%c%c, value = ", Biome.symbol, Landscape.symbol, Material.symbol, value);


}