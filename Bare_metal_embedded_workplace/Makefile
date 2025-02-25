CC=arm-none-eabi-gcc
MARCH=cortex-m4
CFLAGS=-c -mcpu=$(MARCH) -mthumb -mfloat-abi=soft -std=gnu11 -Wall -O0
LDFLAGS=-mcpu=$(MARCH) -mthumb -mfloat-abi=soft --specs=nano.specs -T stm32F411RE_ls.ld -Wl,-Map=final.map
LDFLAGS_SH=-mcpu=$(MARCH) -mthumb -mfloat-abi=soft --specs=rdimon.specs -T stm32F411RE_ls.ld -Wl,-Map=final.map
FILE=*.elf
all:main.o led.o stm32F411RE_startup.o syscalls.o final.elf

semi:main.o led.o stm32F411RE_startup.o final_sh.elf

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^
	
led.o:led.c
	$(CC) $(CFLAGS) -o $@ $^
	
stm32F411RE_startup.o:stm32F411RE_startup.c
	$(CC) $(CFLAGS) -o $@ $^
	
syscalls.o:syscalls.c
	$(CC) $(CFLAGS) -o $@ $^
	
final.elf: main.o led.o stm32F411RE_startup.o syscalls.o
	$(CC) $(LDFLAGS) -o $@ $^

final_sh.elf: main.o led.o stm32F411RE_startup.o 
	$(CC) $(LDFLAGS_SH) -o $@ $^
	
clean:
	rm -rf *.o *.elf
	
load:
	openocd -f board/stm32f4discovery.cfg
	
dump:
	arm-none-eabi-objdump.exe -h $(FILE)