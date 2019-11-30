/*在C/C++语言编译的过程中设置编译优化等级将会提高程序的运行效率，O3和O2 的提升速度很多时候差不多，但是O3优化的比较多，可能会造成过度优化是程序不能按照编写意图运行。*/
/*使用CMAKE 进行项目管理编译的工程，使用cmake -DCMAKE_BUILD_TYPE=REALEASE 来设置编译版本为release版。*/
/*Timsort 排序对于完全无序的数据效率没有 c++ 标准库的高，但是对于部分有序的序列效率较高，可以取代c++标准库中的stable_sort（稳定排序）。*/
/*文件已 "r+" 模式打开对其进行读写时，操作类似内存中的额字节读写*/
/*intel SIMD 指南 https://software.intel.com/sites/landingpage/IntrinsicsGuide/ */
