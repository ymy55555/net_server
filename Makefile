# Makefile
#

#编译标志
CC = gcc
DEBUG = -g -O2 -Wall
COMPILE = -o -lpthread
CFLAGS += $(DEBUG)
CFLAGS += $(COMPILE)

#编译文件
SER_SRC = ${wildcard *.c}
SER_DST = ${patsubst %.c, %, $(SER_SRC)} 

#分别编译文件 
all : 
	$(CC)  $(CFLAGS) -o $(SER_DST) $(SER_SRC) -lpthread

.PHONY: clean undate_date

#更新文件日期
undate_date:
	find . -type f | xargs -n 1  touch
	
clean : 
	-rm -f  $(SER_DST) 
