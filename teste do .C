#include<stdio.h>
int main(){
int hora, min, seg;
float aux = 5.5;

printf("digite hora, minuto e segundo:");

scanf("%d %d %d", &hora, &min, &seg);

if(hora>1 && min>15){
float le = ((hora*3600)+(min*60)+seg);
printf("quantidade de segundos %\n", le);
}
else{
float  gal =((hora*60)+min+(seg/60);
printf("quantidade de minutos %.5f\n", gal);
}

printf("horario: %02d:%02d:&02d\n", hora, min, seg);
printf("float com duas casas: %.2f", aux);
return 0;
}
