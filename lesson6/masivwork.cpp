#include <iostream>
#include <cstdlib>
int main() {
    int n=5;
    int arr[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]=1+rand()%9;
            std::cout << arr[i][j] <<" ";
        }
        std::cout <<'\n';
    }
    int sum1 = 0, sum2 = 0,sum3 = 0,sum4 = 0,sum5 = 0,sum6 = 0,sum7 = 0,sum8 = 0,sum9 = 0,sum10 =0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) < (n-1)) {
                sum1 += arr[i][j];
            } if(i<j) {
                sum2 += arr[i][j];
            } if(i>j) {
                sum3 += arr[i][j];
            } if((i+j) > n-1) {
                sum4 += arr[i][j];
            } if((i+j) >  n-1 && i>j) {
                sum5 += arr[i][j];
            } if((i+j) > n-1&&i<j) {
                sum6 += arr[i][j];
            } if((i+j) < n-1 && j<i) {
                sum7 += arr[i][j];
            } if((i+j) < n-1 && j>i) {
                sum8 += arr[i][j];
            } if(i==j) {
                sum9 += arr[i][j];
            } if(i+j == n-1) {
                sum10 += arr[i][j];
            }
        }
    }
    std::cout <<"Werevi Dzax koxmi gumary = "<< sum1 <<'\n';
    std::cout <<"Werevi Aj koxmi gumary = "<< sum2 <<'\n';
    std::cout <<"Nerqev Dzax koxmi gumary = "<< sum3 <<'\n';
    std::cout <<"Nerqev Aj koxmi gumary = "<< sum4 <<'\n';
    std::cout <<"Nerqevi koxmi gumary = "<< sum5 <<'\n';
    std::cout <<"Aj koxmi gumary = "<< sum6 <<'\n';
    std::cout <<"Dzax koxmi gumary = "<< sum7 <<'\n';
    std::cout <<"Verevi koxmi gumary = "<< sum8 <<'\n'; 
    std::cout <<"Glxavor ankyunagci gumary = "<< sum9 <<'\n';
    std::cout <<"Erkrordakan ankyunasgci gumary = "<< sum10 <<'\n';
    return 0;
}
