//dado una hora en formato de HH:MM (24 horas), va a determinar el grado mas pequeño entre el minutero y el horario.
#include <math.h> 
#include <stdio.h>
int main(void) {
  int Hora=0, Minutos=0;
  do{
    printf("Ingrese una hora (HH:MM)");
    scanf("%d:%d", &Hora, &Minutos);
  }
  while (Hora<0 || Hora>23 || Minutos <= -0.0001 || Minutos>59);
  double MinutosAGrados=Minutos*6;
  double HoraAGrados=0.5*(Hora*60+Minutos);
  double Grados=(MinutosAGrados-HoraAGrados);
  if (Grados<0){
    Grados=Grados*-1;
  }
  if (Grados>180){
    Grados=360-Grados;
  }
  printf("El angulo entre las manecillas es de %.0lfº", round(Grados));
  return 0;
}