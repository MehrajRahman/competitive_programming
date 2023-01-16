#include <stdio.h>
#include <math.h>

double distance( int x1 ,int y1, int x2, int y2){

    double dist = sqrt(pow((x2 - x1)*1.0, 2) + (pow((y2 - y1)*1.0 , 2)));

    return dist;


}

int main(){

    int x1, x2, x3, x4, y1, y2, y3,y4;
    double dist;

    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    dist =  distance(x1 , y1, x2, y2);
    printf("%lf", dist);




    return 0;
}
