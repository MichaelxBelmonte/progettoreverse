// Function: FUN_00988b32
// Address: 00988b32
// Size: 797 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "KeyUsage extension is missing"
//   "KeyUsage extension bit string is missing"
//   "virtual void pace::Asn1ParserCert::SetKeyUsage(uint32_t)"

void FUN_00988b32(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void*puVar4;
  void *pvVar5;
  void *pvVar6;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar7;
  int64_t *local_78;
  int64_t *plStack_70;
  
  (**(code **)(*this_ptr + 0x38))(0,&g_023c8b86);
  if (local_78 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetKeyUsage(uint32_t)",0x648);
    FUN_009c720b(uVar7,uVar3);
  }
  (**(code **)(*local_78 + 0x40))(3,1);
  if (plStack_70 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == (int64_t *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetKeyUsage(uint32_t)",0x64c);
    FUN_009c720b(uVar7,uVar3);
  }
  puVar4 = operator_new(0xffffffff);
  *puVar4 = 0;
  pvVar6 = (void *)0x3fffffffffffffff;
  pvVar5 = operator_new(0xffffffff);
  *(char *)((int64_t)pvVar5 + 1) = (char)((uint)unaff_ESI >> 0x18);
  _memcpy(pvVar6,(void *)((int64_t)&MACH_HEADER.magic + 1),param_3);
  if (puVar4 != (void*)0x0) {
    operator_delete(pvVar6);
  }
  (**(code **)(*local_78 + 0x48))();
  if (plStack_70 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  return;
}

