#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <iostream>
#include "Master.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
if(size > 1) {
std::cout << "Testing input " << data;
	std::unique_ptr<Command::HandlerBase> CommandAndControl;
	auto CurrentJSONStatus = nlohmann::json::parse(data);
	auto mfp = std::filesystem::path("SomeFile");
	CommandAndControl->sendHasStoppedMessage(mfp, CurrentJSONStatus);
	std::cout << " and it was ok" << std::endl;

}
  return 0;
}
