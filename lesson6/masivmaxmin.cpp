#include <iostream>
int masiv_maxmin(int *parr) {
    int max= parr[0],min = parr[0];
    for (int i=1; i<5; i++) {
        if(parr[i] > max) {
            max = parr[i];
        } if(parr[i] < min) {
            min = parr[i];
        }
    }
    std::cout <<"This masiv maximal element = "<< max <<'\n';;
    std::cout <<'\n'<<"This masiv minimal element = "<< min <<'\n';;
}

int masiv_pairodd(int *parr) {
    int sum_pair = 0, sum_odd = 0;
    for (int i=0; i<5; i++) {
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
    int arr[5];
    for (int i=0; i<5; i++) {
        std::cout <<"arr [ "<< i <<" ] = ";
        std::cin >> arr[i];
    }
    masiv_maxmin(arr);
    std::cout <<'\n';
    masiv_pairodd(arr);
    return 0;
}
