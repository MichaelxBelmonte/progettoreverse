// Function: FUN_00983d42
// Address: 00983d42
// Size: 658 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Main Public Key is missing"
//   "virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindPublicKeySequence(uint32_t)"

void FUN_00983d42(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  
  this_ptr[1] = 0;
  *this_ptr = 0;
  if (param_2 == 0) {
    (**(code **)(*arg1 + 0x20))(param_1,&g_023cd028);
    plVar3 = (int64_t *)this_ptr[1];
    *(void*)this_ptr = local_38;
    *(void*)((int64_t)this_ptr + 4) = uStack_34;
    *(void*)(this_ptr + 1) = uStack_30;
    *(void*)((int64_t)this_ptr + 0xc) = uStack_2c;
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*this_ptr == 0) {
      FUN_00925fd0();
      uVar4 = FUN_00926010();
      uVar5 = FUN_00928ab0("virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindPublicKeySequence(uint32_t)"
                           ,300);
      FUN_009c720b(uVar5,uVar4);
    }
  }
  else {
    (**(code **)(*arg1 + 0x38))(param_1,&g_023c8b96);
    plVar3 = (int64_t *)this_ptr[1];
    *(void*)this_ptr = local_38;
    *(void*)((int64_t)this_ptr + 4) = uStack_34;
    *(void*)(this_ptr + 1) = uStack_30;
    *(void*)((int64_t)this_ptr + 0xc) = uStack_2c;
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((int64_t *)*this_ptr != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*this_ptr + 0x40))(0x30,1);
      plVar3 = (int64_t *)this_ptr[1];
      *(void*)this_ptr = 0;
      *(void*)((int64_t)this_ptr + 4) = 0;
      *(void*)(this_ptr + 1) = 0;
      *(void*)((int64_t)this_ptr + 0xc) = 0;
      if (plVar3 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((int64_t *)*this_ptr != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*this_ptr + 0x40))(0x30,param_2);
        plVar3 = (int64_t *)this_ptr[1];
        *(void*)this_ptr = 0;
        *(void*)((int64_t)this_ptr + 4) = 0;
        *(void*)(this_ptr + 1) = 0;
        *(void*)((int64_t)this_ptr + 0xc) = 0;
        if (plVar3 != (int64_t *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
  }
  return;
}

