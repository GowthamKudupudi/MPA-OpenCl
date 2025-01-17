#define WORDLENGTH_T 8

enum OWBM_ {
   ADD=1, SUBTRACT, ADDMOD, SUBTRACTMOD, MULTIPLYOPRANDSCANNING,
   MULTIPLYPRODUCTSCANNING, MONTGOMERYMULTIPLICATION
};

void addPrime(__global uint*  outputBytes, const size_t ID,
              __private uint PRIME[]);
void subtractPrime(__global uint*  outputBytes, const size_t ID,
                   __private uint PRIME[]);
char compareWithPrime(__global uint*  outputBytes, const size_t ID,
                      __private uint PRIME[]);
void add(__global uint* input1, __global uint* input2,
         __global uint* outputBytes, const size_t ID);
void subtractPositive(__global uint* input1, __global uint* input2,
                      __global uint* outputBytes, const size_t ID);
void addMod(__global uint* input1, __global uint* input2,
            __global uint* outputBytes, const size_t ID, __private uint PRIME[]);
void subtractMod(__global uint* input1, __global uint* input2,
                 __global uint* outputBytes, const size_t ID,
                 __private uint PRIME[]);
void multiplyProductScanning(__global uint* input1, __global uint* input2,
                             __global uint* outputBytes, const size_t ID);
void multiplyOperandScanning(__global uint* input1, __global uint* input2,
                             __global uint* outputBytes, const size_t ID);
int  MIN(int x,int y);
int  MAX(int x,int y);
void montgomeryMultiplication(__global uint*  x,__global uint* y,
                              __global uint* result,const size_t ID,
                              __private uint PRIME[],const uint m_prime);
void rightShiftFormby1InResultPriv(__private uint Aplusxiy[],
                                   __private uint resultPrivate[]) ;
void subtractPositiveResultPrivate(__private uint resultPrivate[],
                                   __private uint PRIME[]);
int  compareResultPrivPrime(__private uint resultPrivate[],
                            __private uint PRIME[]);
void multiplyNoOverFlow1xWORDLENGTH(uint n,const size_t ID,
                                    __global uint* y,__private uint xiy[]) ;
void addNoOverFlowPrivate_XIY(__private uint resultPrivate[],
                              __private uint xiy[],__private uint Aplusxiy[]);
void addNoOverFlowPrivateAplusxiy(ulong ui,__private uint Aplusxiy[],
                                  __private uint cteUI[],
                                  __private uint PRIME[]);
void multiplyNoOverFlowCte(int n,__private uint cteUI[],__private uint PRIME[]);
void copyResultPrivTo(__global uint*  result,__private uint resultPrivate[],
                      const size_t ID);
