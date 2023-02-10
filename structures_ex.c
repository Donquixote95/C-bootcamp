#include <stdio.h>

typedef 

struct pointType {
    float x;
    float y;
    } 
    Point;  
    
    // typedef를 합쳐서 쓸 수 있다. struct pointType을 Point로 부르겠다는 뜻.

typedef struct Rectangle{
    Point a;
    Point b;
} Rectangle;

float width(Rectangle rect){
    return rect.b.x - rect.a.x;
}

float height(Rectangle rect){
    return rect.a.y - rect.b.y;
}

float area(Rectangle rect){
    return width(rect) * height(rect);
}

void midpoint(Rectangle rect){
    float midX = rect.a.x + width(rect)/2;
    float midY = rect.b.y + height(rect)/2;
    printf("Midpoint is at (%f, %f)\n", midX, midY);
}

int main(void){
    Point a = {1,5};
    Point b = {6,1};
    Rectangle rect = {a, b};

    printf("width is %f\n", width(rect));
    printf("height is %f\n", height(rect));
    printf("area is %f\n", area(rect));
    
    midpoint(rect);

    return 0;
}