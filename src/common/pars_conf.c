//
// Created by root on 19-4-18.
//

#include "pars_conf.h"
#include "cJSON_Utils.h"
#include "cJSON.h"
#include "Make_cfg_file.h"
#include "Read_file.h"
#include <stdlib.h>
#include <string.h>
int Get_log_item(char *filepath,char *item){
    int file_size = 0;
    int ret = 0;
    Read_file_size(DEFAULT_CFG_FILE,&file_size,NULL);

    char *config_data = NULL;
    config_data = (char *)malloc(sizeof(char)* file_size);
    memset(config_data,0,file_size);

    Read_file_size(DEFAULT_CFG_FILE,&file_size,config_data);

    cJSON *root = cJSON_Parse(config_data);
    if(!root){
        return -1;
    }
    if (cJSON_GetObjectItem(root,"log_item")){
        if (cJSON_GetObjectItem(cJSON_GetObjectItem(root,"log_item"),item)) {
            ret = cJSON_GetObjectItem(cJSON_GetObjectItem(root, "log_item"), item)->valueint;
        }
    }
    cJSON_Delete(root);
    free(config_data);
    config_data = NULL;

    return ret;
}