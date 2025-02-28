#include <stdio.h>
float convertLength(float value,int fu,int su){
    float meterstofeet = 3.28084;
    float kilometerstomiles = 0.621371;
    if (fu==1&&su==2)
        return value*meterstofeet;
    else if(fu==2&&su==1)
        return value/meterstofeet;
    else if(fu==3&&su==4)
        return value*kilometerstomiles;
    else if(fu==4&& su==3)
        return value/kilometerstomiles;
    else 
        return printf("enter other conversions");
}
int main() {
    float value, result;
    int fu, su;
    printf("Enter value :\n");
    scanf("%f",&value);
    printf("Choose units:\n");
    printf("1: Meters\n2: Feet\n3: Kilometers\n4: Miles\n");
    scanf("%d %d",&fu,&su);
    result = convertLength(value, fu, su);
    printf("Output: %.2f\n", result);
    return 0;
}
