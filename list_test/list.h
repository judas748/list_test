//
//  list.h
//  linked_list_test
//
//  Created by Chen Zhang on 7/17/15.
//  Copyright (c) 2015 Chen Zhang. All rights reserved.
//

#ifndef __linked_list_test__list__
#define __linked_list_test__list__

#include <stdio.h>
class list_element{
public:
    //list_element();
    list_element(int value, int* ptr):data (value), next (ptr){};
    //~list_element();
    void set_val(int value){data = value;}
    int get_val(){return data;}
    void set_next(int* ptr){next = ptr;}
    int* get_next(){return next;}
    
private:
    int data;
    int* next;
};




class list{
public:
    int* get_head(){return head;}
    void set_head(int* ptr){head = ptr;}
    int get_count(){return count;}
    void preappend_node();
    void insert_node();
    void delete_node();
private:
    int* head;
    int count;
};
#endif /* defined(__linked_list_test__list__) */
