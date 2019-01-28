# Makefile
#

#编译标志
CC = gcc
DEBUG = -g -O2 -Wall
CFLAGS += $(DEBUG)

#编译文件
SER_SRC = ${wildcard server*.c}
SER_DST = ${patsubst %server.c, %server, $(SER_SRC)} 
#CLI_SRC = ${wildcard client*.c}
#CLI_DST = ${patsubst %client.c, %client, $(CLI_SRC)}

#分别编译文件 
all : 
	$(CC)  $(CFLAGS) -o $(SER_DST) $(SER_SRC) -lpthread
#$(CC)  $(CFLAGS) -o $(CLI_DST) $(CLI_SRC) -lpthread

.PHONY: clean undate_date

#更新文件日期
undate_date:
	find . -type f | xargs -n 1  touch
	
clean : 
	-rm -f  $(SER_DST) #$(CLI_DST)
