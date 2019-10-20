#ifndef COMMAND_H
#define COMMAND_H



class Command {
    public:
        /**
         * @brief method invoked when decision is made to invade planet,
         * the function calls the invade method from the receiver (Exploration vessel in this case) object
         * */
        virtual void invade() = 0;
};

#endif