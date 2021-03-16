/**
 * @file TypeInfo.h
 * @author Semih Yavuz (semihyavuzz@gmail.com)
 * @brief  A very easy to use compile time type identificator. 
 *         This function exploits decltype(value) for getting type category, 
 *         and decltype((value)) for getting value category.
 *         For More info on value categories https://medium.com/@barryrevzin/value-categories-in-c-17-f56ae54bccbe
 * @version 0.1
 * @date 2021-03-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef TYPEINFO_H
#define TYPEINFO_H

#if defined(_MSC_VER)
    #define funcName __FUNCSIG__
    #define seperator1 "<"
    #define seperator2 ">"
#elif defined (_GNUC)
    #define funcName __PRETTY_FUNCTION__
    #define seperator1 "{"
    #define seperator2 "}"
#elif defined(__clang__)
    #define funcName __PRETTY_FUNCTION__
    #define seperator1 "<"
    #define seperator2 ">"
#else
#endif
#include <string>


#define GetTypeCategory(var)  TypeInfo::TypeInfo<decltype(var)>()
#define GetValueCategory(var) TypeInfo::TypeInfo<decltype((var))>()


namespace TypeInfo{
    template<typename...Types>
    auto TypeInfo(){
        std::string a{funcName};
        auto loc  = a.find_first_of(seperator1);
        auto size = a.find_first_of(seperator2) - loc - 1;
        return a.substr(loc + 1, size) ;
    }
}


#endif