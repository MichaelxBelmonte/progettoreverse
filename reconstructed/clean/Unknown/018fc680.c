// Function: FUN_018fc680
// Address: 018fc680
// Size: 1161 bytes
// Class: Unknown

void FUN_018fc680(double param_1)

{
  int iVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t in_RCX;
  int iVar4;
  int *arg1;
  int64_t this_ptr;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  if (g_023e1698 <= (double)(g_023908f0 & (uint64_t)param_1)) {
    return;
  }
  if (NAN(param_1)) {
    return;
  }
  iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  dVar8 = (double)FUN_01907950();
  pVar3 = (void*)in_RCX;
  if (param_1 < dVar8) {
    iVar7 = 0;
    goto LAB_018fc902;
  }
  iVar6 = iVar4 + -2;
  dVar8 = (double)FUN_01907950();
  pVar3 = (void*)in_RCX;
  iVar7 = iVar6;
  if (dVar8 <= param_1) goto LAB_018fc902;
  iVar1 = 1;
  if ((arg1 != (int *)0x0) && (iVar7 = *arg1, iVar7 != -1)) {
    iVar5 = iVar7;
    if (iVar6 < iVar7) {
      iVar5 = iVar6;
    }
    if (iVar7 < 1) {
      iVar5 = 1;
    }
    in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
    dVar8 = (double)FUN_01907950();
    if (dVar8 <= param_1) {
      iVar1 = iVar5;
      if (iVar5 < iVar4 + -1) {
        iVar7 = iVar5 + 1;
        in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
        dVar8 = (double)FUN_01907950();
        if (dVar8 <= param_1) goto LAB_018fc835;
LAB_018fc87f:
        iVar6 = iVar7;
      }
      else {
LAB_018fc835:
        iVar7 = iVar5 + 2;
        if (iVar7 < iVar4) {
          in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
          dVar8 = (double)FUN_01907950();
          if (param_1 < dVar8) goto LAB_018fc87f;
        }
        iVar7 = iVar5 + 3;
        if (iVar7 < iVar4) {
          in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
          dVar8 = (double)FUN_01907950();
          if (param_1 < dVar8) goto LAB_018fc87f;
        }
      }
    }
    else {
      iVar1 = 1;
      iVar6 = iVar5;
      if (0 < iVar5) {
        in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
        dVar8 = (double)FUN_01907950();
        iVar1 = iVar5 + -1;
        if (param_1 < dVar8) {
          if (iVar5 < 2) {
            iVar1 = 1;
            iVar6 = 1;
          }
          else {
            in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
            dVar8 = (double)FUN_01907950();
            iVar1 = iVar5 + -2;
            if (param_1 < dVar8) {
              if (iVar5 < 3) {
                iVar1 = 1;
                iVar6 = 2;
              }
              else {
                in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
                dVar8 = (double)FUN_01907950();
                iVar1 = iVar5 + -3;
                if (param_1 < dVar8) {
                  iVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    iVar7 = iVar1;
    pVar3 = (void*)in_RCX;
    if (iVar6 - iVar7 == 1) break;
    iVar4 = (iVar6 - iVar7) / 2 + iVar7;
    in_RCX = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
    dVar8 = (double)FUN_01907950();
    pVar3 = (void*)in_RCX;
    iVar1 = iVar4;
    if (param_1 <= dVar8) {
      iVar1 = iVar7;
      iVar6 = iVar4;
    }
  } while ((dVar8 != param_1) || (iVar7 = iVar4, NAN(dVar8) || NAN(param_1)));
LAB_018fc902:
  if (arg1 != (int *)0x0) {
    *arg1 = iVar7;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_01907950();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  if ((dVar8 != param_1) || (NAN(dVar8) || NAN(param_1))) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar8 = (double)FUN_01907950();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    if ((dVar8 != param_1) || (NAN(dVar8) || NAN(param_1))) {
      FUN_00e7c860();
      FUN_00e7c860();
      return;
    }
  }
  FUN_00e7c860();
  return;
}

