
# 项目路径
project_dir = /climatic_data_center
public_include = $(project_dir)/public
pubcpp = $(public_include)/_public.cpp

CC = g++
CFLAGS = -g -std=c++11

all: crtsurfdata1

crtsurfdata1: crtsurfdata1.cpp
	$(CC) $(CFLAGS) -o crtsurfdata1 crtsurfdata1.cpp -I$(public_include) $(pubcpp)
	@mv crtsurfdata1 bin/