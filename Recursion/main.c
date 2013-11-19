//
//  main.c
//  Recursion
//
//  Created by ammar falmban on 11/18/13.
//  Copyright (c) 2013 SDKaizen.com. All rights reserved.
//

#include <stdio.h>

void singTheSong(int numberOfSinging){
    
    if(numberOfSinging == 0){
        
        printf("There are simply no more song on the Karaoke\n");
        
    }else{
        
        printf("%d song of songs on the wall . %d song .\n",numberOfSinging,numberOfSinging);
        int oneFewer = numberOfSinging - 1;
        
        printf("Take one down , pass it around , %d song of songs \n",oneFewer);
        
        // ----/ this funcation calls itself. /--
        singTheSong(oneFewer);
        
        printf("put a song on the DVD case %d\n",numberOfSinging);
    }
    
}

int main(int argc, const char * argv[])
{

    singTheSong(99);
    return 0;
}

