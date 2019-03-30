################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AddingLastTestCase.cpp \
../AddingMaxTestCase.cpp \
../AddingMidTestCase.cpp \
../AddingOnlyTestCase.cpp \
../AddingTestCase.cpp \
../ArrayCreationTestCase.cpp \
../BinaryHeapTest.cpp \
../BinaryHeapTestCase.cpp \
../CopyCreationTestCase.cpp \
../CreationTestCase.cpp \
../DeletingFromEmptyTestCase.cpp \
../DeletingLastTestCase.cpp \
../DeletingMaxTestCase.cpp \
../DeletingMidTestCase.cpp \
../DeletingOnlyRootTestCase.cpp \
../DeletingOutOfRangeTestCase.cpp \
../DeletingTestCase.cpp \
../EmptyCreationTestCase.cpp \
../EmptyHeapException.cpp \
../RootOnlyCreationTestCase.cpp \
../basebinheap.cpp \
../binheap.cpp 

OBJS += \
./AddingLastTestCase.o \
./AddingMaxTestCase.o \
./AddingMidTestCase.o \
./AddingOnlyTestCase.o \
./AddingTestCase.o \
./ArrayCreationTestCase.o \
./BinaryHeapTest.o \
./BinaryHeapTestCase.o \
./CopyCreationTestCase.o \
./CreationTestCase.o \
./DeletingFromEmptyTestCase.o \
./DeletingLastTestCase.o \
./DeletingMaxTestCase.o \
./DeletingMidTestCase.o \
./DeletingOnlyRootTestCase.o \
./DeletingOutOfRangeTestCase.o \
./DeletingTestCase.o \
./EmptyCreationTestCase.o \
./EmptyHeapException.o \
./RootOnlyCreationTestCase.o \
./basebinheap.o \
./binheap.o 

CPP_DEPS += \
./AddingLastTestCase.d \
./AddingMaxTestCase.d \
./AddingMidTestCase.d \
./AddingOnlyTestCase.d \
./AddingTestCase.d \
./ArrayCreationTestCase.d \
./BinaryHeapTest.d \
./BinaryHeapTestCase.d \
./CopyCreationTestCase.d \
./CreationTestCase.d \
./DeletingFromEmptyTestCase.d \
./DeletingLastTestCase.d \
./DeletingMaxTestCase.d \
./DeletingMidTestCase.d \
./DeletingOnlyRootTestCase.d \
./DeletingOutOfRangeTestCase.d \
./DeletingTestCase.d \
./EmptyCreationTestCase.d \
./EmptyHeapException.d \
./RootOnlyCreationTestCase.d \
./basebinheap.d \
./binheap.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/mikhailf/eclipse-workspace/binheap" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


