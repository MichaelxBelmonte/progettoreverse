// Function: FUN_01902110
// Address: 01902110
// Size: 1394 bytes
// Class: Unknown

void FUN_01902110(uint64_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void* pVar4;
  int iVar5;
  void* pVar6;
  int64_t this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  if (iVar2 < 1) {
    FUN_018fbd10();
    return;
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  pVar6 = (void*)param_1;
  if (iVar2 == 1) {
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01907950();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01907950();
    if (dVar11 <= dVar10) {
      pVar6 = 1;
      goto LAB_0190253a;
    }
LAB_0190245c:
    pVar6 = 0;
  }
  else {
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01907950();
    iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
    dVar11 = (double)FUN_01907950();
    pVar6 = (void*)param_1;
    if (dVar11 <= dVar10) {
      iVar5 = iVar2 + -2;
      dVar11 = (double)FUN_01907950();
      pVar6 = (void*)param_1;
      if (dVar10 < dVar11) {
        iVar9 = 1;
        iVar8 = iVar5;
        if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != -1)) {
          iVar7 = iVar1;
          if (iVar5 < iVar1) {
            iVar7 = iVar5;
          }
          if (iVar1 < 1) {
            iVar7 = 1;
          }
          param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
          dVar11 = (double)FUN_01907950();
          if (dVar10 < dVar11) {
            iVar9 = 1;
            iVar8 = iVar7;
            if (0 < iVar7) {
              param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
              dVar11 = (double)FUN_01907950();
              iVar9 = iVar7 + -1;
              if (dVar10 < dVar11) {
                if (iVar7 < 2) {
                  iVar9 = 1;
                  iVar8 = 1;
                }
                else {
                  param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
                  dVar11 = (double)FUN_01907950();
                  iVar9 = iVar7 + -2;
                  if (dVar10 < dVar11) {
                    if (iVar7 < 3) {
                      iVar9 = 1;
                      iVar8 = 2;
                    }
                    else {
                      param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
                      dVar11 = (double)FUN_01907950();
                      iVar9 = iVar7 + -3;
                      if (dVar10 < dVar11) {
                        iVar9 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            iVar9 = iVar7;
            if (iVar7 < iVar2 + -1) {
              iVar8 = iVar7 + 1;
              param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
              dVar11 = (double)FUN_01907950();
              if (dVar10 < dVar11) goto LAB_0190262b;
            }
            iVar8 = iVar7 + 2;
            if (iVar8 < iVar2) {
              param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
              dVar11 = (double)FUN_01907950();
              if (dVar10 < dVar11) goto LAB_0190262b;
            }
            iVar8 = iVar5;
            if (iVar7 + 3 < iVar2) {
              param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
              dVar11 = (double)FUN_01907950();
              if (dVar10 < dVar11) {
                iVar8 = iVar7 + 3;
              }
            }
          }
        }
LAB_0190262b:
        do {
          pVar6 = (void*)param_1;
          iVar5 = iVar9;
          if (iVar8 - iVar9 == 1) break;
          iVar5 = (iVar8 - iVar9) / 2 + iVar9;
          param_1 = *(void*)(*(int64_t *)(this_ptr + 0x38) + 0x10);
          dVar11 = (double)FUN_01907950();
          pVar6 = (void*)param_1;
          iVar2 = iVar5;
          if (dVar10 <= dVar11) {
            iVar2 = iVar9;
            iVar8 = iVar5;
          }
          iVar9 = iVar2;
        } while ((dVar11 != dVar10) || (NAN(dVar11) || NAN(dVar10)));
      }
      if (param_2 != (int *)0x0) goto LAB_019023bf;
LAB_019023c2:
      if (iVar5 == 0) goto LAB_019023ca;
    }
    else {
      iVar5 = 0;
      if (param_2 != (int *)0x0) {
LAB_019023bf:
        *param_2 = iVar5;
        goto LAB_019023c2;
      }
LAB_019023ca:
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_01907950();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01907950();
      iVar5 = 0;
      if (dVar10 < dVar11) goto LAB_0190245c;
    }
    pVar6 = iVar5 + 1;
    if (iVar5 == *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc) + -2) {
      pVar4 = pVar6;
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_01907950();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01907950();
      if (dVar10 < dVar11) {
        pVar6 = iVar5 + 2;
      }
    }
  }
LAB_0190253a:
  FUN_018fbe40(dVar11,pVar6);
  return;
}

