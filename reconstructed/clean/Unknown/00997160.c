// Function: FUN_00997160
// Address: 00997160
// Size: 527 bytes
// Class: Unknown
// String references:
//   "/Users/admin/.conan/data/boost/1.72.0/pace/stable/package/09bac4a8da0d4940a1727615ac8fffa2eb7a26ee/...
//   "boost::exception_ptr boost::exception_detail::get_static_exception_object() [Exception = boost::exc...

void FUN_00997160(bad_exception *param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  void*puVar4;
  void*this_ptr;
  int64_t *local_60;
  bad_exception *local_30;
  int64_t *local_28;
  
  FUN_009525d0();
  if ((g_02743fe8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    puVar4 = operator_new((ulong)param_1);
    puVar4[6] = &PTR____cxa_pure_virtual_02524c00;
    *puVar4 = PTRg_0249c0d8 + 0x10;
    puVar4[1] = local_60;
    if (local_60 != (int64_t *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
    *(void*)(puVar4 + 4) = 0x81;
    puVar4[3] = 
    "/Users/admin/.conan/data/boost/1.72.0/pace/stable/package/09bac4a8da0d4940a1727615ac8fffa2eb7a26ee/include/boost/exception/detail/exception_ptr.hpp"
    ;
    puVar4[2] = 
    "boost::exception_ptr boost::exception_detail::get_static_exception_object() [Exception = boost::exception_detail::bad_exception_]"
    ;
    *puVar4 = &g_0251e1d8;
    puVar4[5] = &g_0251e208;
    puVar4[6] = &g_0251e248;
    FUN_009590c0();
    g_02743fd8 = local_30;
    g_02743fe0 = local_28;
    if (local_28 != (int64_t *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (local_28 != (int64_t *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
          LOCK();
          piVar2 = (int *)((int64_t)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x18))();
          }
        }
      }
    }
    ___cxa_atexit();
    ___cxa_guard_release();
    param_1 = local_30;
  }
  *this_ptr = g_02743fd8;
  plVar1 = g_02743fe0;
  this_ptr[1] = g_02743fe0;
  if (plVar1 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  std::bad_exception::~bad_exception(param_1);
  if (local_60 != (int64_t *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  std::bad_exception::~bad_exception(param_1);
  return;
}

