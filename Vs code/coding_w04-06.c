#include<stdio.h>
const int GOBAL_RATE = 20;     //1. ประกาศนอกฟังก์ชัน ตัวแปรคงที่ที่สามารถเข้าถึงได้จากทุกที่ในโปรแกรม
void calcuate(){
    const int LOCAL_BONUS= 80;   //2. Local ประกาศภายในฟังก์ชัน ตัวแปรคงที่ที่สามารถเข้าถึงได้เฉพาะภายในฟังก์ชันนี้
    printf("Giobal rate: %d\n" , GOBAL_RATE);  //2.1 Accessing global constant
    printf("Local bonus: %d\n" , LOCAL_BONUS); //2.2 Accessing local constant

}
int main(){
    calcuate();         //3. Call the function to see the output
    printf("Global rate: %d\n" , GOBAL_RATE); //3.1 Accessing global constant in main
    return 0;    // Return statement to indicate successful exeution
}

//Global constant variable ที่ประกาศนอกฟังก์ชัน สามารถเข้าถึงได้จากทุกที่ในโปรแกรม
//Local constant variable ที่ประกาศในฟังก์ชัน สามารถเข้าถึงได้เฉพาะภายในฟังก์ชันนั้น
//การใช้ const ช่วยให้ค่าคงที่ไม่สามารถเปลี่ยนแปลงได้
//เมื่อ run โปรแกรมจะแสดงผลค่าคงที่ทั้งสองตัวแปร
//Global rate: 10 เเละ Local bonus : 50
//Global rate : 10 โดยที่ Local bonus จะไม่สามารถเข้าถึงได้จาก main เพราะตัวแปรในฟังก์ชัน
// เเต่ GOBAL สามารถเข้าถึงได้จาก main เพราะมันตัวแปรคงที่ที่ประกาศนอกฟังก์ชัน

//จากโจทย์ GOBAL_RATE เป็น 20 เเละ Local_Bonus เป็น 20
//โปรแกรมจะแสดงผลเป็น Global rate: 20 เเละ Local bonus:80
