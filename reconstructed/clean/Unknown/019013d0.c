// Function: FUN_019013d0
// Address: 019013d0
// Size: 525 bytes
// Class: Unknown

uint64_t FUN_019013d0(double param_1,double param_2)

{
  int iVar1;
  void *pvVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t arg1;
  uint64_t this_ptr;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  uint64_t extraout_XMM0_Qa;
  
  iVar4 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  dVar8 = (double)FUN_01907950();
  iVar7 = 0;
  if (dVar8 <= param_1) {
    iVar4 = iVar4 + -2;
    dVar8 = (double)FUN_01907950();
    iVar7 = iVar4;
    if (param_1 < dVar8) {
      iVar1 = 1;
      do {
        iVar7 = iVar1;
        if (iVar4 - iVar7 == 1) break;
        iVar6 = (iVar4 - iVar7) / 2 + iVar7;
        dVar8 = (double)FUN_01907950();
        iVar1 = iVar6;
        if (param_1 <= dVar8) {
          iVar1 = iVar7;
          iVar4 = iVar6;
        }
      } while ((dVar8 != param_1) || (iVar7 = iVar6, NAN(dVar8) || NAN(param_1)));
    }
  }
  param_1 = param_1 + param_2;
  iVar4 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  dVar8 = (double)FUN_01907950();
  iVar1 = 0;
  if (dVar8 <= param_1) {
    iVar4 = iVar4 + -2;
    dVar8 = (double)FUN_01907950();
    iVar1 = iVar4;
    if (param_1 < dVar8) {
      iVar6 = 1;
      do {
        iVar1 = iVar6;
        if (iVar4 - iVar1 == 1) break;
        iVar5 = (iVar4 - iVar1) / 2 + iVar1;
        dVar8 = (double)FUN_01907950();
        iVar6 = iVar5;
        if (param_1 <= dVar8) {
          iVar6 = iVar1;
          iVar4 = iVar5;
        }
      } while ((dVar8 != param_1) || (iVar1 = iVar5, NAN(dVar8) || NAN(param_1)));
    }
  }
  pvVar2 = _pthread_getspecific
                     ((void*)*(void*)(*(int64_t *)(arg1 + 0x38) + 0x10));
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_01907950();
  uVar3 = FUN_00e7b4e0(iVar1 == iVar7 || dVar8 < param_1);
  FUN_019015f0(extraout_XMM0_Qa,uVar3);
  return this_ptr;
}

