#include <stdio.h>
 

typedef enum{

Empty,
N,
NA,
NAN,
NANO

} State;


int isNano(const char* str){
    State st = Empty;
    int i = 0;
    while (str[i]){
        switch (st){
            case Empty:
                if(str[i] == 'n'){
                    st = N;
                } else {
                    // st = Empty;
                }
                break;
            case N:
                if (str[i] == 'a'){
                    st = NA;
                } else if (str[i] == 'n'){
                    // st = N;
                } else {
                    st = Empty;
                }
                break;
            case NA:
                if (str[i] == 'n'){
                    st = NAN;
                } else {
                    st = Empty;
                }
                break;
            case NAN:
                if (str[i] == 'o'){
                    st = NANO;
                    return 1; // nano is found
                } else if (str[i] == 'n') {
                    st = N;
                } else if (str[i] == 'a') {
                    st = NA;
                } else {
                    st = Empty;
                }
                break;
            case NANO:
                break;
        }
        i++;
    }
    return 0;
}


int countNano(const char* str){
    State st = Empty;
    int i = 0,count=0;
    while (str[i]){
        switch (st){
            case Empty:
                if(str[i] == 'n'){
                    st = N;
                } else {
                    // st = Empty;
                }
                break;
            case N:
                if (str[i] == 'a'){
                    st = NA;
                } else if (str[i] == 'n'){
                    // st = N;
                } else {
                    st = Empty;
                }
                break;
            case NA:
                if (str[i] == 'n'){
                    st = NAN;
                } else {
                    st = Empty;
                }
                break;
            case NAN:
                if (str[i] == 'o'){
                    st = NANO;
                     count++;// nano is found
                    st = Empty; 
                } else if (str[i] == 'n') {
                    st = N;
                } else if (str[i] == 'a') {
                    st = NA;
                } else {
                    st = Empty;
                }
                break;
            case NANO: 
               
                break;
        }
        i++;
    }
    return count;
}

int main()
 {
  printf("If the there is nano it should return 1 : %d\n",isNano("nano"));
    printf("return count of nano : %d\n",countNano("nanonanonananano"));

    return 0;
 }