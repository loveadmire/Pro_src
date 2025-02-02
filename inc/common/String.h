//
// Created by root on 19-3-6.
//

#ifndef STATION_STRING_H
#define STATION_STRING_H

/*-NO.1-----------------------------
 *  功能： 将一个字符串逆序
 *  说明 ： 这个函数只能将字符串逆序，不能逆序内存单元
 *-----------------------------*/

int char_exchange(char *str,int ll);

/* NO.2------------------------------
 * 功能：将传入的字符串按照ASCII码进行排序
 * 说明：算法部分暂且选用冒泡
/**************************************/
int  Sort_string(char *src);

/**************************************/

/*-NO.2-----------------------------
 *  功能： 获得一个文件的大小,单位 byte
 *  说明 ： 传入的字符串为文件的绝对路径
 *			不能获得文件夹的大小
 *-----------------------------*/
long GetFileSize(char *path);



#endif //STATION_STRING_H
