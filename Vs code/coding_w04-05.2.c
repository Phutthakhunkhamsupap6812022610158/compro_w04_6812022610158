#include<stdio.h>

void countCall(){
    int counter = 0;                                   //1. การนับจะเริ่มนับ 0 ใหม่เสมอ โดยไม่คงค่าไว้ เหมือนการใช้ static
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

//การไม่ใช้ static นำหน้า int  การนับครั้งเเรกเเละครั้งที่สองจะได้ 1 เสอมเพราะ การนับในเเต่ละครั้งจะเริ่ม
//นับจาก 0 ใหม่เสอม
