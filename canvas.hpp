#ifndef CANVAS_HPP
#define CANVAS_HPP

class Canvas {

  private:
    const static int MAX_X_VAL = 1280;
    const static int MAX_Y_VAL = 720;
    const static int DEFAULT_X_VAL = 80;
    const static int DEFAULT_Y_VAL = 50;
    char GRID[MAX_X_VAL][MAX_Y_VAL];
    int theXSize = 0;
    int theYSize = 0;
    //char theChar;
    char fillChar = ' ';
    
  public:
    Canvas();
    Canvas(const static int DEFAULT_X_VAL, const static int DEFAULT_Y_VAL);
    Canvas(int xSize, int ySize, char fillChar);
    void clearCanvas();
    void show();

    char getFillChar();
    void setFillChar(char theChar);
    Canvas& getCanvas();
    void setXValue(int xSize);
    int getXValue();
    void setYValue(int ySize);
    int getYValue();
    void setGRID(int xSize, int ySize);
    int getMaxX();
    char* getGrid() { return &GRID[0][0]; }

};

#endif