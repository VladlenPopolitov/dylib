#include <cstdio>
#include <cstdlib>
#include <string>
#include <new>

// no inline, required by [replacement.functions]/3
void* operator new(std::size_t sz)
{
    std::printf("1) new(size_t), size = %zu\n", sz);
    if (sz == 0)
        ++sz; // avoid std::malloc(0) which may return nullptr on success

    if (void *ptr = std::malloc(sz))
        return ptr;

    throw std::bad_alloc{}; // required by [new.delete.single]/3
}

void operator delete(void* ptr) noexcept
{
    std::puts("3) delete(void*)");
    std::free(ptr);
}

extern std::string res();

int main()
{
    std::string str=res();
    std::puts( str.c_str() );
}