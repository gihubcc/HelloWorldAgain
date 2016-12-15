#include"which_to_run.h"
#ifdef PRA_IMPLEMENT_SHARE_PTR
template<typename P_TYPE>
class share_ptr
{
private:
    P_TYPE data;
    unsigned *ref_count;
public:
    share_ptr(P_TYPE  p)
    {
        data = p;
        ref_count = new unsigned(1);
    }
    share_ptr(const share_ptr& a)
    {
        data = a.data;
        ref_count = a.ref_count;
        *ref_count++;
    }
    share_ptr& operator=(const share_ptr& a)
    {
        //必须释放内存
        *a.ref_count++;
        ref_count--;
        data = a.data;
        ref_count = a.ref_count;
    }
    ~share_ptr()
    {
        *ref_count <= 0? 0:ref_count--;
        if( *ref_count <=0 )
        {
            delete data;
            delete ref_count;
        }
    }


};
#endif
