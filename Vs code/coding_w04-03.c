#include<stdio.h>

    int main(){
    char nameInitial = 'E';  //1. ใช้ char ในการเก็บตัวอักษรตัวเเรกของชื่อ
    int age = 19;            //2. ใช้ int ในการเก็บอายุที่เป็นจำนวนเต็ม
    float waight = 73.68;    //3. ใช้ float ในการเป็นเก็บน้ำหนัก ที่เป็นทศนิยม
    char gender[] = "Mele";  //4. ใช char ใยการเพศเพราะตัวเเปร pointer

    printf("nameInitial: %c\n", nameInitial ); //5. print the initial of the name
    printf("Age: %d\n" ,age );                 //6. print the age
    printf("weight: %.1f kg\n", waight );      //7. pritnt the weight with one decimal place
    printf("Gender: %s\n", gender);            //8. print Malt
    
    return 0 ;
}
