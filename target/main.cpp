#include "AppContext.h"
#include "BeaconFSM.h"

extern "C" void app_main(void) {
  static AppContext ctx;
  BeaconFSM fsm(&ctx);
  fsm.run();
}