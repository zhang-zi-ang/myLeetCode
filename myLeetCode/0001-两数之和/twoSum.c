//
//  twoSum.c
//  myLeetCode
//
//  Created by 张子昂 on 2020/3/14.
//  Copyright © 2020 张子昂. All rights reserved.
//

#include "twoSum.h"
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //穷举法
    int *lst = (int*)malloc(sizeof(int) * 2);//申请了一块地址指针，lst直接指向地址开始
//    int lst[2]={0,0};
    
    lst[0] = 0;

    lst[1] = 0;
    
    int *list = lst;
    for (int i = 0; i<numsSize - 1; i++)
    {
        for (int j = i + 1; j<numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                lst[0] = i;
                lst[1] = j;
//                *returnSize = 2;
                return list;
            }
        }
    }
    return 0;
    
}
