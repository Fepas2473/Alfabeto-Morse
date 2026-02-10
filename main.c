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
    morse(PONTO,PONTO,PONTO,PONTO);
    printf("A\n"); 
}
    void B(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,PONTO,PONTO);
    printf("B\n"); 
}
    void C(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,PONTO,PONTO);
    printf("C\n"); 
}

    void D(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,PONTO,PONTO,PONTO);
    printf("D\n"); 
}

    void E(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(LINHA,LINHA,NADA,NADA);
    printf("E\n"); 
}

    void P(){
   vTaskDelay(250 / portTICK_PERIOD_MS);
    morse(PONTO,LINHA,LINHA,PONTO);
    printf("P\n"); 
}

void app_main() {

  while (true) {
  M();

   vTaskDelay(250 / portTICK_PERIOD_MS);
    printf(" \n"); 
  }
}