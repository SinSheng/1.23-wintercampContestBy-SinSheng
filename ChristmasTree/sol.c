#include<stdio.h>

void createLeaf(int h){
    for(int i = 0; i < h; i++){
        //space
        for(int space = 0; space < (h-i-1); space++){
            printf(" ");
        }
        //leaf
        for(int leaf = 0; leaf < (2*i+1); leaf++){
            printf("*");
        }
        
        printf("\n");

    }
}

void createTrunk(int h, int trunkHeight){
    for(int i = 0; i < trunkHeight; i++){
        //space
        for(int space = 0; space < (h-1); space++){
            printf(" ");
        }
        //trunk
        printf("*");
        
        printf("\n");
    }
}

int main(){
    int height;
    scanf("%d", &height);
    createLeaf(height);
    createTrunk(height ,2);

    return 0;
}
