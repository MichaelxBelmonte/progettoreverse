// Function: FUN_00951ac0
// Address: 00951ac0
// Size: 569 bytes
// Class: Unknown
// String references:
//   "boost::exception_ptr boost::exception_detail::get_static_exception_object() [Exception = boost::exc...
//   "/Users/admin/.conan/data/boost/1.72.0/pace/stable/package/09bac4a8da0d4940a1727615ac8fffa2eb7a26ee/...

void FUN_00951ac0(bad_alloc *param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  void*puVar4;
  void*this_ptr;
  int64_t *local_70;
  bad_alloc *local_40;
  int64_t *local_38;
  
  std::bad_alloc::bad_alloc(param_1);
  FUN_009273a0();
  if ((g_02743fd0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    puVar4 = operator_new((ulong)param_1);
    puVar4[6] = PTRg_0249c068 + 0x10;
    *puVar4 = &PTR____cxa_pure_virtual_02524b30;
    puVar4[1] = local_70;
    if (local_70 != (int64_t *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    *(void*)(puVar4 + 4) = 0x81;
    puVar4[3] = 
    "/Users/admin/.conan/data/boost/1.72.0/pace/stable/package/09bac4a8da0d4940a1727615ac8fffa2eb7a26ee/include/boost/exception/detail/exception_ptr.hpp"
    ;
    puVar4[2] = 
    "boost::exception_ptr boost::exception_detail::get_static_exception_object() [Exception = boost::exception_detail::bad_alloc_]"
    ;
    *puVar4 = &g_0251e0a0;
    puVar4[5] = &g_0251e0d0;
    puVar4[6] = &g_0251e110;
    FUN_009597c0();
    g_02743fc0 = local_40;
    g_02743fc8 = local_38;
    if (local_38 != (int64_t *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      if (local_38 != (int64_t *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_38 + 0x10))();
          LOCK();
          piVar2 = (int *)((int64_t)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x18))();
          }
        }
      }
    }
    ___cxa_atexit();
    ___cxa_guard_release();
    param_1 = local_40;
  }
  *this_ptr = g_02743fc0;
  plVar1 = g_02743fc8;
  this_ptr[1] = g_02743fc8;
  if (plVar1 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  std::bad_alloc::~bad_alloc(param_1);
  if (local_70 != (int64_t *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  std::bad_alloc::~bad_alloc(param_1);
  return;
}

