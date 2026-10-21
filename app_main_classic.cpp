extern "C" void app_main(void) {
    DRV8871 motorEsquerdo; // Objeto instanciado na Stack (Pilha) da main_task
    DRV8871 motorDireito;
    
    while (true) {
        motorEsquerdo.setPotencia(0);
        motorDireito.setPotencia(0);
        vTaskDelay(pdMS_TO_TICKS(10)); // Cede 10ms de CPU para o FreeRTOS
    }
} // Nunca chega aqui

