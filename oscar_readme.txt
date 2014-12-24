#
# How to Build Pantech oscar kernel
#

1. Get Toolchain (arm-eabi-4.6) and install:

       https://android.googlesource.com/platform/prebuilts/gcc/linux-x86/arm/arm-eabi-4.6/

2. Build the Kernel

    - run build_oscar_kernel.sh
        $./build_oscar.sh

2. Output File Location:

    - kernel : ./obj/KERNEL_OBJ/arch/arm/boot/zImage
    - module : ./kernel/obj/KERNEL_OBJ/drivers/*/*.ko
    - bootimg : ./mkbootimg/oscar/boot.img
      
3. Clean Kernel object files:

    - run clean_oscar_kernel.sh
        $./clean_oscar.sh
