DRV8871 motorDireito; // memória global (DRAM)

extern "C" void app_main(void) {
    static DRV8871 motorEsquerdo; // Objeto estático é alocado na memória global

    // Cria uma tarefa dedicada para o controle dos motores e encerra o app_main
    xTaskCreate(taskControleMotores, "Motores", 4096, NULL, 5, NULL);
    
} // vTaskDelete(NULL);

extern "C" void app_main(void) {
    // O extern "C" permite o compilador usar tudo do C++, mas com todos os 
    // cuidados da compilação ser no padrão C, evitando name mangling e 
    // garantindo compatibilidade com o FreeRTOS.
}

