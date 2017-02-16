LWAN_A := lwan/build/common/liblwan.a
LWAN_I := -Ilwan/common -Ilwan/build

hello: hello.c
	$(CC) -O2 $(LWAN_I) hello.c $(LWAN_A) -o hello -lpthread -ldl -lz

clean:
	rm hello

.PHONY: clean
