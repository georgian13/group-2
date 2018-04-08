#include <iostream>
int ver_dzax(int **parr) {
    int sum = 0;
    int n=3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) < (n-1)) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Werevi Dzax koxmi gumary = "<< sum <<'\n';
}

int ver_aj(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(i<j) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Werevi Aj koxmi gumary = "<< sum <<'\n';
}

int nerqev_dzax(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(i>j) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Nerqev Dzax koxmi gumary = "<< sum <<'\n';
}

int nerqev_aj(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) > n-1) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Nerqev Aj koxmi gumary = "<< sum <<'\n';
}

int nerqev(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) >  n-1 && i>j) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Nerqevi koxmi gumary = "<< sum <<'\n';
}
int aj(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) < n-1&&i<j) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Aj koxmi gumary = "<< sum <<'\n';
}

int dzax(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) > n-1 && i<j) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Nerqev Aj koxmi gumary = "<< sum <<'\n';
}

int verev(int **parr) {
    int sum = 0;
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((i+j) < n-1 && j>i) {
                sum += parr[i][j];
            }
        }
    }
    std::cout <<"Verevi koxmi gumary = "<< sum <<'\n';
}



int main() {
    int arr[3][3];
    int n = 3;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            std::cout <<"arr [ "<< i <<" ][ "<< j <<" ] = ";
            std::cin >> arr[i][j];
        }
    }
    ver_dzax((int**)arr);
    ver_aj((int**)arr);
    nerqev_dzax((int**)arr);
    nerqev_aj((int**)arr);
    verev((int**)arr);
    nerqev((int**)arr);
    aj((int**)arr);
    dzax((int**)arr);
    return 0;
}
