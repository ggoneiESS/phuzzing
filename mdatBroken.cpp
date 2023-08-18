#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <iostream>
#include "WriterModule/mdat/mdat_Writer.h"
#include "AccessMessageMetadata/mdat/mdat_Extractor.h"
//extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {

int main(){

//	WriterModule::mdat::mdat_Writer mymdat;
	auto mymdat = std::make_unique<WriterModule::mdat::mdat_Writer>();
	hdf5::file::File TestFile = hdf5::file::create("unused", hdf5::file::AccessFlags::Truncate);
	hdf5::node::Group myHDFGroup = TestFile.root();
	mymdat->init_hdf(myHDFGroup);	//	this should work :(

  return 0;

}
