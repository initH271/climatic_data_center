
# 项目路径
project_dir = /climatic_data_center
public_include = $(project_dir)/public
pubcpp = $(public_include)/_public.cpp

CC = g++ 
CFLAGS = -g -std=c++11

all: crtsurfdata

crtsurfdata: crtsurfdata.cpp
	$(CC) $(CFLAGS) -o crtsurfdata crtsurfdata.cpp -I$(public_include) $(pubcpp)
	@mv crtsurfdata bin/

clean:
	rm bin/* -f