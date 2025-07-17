#include<stdio.h>

void countCall(){
    static int counter = 0;                            //1. ประกาศด่าเเค่ครั้งเเรก เเละคงค่าต่อ
    counter++;                                         //2. Increment the counter each time the funion is called
    printf("Call Function: Counter = %d\n", counter);  //3. Print the number fo times the funtion has been called
}

int main(){
    printf("Staring function call...\n");             //4. printf Identifier
    countCall();                                      //5. นับครั้งที่ 1
    printf("After first call :\n");                   //6. printf Identifler
    countCall();                                      //7. นับครั้งที่ 2
    return 0;
}

//การใช้ static ในการนับ ครั้งเเรกจะนับ 1 เเละครั้งสองจะได้ 2 เพราะการนับจะไม่เริ่มใหม่
//เสมอ เเต่จะไม่คงค่าไว้
