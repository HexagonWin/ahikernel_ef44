#
# How to Build Pantech magnus kernel
#

1. Get Toolchain (arm-eabi-4.6) and install:

       https://android.googlesource.com/platform/prebuilts/gcc/linux-x86/arm/arm-eabi-4.6/

2. Build the Kernel

    - run build_magnus_kernel.sh
        $./build_magnus.sh

2. Output File Location:

    - kernel : ./obj/KERNEL_OBJ/arch/arm/boot/zImage
    - module : ./kernel/obj/KERNEL_OBJ/drivers/*/*.ko
      
3. Clean Kernel object files:

    - run clean_magnus_kernel.sh
        $./clean_magnus.sh
