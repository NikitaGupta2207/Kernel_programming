cmd_/home/nikita/DD/Hello.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/nikita/DD/Hello.ko /home/nikita/DD/Hello.o /home/nikita/DD/Hello.mod.o;  true
