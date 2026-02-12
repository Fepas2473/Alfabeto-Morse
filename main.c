
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define PONTO 200
#define LINHA 800
#define NADA 0
#define LED 2
#define LIGADO 1
#define DESLIGADO 0

void simbolo (int tempo){
  gpio_set_direction(LED,GPIO_MODE_OUTPUT);
  gpio_set_level(LED, LIGADO);
  vTaskDelay(tempo / portTICK_PERIOD_MS);
  gpio_set_level(LED, DESLIGADO);
  vTaskDelay(200 / portTICK_PERIOD_MS);
}


void morse (int _1, int _2, int _3, int _4){
  simbolo(_1);
  simbolo(_2);
  simbolo(_3);
  simbolo(_4);
}

void pisca(int tempo, int vezes, int Pino){
  gpio_set_direction(LED,GPIO_MODE_OUTPUT);
  for (int i = 0; i < vezes; i++){
  gpio_set_level(LED, LIGADO);
    vTaskDelay(tempo / portTICK_PERIOD_MS);
    gpio_set_level(LED, DESLIGADO);
    vTaskDelay(250 / portTICK_PERIOD_MS);
      }
        }

    void A(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,NADA,NADA);
    printf("A\n"); 
}
    void B(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,PONTO,PONTO);
    printf("B\n"); 
}
    void C(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,LINHA,PONTO);
    printf("C\n"); 
}

    void D(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,PONTO,NADA);
    printf("D\n"); 
}

    void E(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,NADA,NADA,NADA);
    printf("E\n"); 
}

    void F(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,LINHA,PONTO);
    printf("F\n"); 
}

    void G(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,LINHA,PONTO,NADA);
    printf("G\n"); 
}

    void H(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,PONTO,PONTO);
    printf("H\n"); 
}

    void I(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,NADA,NADA);
    printf("I\n"); 
}

    void J(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,LINHA,LINHA);
    printf("J\n"); 
}

    void K(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,LINHA,NADA);
    printf("K\n"); 
}

    void L(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,PONTO,PONTO);
    printf("L\n"); 
}

    void M(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,LINHA,NADA,NADA);
    printf("M\n"); 
}

    void N(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,NADA,NADA);
    printf("N\n"); 
}

    void O(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,LINHA,LINHA,NADA);
    printf("O\n"); 
}

    void P(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,LINHA,PONTO);
    printf("P\n"); 
}

    void Q(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,LINHA,PONTO,LINHA);
    printf("Q\n"); 
}

    void R(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,PONTO,NADA);
    printf("R\n"); 
}

    void S(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,PONTO,NADA);
    printf("S\n"); 
}

    void T(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,NADA,NADA,NADA);
    printf("T\n"); 
}

    void U(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,LINHA,NADA);
    printf("U\n"); 
}

    void V(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,PONTO,LINHA);
    printf("V\n"); 
}

    void W(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,LINHA,NADA);
    printf("W\n"); 
}

    void X(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,PONTO,LINHA);
    printf("X\n"); 
}

    void Y(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,PONTO,LINHA,LINHA);
    printf("Y\n"); 
}

    void Z(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,LINHA,PONTO,PONTO);
    printf("Z\n"); 
}
void app_main() {

  while (true) {
  M();

   vTaskDelay(250 / portTICK_PERIOD_MS);
    printf(" \n"); 
  }
}
