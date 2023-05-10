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
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        printf("Using    :    ./crtsurfdata1 infile outpath logfile\n");
        printf("Example:    /project/idc/bin/crtsurfdata1 /project/idc/ini/stdcode.ini /tmp/surfdata /log/idc\n");

        return -1;
    }
    return 0;
}
