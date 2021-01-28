#include <stdio.h>

// 引数として型を指定する際に、配列ならば変数名に[]を加えて指定する。
void print_array(int array[], int size);
void higher_scores(int array[], int size, int results[]);

void print_array(int array[], int size){
     printf("scores = ");
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void higher_scores(int array[], int size, int results[]){
    int tmp;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] =  array[j];
                array[j] =  tmp;
            }
        }
    }
    for(int k=0; k<size; k++){
        results[k] = array[k];
    }

     printf("results = ");
    for(int i=0; i<size; i++){
        printf("%d ", results[i]);
    }
}

int main(){
    //実行例１
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};

    //実行例２
    //  const int SIZE = 6; //定数として配列のサイズを宣言                          
    // int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    
    int Results[SIZE];

    //処理コード

    print_array(scores, SIZE);
    higher_scores(scores, SIZE, Results);

    return 0;
}