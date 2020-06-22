class Point {
private:
    int x;
    int y;
public:
    Point() { this->x = 0; this->y=0; }
    inline int getX() { return this->x; }
    inline int getY() { return this->y; }
    inline void setX(int x) { this->x = x; }
    inline void setY(int y) { this->y = y; }
};
