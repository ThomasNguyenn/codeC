#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Bai tap 1
void bai1(){
    float x,y;
    printf("Nhap gia tri cua x: ");
    scanf("%f",&x);
    printf("Nhap gia tri cua y:");
    scanf("%f",&y);
    printf("(%.2f:%.2f)",x,y);
}


// Bai tap 2
void bai2(){
    int a,b,c,Kq1,Kq2;
    printf("Nhap gia tri a: ");
    scanf("%d",&a);
    printf("Nhap gia tri b: ");
    scanf("%d",&b);
    printf("Nhap gia tri c: ");
    scanf("%d",&c);
    Kq1 = a++ + ++a;
    Kq2 = --a - b-- * ++c;
    printf(" Ket qua: %d va %d",Kq1,Kq2);
}


// Bai tap 3
void bai3(){
    float d,e,f,MAX;
    printf("Nhap gia tri cua d: ");
    scanf("%f",&d);
    printf("Nhap gia tri e: ");
    scanf("%f",&e);
    printf("Nhap gia tri f: ");
    scanf("%f", &f);
    MAX = (d > e) ? d : e;
    MAX = (f > d) ? f : MAX;
    printf("%.2f",MAX);
}


// Bai tap 4
void bai4(){
    int dien = 0;
    int tien = 0;
    printf("Nhap co dien tieu thu: ");
    scanf("%d", &dien);
    tien = (dien >= 51) ? 1000 : 500;
    tien = (dien >= 101) ? 1200 : tien;
    tien = (dien >= 151) ? 1600 : tien;
    printf("So dien tieu thu trong thang la: %d\n",dien);
    printf("So tien phai tra la            : %d", tien);
}


// Bai tap 5
void bai5(){
    float a,b,c;
    double delta;
    printf("Nhap gia tri a: ");
    scanf("%f", &a);
    printf("Nhap gia tri b: ");
    scanf("%f", &b);
    printf("Nhap gia tri c: ");
    scanf("%f",&c);
    delta = b * b - 4*a*c;
    printf("Gia tri cua delta la: %.2f", delta);

}


// Bai tap 6
void bai6(){
    float a,b,c;
    double delta;
    float x1,x2;
    printf("Nhap gia tri a: ");
    scanf("%f", &a);
    printf("Nhap gia tri b: ");
    scanf("%f", &b);
    printf("Nhap gia tri c: ");
    scanf("%f",&c);
    delta = b * b - 4*a*c;
    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;
    printf("Nghiem cua phuong trinh la: %.2f va %.2f", x1,x2);
}


// Bai tap 7
void bai7(){
    float x,y,z;
    double result;
    printf("Nhap gia tri cua x: ");
    scanf("%f",&x);
    printf("Nhap gia tri cua y: ");
    scanf("%f", &y);
    printf("Nhap gia tri cua z: ");
    scanf("%f",&z);
    result =  ((x + y + sqrt(z))/(x*x - y*y + 1)) - (fabs(sin(x) - z * cos(y))) ;
    printf("Ket qua cua phep tinh la: %f",result);
}









int main(){
    bai7();
}