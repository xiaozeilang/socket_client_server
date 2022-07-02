/*
 * @Description: 
 * @Version: 0.0
 * @Autor: liuj
 * @Date: 2022-07-02 21:29:35
 * @LastEditors: liuj
 * @LastEditTime: 2022-07-02 21:29:44
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
/**
 * @description: 将输入的币串数据，转换为紧凑交易数据
 * @param {unsigned char} *in_utxo
 * @param {unsigned int} in_len
 * @param {unsigned char} *out_compact_data
 * @param {unsigned int} *out_len
 * @return {*}
 * @Date: 2022-07-02 21:28:19
 * @author: liuj
 * @LastEditors: liuj
 * @LastEditTime: Do not edit
 */
void compact_handle(unsigned char *in_utxo,unsigned int in_len,unsigned char *out_compact_data,unsigned int *out_len)
{
  
}