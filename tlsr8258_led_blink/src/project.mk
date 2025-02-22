
OUT_DIR += /src

OBJS += \
$(OUT_PATH)/src/utils.o \
$(OUT_PATH)/src/main.o


# Each subdirectory must supply rules for building sources it contributes
$(OUT_PATH)/src/%.o: $(PROJECT_PATH)/%.c
	@echo 'Building file: $<'
	@$(TC32_PATH)tc32-elf-gcc $(GCC_FLAGS) $(INCLUDE_PATHS) -c -o"$@" "$<"