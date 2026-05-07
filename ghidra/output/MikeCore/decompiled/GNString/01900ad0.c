// Function: FUN_01900ad0
// Address: 01900ad0
// Size: 979 bytes
// Class: GNString


longlong * FUN_01900ad0(uint *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  uint uVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  if (*param_2 == 0) {
LAB_01900d63:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  if (param_1 == (uint *)0x0) {
LAB_01900b19:
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar9 = (double)FUN_01907950();
    iVar1 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc);
    dVar10 = (double)FUN_01907950();
    if (dVar10 <= dVar9) {
      uVar4 = iVar1 - 2;
      dVar10 = (double)FUN_01907950();
      if (dVar9 < dVar10) {
        uVar6 = 1;
        if (param_1 == (uint *)0x0) {
          uVar7 = iVar1 - 2;
          uVar8 = uVar6;
        }
        else {
          uVar8 = *param_1;
          if (uVar8 == 0xffffffff) {
LAB_01900e15:
            uVar7 = iVar1 - 2;
            uVar8 = uVar6;
          }
          else {
            uVar6 = uVar8;
            if ((int)uVar4 < (int)uVar8) {
              uVar6 = iVar1 - 2;
            }
            if ((int)uVar8 < 1) {
              uVar6 = 1;
            }
            dVar10 = (double)FUN_01907950();
            if (dVar9 < dVar10) {
              uVar8 = 1;
              uVar7 = uVar6;
              if (0 < (int)uVar6) {
                dVar10 = (double)FUN_01907950();
                uVar8 = uVar6 - 1;
                if (dVar9 < dVar10) {
                  if ((int)uVar6 < 2) {
                    uVar7 = 1;
                    uVar8 = 1;
                  }
                  else {
                    dVar10 = (double)FUN_01907950();
                    uVar8 = uVar6 - 2;
                    if (dVar9 < dVar10) {
                      if ((int)uVar6 < 3) {
                        uVar7 = 2;
                        uVar8 = 1;
                      }
                      else {
                        dVar10 = (double)FUN_01907950();
                        uVar8 = uVar6 - 3;
                        if (dVar9 < dVar10) {
                          uVar8 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar8 = uVar6;
              if ((int)uVar6 < iVar1 + -1) {
                uVar7 = uVar6 + 1;
                dVar10 = (double)FUN_01907950();
                if (dVar9 < dVar10) goto LAB_01900e5b;
              }
              uVar7 = uVar6 + 2;
              if ((iVar1 <= (int)uVar7) || (dVar10 = (double)FUN_01907950(), dVar10 <= dVar9)) {
                uVar7 = uVar6 + 3;
                if (iVar1 <= (int)uVar7) goto LAB_01900e15;
                dVar10 = (double)FUN_01907950();
                if (dVar10 <= dVar9) {
                  uVar7 = iVar1 - 2;
                }
              }
            }
          }
        }
LAB_01900e5b:
        do {
          uVar4 = uVar8;
          if (uVar7 - uVar8 == 1) break;
          uVar4 = (int)(uVar7 - uVar8) / 2 + uVar8;
          dVar10 = (double)FUN_01907950();
          uVar6 = uVar4;
          if (dVar9 <= dVar10) {
            uVar6 = uVar8;
            uVar7 = uVar4;
          }
          uVar8 = uVar6;
        } while ((dVar10 != dVar9) || (NAN(dVar10) || NAN(dVar9)));
      }
    }
    else {
      uVar4 = 0;
    }
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar4;
    }
    lVar3 = *(longlong *)(unaff_RSI + 0x38);
    lVar5 = (longlong)(int)uVar4;
    if (uVar4 == *(int *)(lVar3 + 0xc) - 2U) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar5 * 8);
      dVar10 = (double)FUN_01907950();
      if (dVar9 <= dVar10) {
        lVar3 = *(longlong *)(unaff_RSI + 0x38);
        goto LAB_01900ce1;
      }
LAB_01900d1e:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar3 != 0) goto LAB_01900d28;
    }
    else {
LAB_01900ce1:
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 8);
      dVar10 = (double)FUN_01907950();
      if (uVar4 != 0) {
        if ((dVar10 == dVar9) && (!NAN(dVar10) && !NAN(dVar9))) {
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10) + -8 + lVar5 * 8);
          FUN_01907950();
        }
        goto LAB_01900d1e;
      }
      if (dVar10 < dVar9) goto LAB_01900d1e;
    }
    lVar3 = 0;
  }
  else {
    uVar4 = *param_1;
    if ((((int)uVar4 < 0) || (*(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc) <= (int)uVar4)) ||
       (lVar3 = *(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10),
       *(longlong *)(lVar3 + (ulonglong)uVar4 * 8) != *param_2)) goto LAB_01900b19;
    if ((ulonglong)uVar4 == 0) goto LAB_01900d63;
    *param_1 = uVar4 - 1;
    lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar4 - 1) * 8);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 == 0) goto LAB_01900d34;
LAB_01900d28:
    FUN_00d50b00();
  }
LAB_01900d34:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


