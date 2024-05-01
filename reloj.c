// dado una hora en formato de HH:MM (24 horas), va a determinar el grado mas
// pequeño entre el minutero y el horario.
#include <math.h>
#include <stdio.h>
int main(void) {
  int hora = 0, minutos = 0;
  float GradosQueRecorreElMinuteroCadaMinuto = 6,
        GradosQueRecorreElHorarioCadaMinuto = 0.5;
  do {
    printf("Ingrese una hora (HH:MM)\n");
    scanf("%d:%d", &hora, &minutos);
  } while (hora < 0 || hora > 23 || minutos < 0 || minutos > 59);
  if (hora > 12) {
    hora = hora - 12;
  }
  double minutosAGrados = minutos * GradosQueRecorreElMinuteroCadaMinuto;
  double horaAGrados =
      GradosQueRecorreElHorarioCadaMinuto * minutos + hora * 30;
  double grados = (minutosAGrados - horaAGrados);
  if (grados < 0) {
    grados = grados * -1;
  }
  if (grados > 180) {
    grados = 360 - grados;
  }
  printf("El angulo entre las manecillas es de: %.2lfº", grados);
  return 0;
}