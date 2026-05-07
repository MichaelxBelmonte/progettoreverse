// Function: FUN_009838fa
// Address: 009838fa
// Size: 879 bytes
// Class: Unknown
// String references:
//   "No items to parse"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindExtensionItemByOid(const uint8_t *)"

void* FUN_009838fa(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  int local_64;
  int64_t *local_58;
  int64_t *plStack_50;
  
  plVar4 = plStack_50;
  plVar2 = local_58;
  uVar8 = 0;
  if (arg1[1] == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar8 = FUN_00928ab0("virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindExtensionItemByOid(const uint8_t *)"
                         ,0xf2);
    uVar8 = FUN_009c720b(uVar8,uVar6);
  }
  (**(code **)(*arg1 + 0x20))(uVar8,&g_023cd01f);
  local_64 = 1;
  plVar7 = (int64_t *)0x0;
  while( true ) {
    plVar5 = plStack_50;
    (**(code **)(*plVar2 + 0x40))(0x30,local_64);
    if (plVar7 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_58 == (int64_t *)0x0) break;
    (**(code **)(*local_58 + 0x40))(6,1);
    local_58 = (int64_t *)0x0;
    plStack_50 = (int64_t *)0x0;
    local_64 = local_64 + 1;
    plVar7 = plVar5;
  }
  *this_ptr = 0;
  this_ptr[1] = plStack_50;
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return this_ptr;
}

