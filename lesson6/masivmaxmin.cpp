#include <iostream>
#include <cstdlib>
void masiv_maxmin(int *parr,int n) {
    int max= parr[0],min = parr[0];
    for (int i=1; i<n; i++) {
        if(parr[i] > max) {
            max = parr[i];
        } if(parr[i] < min) {
            min = parr[i];
        }
    }
    std::cout <<"This masiv maximal element = "<< max <<'\n';;
    std::cout <<'\n'<<"This masiv minimal element = "<< min <<'\n';;
}

void masiv_pairodd(int *parr,int n) {
    int sum_pair = 0, sum_odd = 0;
    for (int i=0; i<n; i++) {
        if(parr[i]  % 2 == 0) {
            sum_pair += parr[i];
        } else {
            sum_odd += parr[i];
        }
    }
    std::cout <<"This masiv pair element sum = "<< sum_pair <<'\n';
    std::cout <<'\n'<<"This masiv odd element sum = "<<sum_odd <<'\n';
}

int main() {
    int n;
    std::cout <<"Input hight :: ";
    std::cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        arr[i]= 1+ rand()%20;
        std::cout <<"arr [ "<< i <<" ] = "<< arr[i] <<'\n';
    }
    masiv_maxmin(arr,n);
    std::cout <<'\n';
    masiv_pairodd(arr,n);
    return 0;
}
