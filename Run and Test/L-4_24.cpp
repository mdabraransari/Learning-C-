struct Point
{
    int x,y;
};
Point make_transpose(Point p){
    int tmp = p.x;
    p.x = p.y;
    p.y = tmp;
    return p;
}
