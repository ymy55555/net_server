# Makefile
#

#编译标志
CC = gcc
DEBUG = -g -O2 -Wall -DEBUG_FLAG1=0
COMPILE = -lpthread
CFLAGS += $(DEBUG)
EX_FLAGS += $(COMPILE)

#编译文件
SER_SRC = ${wildcard *.c}
TARGET = server

#编译 
all :
	$(CC)  $(CFLAGS) -o $(TARGET) $(SER_SRC) $(EX_FLAGS)
	
.PHONY: clean undate_date

#更新文件日期
undate_date:
	find . -type f | xargs -n 1  touch
	
clean : 
	-rm -f  $(TARGET)
