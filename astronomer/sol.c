#include<stdio.h>

int main(){
    int N;
    int level[100];
    double illumination = 1;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &level[i]);
    }

    int max = level[0], min = level[0];

    for(int i = 1; i < N; i++){
        if(level[i] > max){
            max = level[i];
        }
        if(level[i] < min){
            min = level[i];
        }
    }

    int gap = max - min;
    for(int i = 0; i < gap; i++){
        illumination *= 2.5;
    }

    printf("%.2f", illumination);

    return 0;

    
}
