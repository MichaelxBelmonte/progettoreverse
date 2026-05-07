// Function: FUN_00983ff4
// Address: 00983ff4
// Size: 1027 bytes
// Class: Unknown
// String references:
//   "No items to parse"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindSubjectOrIssuerByOID(const uint8_t *, bool)"

void* FUN_00983ff4(char param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *arg1;
  void*this_ptr;
  int iVar7;
  uint32_t uVar8;
  int64_t *local_48;
  int64_t *plStack_40;
  
  plVar4 = plStack_40;
  plVar2 = local_48;
  uVar8 = 0;
  if (arg1[1] == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar8 = FUN_00928ab0("virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindSubjectOrIssuerByOID(const uint8_t *, bool)"
                         ,0x159);
    uVar8 = FUN_009c720b(uVar8,uVar6);
  }
  if (param_1 == '\0') {
    (**(code **)(*arg1 + 0x20))(uVar8,&g_023cd036);
  }
  else {
    (**(code **)(*arg1 + 0x20))(uVar8,&g_023cd02f);
  }
  iVar7 = 1;
  while (plVar5 = plStack_40, (**(code **)(*plVar2 + 0x40))(0x31,iVar7), local_48 != (int64_t *)0x0
        ) {
    (**(code **)(*local_48 + 0x40))(0x30,1);
    local_48 = (int64_t *)0x0;
    plStack_40 = (int64_t *)0x0;
    if (plVar5 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar7 = iVar7 + 1;
  }
  *this_ptr = 0;
  this_ptr[1] = plStack_40;
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

