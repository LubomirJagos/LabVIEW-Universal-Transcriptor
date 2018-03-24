/***************************************************************************
 * Basic Arduino function by LuboJ.
 */

/*
 *	Implementation of feedback node as static function using templates to get universal feedback node
 */
#define SHIFT_REGISTER_SIZE 2
template<typename FEEDBACKNODE_TYPE>
static FEEDBACKNODE_TYPE feedbackNode(FEEDBACKNODE_TYPE value){
    static FEEDBACKNODE_TYPE internalBuffer[SHIFT_REGISTER_SIZE];
    static int internalHead = 0;
    static int internalTail = SHIFT_REGISTER_SIZE - 1;
    internalBuffer[internalHead] = value;
    internalHead += 1;
    internalTail += 1;
    if (internalHead == SHIFT_REGISTER_SIZE) internalHead = 0;
    if (internalTail == SHIFT_REGISTER_SIZE) internalTail = 0;
    return internalBuffer[internalHead];
}

typedef int Waveform;

void Toggle_LED();
void Delay(int timems);
