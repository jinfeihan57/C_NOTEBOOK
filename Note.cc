/*在C/C++语言编译的过程中设置编译优化等级将会提高程序的运行效率，O3和O2 的提升速度很多时候差不多，但是O3优化的比较多，可能会造成过度优化是程序不能按照编写意图运行。*/

/*使用CMAKE 进行项目管理编译的工程，使用cmake -DCMAKE_BUILD_TYPE=REALEASE 来设置编译版本为release版。*/

/*使用Linux内核接口 open文件已 O_WRONLY 模式打开，对磁盘操作如同对内存操作。进行及时写而不影响其他Byte。*/
/*fopen文件已 "r+" 模式打开对其进行读写时，操作类似内存中的额字节读写*/

/*Timsort 排序对于完全无序的数据效率没有 c++ 标准库的高，但是对于部分有序的序列效率较高，可以取代c++标准库中的stable_sort（稳定排序）。*/

/*intel SIMD 指南 https://software.intel.com/sites/landingpage/IntrinsicsGuide/ */
/*arm SIMD 指南 https://developer.arm.com/architectures/instruction-sets/simd-isas/neon/intrinsics?search= */

/*7zip-zstd 项目中引用 lz4 并且实现了 lz4 的多线程压缩 多线程的模板 
  项目中C/zstdmt/threading.h和memmt.h以及zstd-mt_threading.c 构成了Unix和windows跨平台的多线程和内存操作*/

gcc -fstack-protector-strong 选项，检测栈溢出
https://outflux.net/blog/archives/2014/01/27/fstack-protector-strong/
add gcc 选项-fno-stack-protector 修复 undefined reference to `__stack_chk_fail'

内存泄漏安全检测
 gcc -fsanitize=address -fno-omit-frame-pointer -fsanitize=leak -fsanitize=undefined  -g -O2 -static-libasan
高压缩比算法
http://mattmahoney.net/dc/zpaq_compression.pdf

/* GNU gcc documentation */
https://gcc.gnu.org/
