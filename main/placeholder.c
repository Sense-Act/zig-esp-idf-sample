// empty file
#include "esp_log.h"

extern void log_hello();

void app_main() {
  ESP_LOGI("lib_name", "Message for print");
  log_hello();
}
