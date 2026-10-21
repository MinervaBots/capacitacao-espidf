void setup();
void loop();

// O que o arduino abstrai:
void loopTask(void *pvParameters) {
    setup(); // Chama o seu setup uma vez

    for(;;) {
        loop(); // Chama o seu loop infinitamente
    }
}

extern "C" void app_main() {
    // Cria uma tarefa no FreeRTOS presa no Núcleo 1 (APP_CPU)
    xTaskCreateUniversal(loopTask, "loopTask", 8192, NULL, 1, &loopTaskHandle, 1);
}