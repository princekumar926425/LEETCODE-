class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter,
                      int x1, int y1, int x2, int y2) {

        int xclose = 0;
        int yclose = 0;

        // x coordinate ka closest point
        if (xCenter < x1)
            xclose = x1;
        else if (xCenter > x2)
            xclose = x2;
        else
            xclose = xCenter;

        // ycoordinate ka closest point
        if (yCenter < y1)
            yclose = y1;
        else if (yCenter > y2)
            yclose = y2;
        else
            yclose = yCenter;

        // closest point aur circle center ke beech distance
        int dx = xclose - xCenter;
        int dy = yclose - yCenter;

        int distance = dx * dx + dy * dy;
        return distance <= radius * radius;
    }
};