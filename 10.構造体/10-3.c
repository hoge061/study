struct POINT
{
    int x;
    int y;
    /* data */
};

struct POINT kansu1(struct POINT p){
    p.x = p.x * 2;
    p.x = p.y * 2;
    return p;
}

void main(void){
    struct POINT p;
    p.x = 2;
    p.y = 3;

    printf("x=%d,y=%d",p.x,p.y);
}