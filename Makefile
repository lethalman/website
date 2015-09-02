all:
	mkdir -p maja
	$(MAKE) -C wml

clean:
	$(MAKE) -C wml clean
	rmdir maja

.PHONY: clean
