/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5 (Foundation of Algorithm)
 *   Hari dan Tanggal    : Selasa, 12 Mei 2026
 *   Nama (NIM)          : Davina Alya Shakira (13224081)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program untuk menampilkan ketiga urutan pembacaan dari representasi pohon yang diberikan (silsilah keluarga bangsawan) dengan mencetek etak preorder, inorder, dan postorder dari tree lengkap
**/

#include <stdio.h>

void preorder(int arr[], int N, int i){
    if(i >= N){
        return;
    } 

    printf(" %d", arr[i]);
    preorder(arr,N,2*i+1);
    preorder(arr,N,2*i+2);
}

void inorder(int arr[], int N, int i){
    if(i >= N){
        return;
    }

    inorder(arr,N,2*i+1);
    printf(" %d",arr[i]);
    inorder(arr,N,2*i+2);
}

void postorder(int arr[], int N, int i){
    if (i >= N){
        return;
    }

    postorder(arr,N,2*i+1);
    postorder(arr,N,2*i+2);
    printf(" %d",arr[i]);
}

int main() {
    int N;
    scanf("%d", &N);

    int i;
    int arr[100];

    for(i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    printf("PRE"); 
    preorder(arr,0, N);
    printf("\n");

    printf("IN");
    inorder(arr,0, N);
    printf("\n");

    printf("POST");
    postorder(arr,0, N);
    printf("\n");

    return 0;
 }
