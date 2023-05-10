/**
 * @file crtsurfdata1.cpp
 * @author h271 (oy.zf@qq.com)
 * @brief  本程序用于生成全国气象站点观测的分钟数据
 * @version 0.1
 * @date 2023-05-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "_public.h"
#include <iostream>

CLogFile logfile(10); // 全局日志文件
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout << "Using  :    ./crtsurfdata1 infile outpath logfile\n"
                  << std::endl;
        std::cout<<"Example:    /project/idc/bin/crtsurfdata1 /project/idc/ini/stdcode.ini /tmp/surfdata /log/idc\n"<<std::endl;

        return -1;
    }

    if (!logfile.Open(argv[3], "a+", false)) // 打开日志文件失败
    {
        printf("logfile.Open(%s) failed.\n", argv[3]);
        return -1;
    }
    logfile.Write("ctrsurfdata1 开始运行。\n");
    // 业务代码

    for (int ii = 0; ii < 10000000; ii++)
        logfile.WriteEx("这是第%010d条日志记录。\n", ii);
    logfile.Write("ctrsurfdata1 结束运行。\n");

    return 0;
}
