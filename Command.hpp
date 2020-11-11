#include <iostream>
#include <string>



class Command
{
    private:
        std::string  m_mnemonic;
        enum ReadMethod {RD_DPTR, RD_FCUST};
        enum WriteMethod {WR_DPTR, WR_FCUST};
        ReadMethod m_readMethod;
        WriteMethod m_writeMethod;

        void*  m_readAccess;
        void*  m_writeAccess;
        int  m_minArgsToRead;
        int  m_maxArgsToRead;
        int m_minArgsToWrite;
        int m_maxArgsToWrite;

    public:
        std::string GetMnemonic();
        ReadMethod GetReadMethod();
        void SetMnemonic(std::string);
        void SetReadMethod (ReadMethod);
   Command()
    {

    }

    Command(std::string mnemonic,ReadMethod read_Method,WriteMethod  write_Method)
    {

    }

};
