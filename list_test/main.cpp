//
//  main.cpp
//  linked_list_test
//
//  Created by Chen Zhang on 7/17/15.
//  Copyright (c) 2015 Chen Zhang. All rights reserved.
//

#include <iostream>
#include "list.h"
using namespace std;
int main(int argc, const char * argv[]) {

    list_element node(5, nullptr);
    printf("%d\n", node.get_val());
    node.set_val(1);
    printf("%d\n", node.get_val());
    printf("%p\n", node.get_next());
    

    return 0;
}
