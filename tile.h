#ifndef tile
#define tile

struct Property {
    char symbol;
    int value;

};

class Tile {
    private: 
    int x;
    int y;
    int neighbours;
    Property Biome;
    Property Landscape;
    Property Material;
    int value;

    const char* ChooseStartingTile();

    protected:

    public:
    Tile(); //Random Tile
    Tile(int x_pos, int y_pos); //Tile generation based on pos, if (0,0) then starting pos
    ~Tile();

    void printTile();

};




#endif