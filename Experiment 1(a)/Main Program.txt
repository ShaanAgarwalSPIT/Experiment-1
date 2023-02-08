#include<stdio.h>
#include<math.h>
int main()
{
    for(int i = 0; i <= 100; i++) {
        float value1 = log(i);
        printf("%f ", value1);
        
        float value2 = pow(log2(i), 2);
        printf("%f ", value2);
        
        float value3 = pow(log2(i), 0.5);
        printf("%f ", value3);
        
        float value4 = log2(i);
        printf("%f ", value4);
        
        int value5 = i;
        printf("%d ", value5);
        
        int value6 = pow(i, 3);
        printf("%d ", value6);
        
        float value7 = log(log(i));
        printf("%f ", value7);
        
        float value8 = i*log2(i);
        printf("%f ", value8);
        
        float value9 = log2(log2(i));
        printf("%f ", value9);
        
        float value10 = pow(2, log2(i));
        printf("%f\n", value10);
    }
    return 0;
}