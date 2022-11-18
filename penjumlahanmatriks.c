#include <stdio.h>

int main()
{
    int mtrk1[3][3];
    int mtrk2[3][3];
    int hasil[3][3];
    int b,k;

    printf("Matriks 1\n");
        for (int b=0; b<3; b++){
            for (int k=0; k<3; k++){
                printf("Matriks 1[%d][%d]: ", b,k);
                scanf("%d", &mtrk1[b][k]);
            }
        }

    printf("Matriks 2\n");
        for (int b=0; b<3; b++){
            for (int k=0; k<3; k++){
                printf("Matriks 2[%d][%d]: ", b,k);
                scanf("%d", &mtrk2[b][k]);
            } 
        } 

    printf("Matriks 1'\n");
    for (int b=0; b<3; b++){
        for (int k=0; k<3; k++){
            printf("\t %d", mtrk1[b][k]);
        }
            printf("\n\n");
    } 

    printf("Matriks 2\n");
    for (int b=0; b<3; b++){
        for (int k=0; k<3; k++){
            printf("\t %d", mtrk2[b][k]);
        }
            printf("\n\n");
    } for (int b=0; b<3; b++){
        for (int k=0; k<3; k++){
            hasil[b][k] = mtrk1[b][k] + mtrk2[b][k];
        }
    }

    printf("Matriks 1 + Matriks 2:\n");
    for (int b=0; b<3; b++){
        for (int k=0; k<3; k++){
            printf("\t %d", hasil[b][k]);
        }
            printf("\n\n");
    }
    return 0;
}