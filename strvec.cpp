#include"which_to_run.h"

#ifdef PRA_STR_VEC
#include<memory>
#include<map>
#include<iostream>
using namespace std;
class StrVec
{
public:
    StrVec():head(nullptr),free(nullptr),tail(nullptr)
    {

    }
    StrVec(const StrVec& b)
    {
         pair<string*,string*> p
                 = allo_n_copy(b.begin(),b.end());
         head = p.first;
         free = p.second;
         tail = head + b.cap();

    }

    StrVec& operator=( const StrVec& b)
    {
        if( this != &b)
        {
             free_buffer();
             pair<string*,string*> p = allo_n_copy(b.begin(),b.end());
             head = p.first;
             free = p.second;
             tail = head + b.cap();
        }
        return *this;


    }

    ~StrVec()
    {
        free_buffer();
        head = free = tail = nullptr;
    }

    void push_back(const string &a)
    {
        check_n_alloc();
        alloc.construct(free, a);
        free++;
    }

    size_t size()
    {
        return free - head;
    }
    string *  begin() const
    {
        return head;
    }
    string *  end() const
    {
        return tail;
    }
    size_t cap() const
    {
        return tail - head;
    }
    void display_all()
    {
        for(string * p = head; p != free; p++)
        {
            cout<<*p<<endl;
        }
    }


private:
    static allocator<string> alloc;
    void check_n_alloc()
    {
        if( size() == cap() )
        {
            reallocate();
        }
    }
    pair<string*,string*> allo_n_copy
    (const string *b, const string *e)
    {
       string * new_head = alloc.allocate(e - b);
       string *new_tail = uninitialized_copy(b,e,new_head);
       return {new_head,new_tail};

    }

    void free_buffer()
    {
        size_t size = free - head;
        if( head != nullptr)
        {
            while( free != head)
            {
                delete(--free);
            }
            alloc.deallocate(head,size );
        }

    }

    void reallocate()
    {
        size_t old_size = size();
        size_t new_size = old_size != 0 ?  old_size*2 : 1;
        string * new_buffer = alloc.allocate(new_size);
        for(string *p = head, *p_dest = new_buffer; p != free; p++,p_dest++)
        {
            alloc.construct(p_dest,std::move(*p++));
        }
        free_buffer();
        head = new_buffer;
        free = head + old_size;
        tail = head+ old_size * 2;


    }

    string *head;
    //与函数名冲突了
    string *free;
    string *tail;
};

 allocator<string> StrVec::alloc;
int main()
{
    StrVec sv;
    sv.push_back("hello_world");
    sv.push_back("back world");
    sv.display_all();

}





#endif
