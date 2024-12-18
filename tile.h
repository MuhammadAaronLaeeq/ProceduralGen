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
    Property Biome;
    Property Landscape;
    Property Material;

    protected:
    int numberOfTiles;

    public:
    Tile(int x);
    Tile(const Tile &other);
    ~Tile();

};




#endif