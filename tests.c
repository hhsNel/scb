#define SU_TARGET_PLATFORM SU_PLATFORM_GENERIC_LINUX
//#define SU_TARGET_PLATFORM SU_PLATFORM_WINDOWS
#include "scb.h"
#include <stdlib.h>
#include <string.h>

#define STDIO <stdio.h>
#include STDIO

int main(int argc, char** argv) {
	sut_int8 i8 = 8;
	sut_pint8 pi8 = &i8;
	sut_int16 i16 = 16;
	sut_pint16 pi16 = &i16;
	sut_int32 i32 = 32;
	sut_pint32 pi32 = &i32;
	sut_int64 i64 = 64;
	sut_pint64 pi64 = &i64;

	sut_uint8 ui8 = 8;
	sut_puint8 pui8 = &ui8;
	sut_uint16 ui16 = 16;
	sut_puint16 pui16 = &ui16;
	sut_uint32 ui32 = 32;
	sut_puint32 pui32 = &ui32;
	sut_uint64 ui64 = 64;
	sut_puint64 pui64 = &ui64;

	sut_byte byte = 0xff;
	sut_word word = 0xffff;
	sut_dword dword = 0xffffffff;
	sut_qword qword = 0xffffffffffffffff;

	sut_bool b0 = sfalse;
	sut_bool b1 = strue;

	sut_size length = 1;
	sut_voidptr ptr = NULL;
	sut_unsafeptr unsafe = ptr + length;
	sut_safeptr safe = unsafe - length;

	float f = s_sqrt(4);
	
	// memory test
	svoidptr allocated_chunk = sos_vmem_alloc(NULL, 4*1024, SOS_MEM_PROT_READ | SOS_MEM_PROT_WRITE);
	printf("Allocated chunk: %p\n", allocated_chunk);

	strcpy((char *)allocated_chunk, "Hello Vmem Alloc!\n");
	printf("Message: %s", (char *)allocated_chunk);

	sos_vmem_free(allocated_chunk, 4*1024);
	
	SCONCAT(print,f)("Hello World!\n");
#define PRINT print
	SCONCATX(PRINT,f)("Hello World 2!\n");
	SCONCAT3(pr,in,tf)("Hello World 3!\n");
#define PR pr
#define TF tf
	SCONCAT3X(PR,in,TF)("Hello World 4!\n");
	SCONCAT5(pr,i,n,t,f)("Hello World 5!\n");
#define N n
#define F f
	SCONCAT5X(PR,i,N,t,F)("Hello World 6!\n");
	printf(SSTRING(Hello) SSTRING( World) "7!\n");
#define HELLO Hello
	printf(SSTRINGX(HELLO) " World 8 !\n");

	sos_system_conf conf;
	sos_read_system_conf(&conf);
	printf("min: %p, max: %p, page: %d, gran: %d\n", conf.min_vmem_address, conf.max_vmem_address, (int)conf.page_size, (int)conf.vmem_alloc_address_granuality);
}
