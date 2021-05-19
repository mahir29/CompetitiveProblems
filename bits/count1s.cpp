int numSetBits(unsigned int A) {
    

    int count=0;
    while(A>0){
        count+=A&1;
        A>>=1;
    }
    
    return count;
}

int countBits(unsigned int A){   // Brian Kernighan’s Algorithm
    int count=0;
    while(A>0){
        A=A&(A-1);
        count++;
    }

    return count;
}