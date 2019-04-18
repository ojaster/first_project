//
//  df.cpp
//  FIrst_Project
//
//  Created by Данил on 17/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
using namespace std;
void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
}
