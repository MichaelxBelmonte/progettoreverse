// Function: FUN_00978a88
// Address: 00978a88
// Size: 1141 bytes
// Class: MUSpectrumShaper


ulonglong FUN_00978a88(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RSI;
  void *pvVar10;
  longlong lVar11;
  longlong unaff_RDI;
  size_t sVar12;
  
  lVar7 = *(longlong *)(unaff_RDI + 8);
  lVar6 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar6 - lVar7 == *(longlong *)(unaff_RSI + 0x10) - *(longlong *)(unaff_RSI + 8)) {
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0x390) {
      cVar3 = FUN_00976c80();
      if (cVar3 == '\0') goto LAB_00978eea;
    }
    if (((*(char *)(unaff_RDI + 0x20) == *(char *)(unaff_RSI + 0x20)) &&
        (*(char *)(unaff_RDI + 0x21) == *(char *)(unaff_RSI + 0x21))) &&
       (*(int *)(unaff_RDI + 0x24) == *(int *)(unaff_RSI + 0x24))) {
      bVar1 = *(byte *)(unaff_RDI + 0x28);
      pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(unaff_RDI + 0x30);
      }
      bVar2 = *(byte *)(unaff_RSI + 0x28);
      if ((bVar2 & 1) == 0) {
        pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar10 = *(void **)(unaff_RSI + 0x30);
      }
      if (pvVar5 == pvVar10) {
        sVar12 = CONCAT31((int3)((uint)param_3 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar7 = unaff_RSI + 0x29;
        }
        else {
          lVar7 = *(longlong *)(unaff_RSI + 0x38);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(unaff_RDI + 0x29 + (longlong)pvVar5) !=
                  *(char *)(lVar7 + (longlong)pvVar5)) goto LAB_00978eea;
              pvVar5 = (void *)((longlong)pvVar5 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar5,sVar12), iVar4 != 0))
        goto LAB_00978eea;
        bVar1 = *(byte *)(unaff_RDI + 0x40);
        pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(unaff_RDI + 0x48);
        }
        bVar2 = *(byte *)(unaff_RSI + 0x40);
        if ((bVar2 & 1) == 0) {
          pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar10 = *(void **)(unaff_RSI + 0x48);
        }
        if (pvVar5 == pvVar10) {
          sVar12 = CONCAT31((int3)(sVar12 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar7 = unaff_RSI + 0x41;
          }
          else {
            lVar7 = *(longlong *)(unaff_RSI + 0x50);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(unaff_RDI + 0x41 + (longlong)pvVar5) !=
                    *(char *)(lVar7 + (longlong)pvVar5)) goto LAB_00978eea;
                pvVar5 = (void *)((longlong)pvVar5 + 1);
              } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
            }
          }
          else if ((pvVar5 != (void *)0x0) &&
                  (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar5,sVar12), iVar4 != 0))
          goto LAB_00978eea;
          if ((*(longlong *)(unaff_RDI + 0x58) == *(longlong *)(unaff_RSI + 0x58)) &&
             (*(longlong *)(unaff_RDI + 0x60) == *(longlong *)(unaff_RSI + 0x60))) {
            bVar1 = *(byte *)(unaff_RDI + 0x68);
            pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar5 = *(void **)(unaff_RDI + 0x70);
            }
            bVar2 = *(byte *)(unaff_RSI + 0x68);
            if ((bVar2 & 1) == 0) {
              pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar10 = *(void **)(unaff_RSI + 0x70);
            }
            if (pvVar5 == pvVar10) {
              if ((bVar2 & 1) == 0) {
                lVar7 = unaff_RSI + 0x69;
              }
              else {
                lVar7 = *(longlong *)(unaff_RSI + 0x78);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar5 != (void *)0x0) {
                  pvVar5 = (void *)0x0;
                  do {
                    if (*(char *)(unaff_RDI + 0x69 + (longlong)pvVar5) !=
                        *(char *)(lVar7 + (longlong)pvVar5)) goto LAB_00978eea;
                    pvVar5 = (void *)((longlong)pvVar5 + 1);
                  } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
                }
              }
              else if ((pvVar5 != (void *)0x0) &&
                      (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar5,
                                       CONCAT31((int3)(sVar12 >> 8),1)), iVar4 != 0))
              goto LAB_00978eea;
              if ((((*(char *)(unaff_RDI + 0x80) == *(char *)(unaff_RSI + 0x80)) &&
                   (*(int *)(unaff_RDI + 0x84) == *(int *)(unaff_RSI + 0x84))) &&
                  (*(char *)(unaff_RDI + 0x27b) == *(char *)(unaff_RSI + 0x27b))) &&
                 (((*(char *)(unaff_RDI + 0x27b) == '\0' || (cVar3 = FUN_009b2a98(), cVar3 != '\0'))
                  && ((*(int *)(unaff_RDI + 0x198) == *(int *)(unaff_RSI + 0x198) &&
                      ((*(char *)(unaff_RDI + 0x19c) == *(char *)(unaff_RSI + 0x19c) &&
                       (*(longlong *)(unaff_RDI + 0x1a0) == *(longlong *)(unaff_RSI + 0x1a0)))))))))
              {
                lVar7 = *(longlong *)(unaff_RDI + 0x1a8);
                lVar6 = *(longlong *)(unaff_RDI + 0x1b0) - lVar7;
                if (lVar6 == *(longlong *)(unaff_RSI + 0x1b0) - *(longlong *)(unaff_RSI + 0x1a8)) {
                  lVar8 = unaff_RSI;
                  if (lVar7 != *(longlong *)(unaff_RDI + 0x1b0)) {
                    lVar11 = 0;
                    do {
                      lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),*(char *)(lVar7 + lVar11));
                      if (*(char *)(lVar7 + lVar11) !=
                          *(char *)(*(longlong *)(unaff_RSI + 0x1a8) + lVar11)) goto LAB_00978eea;
                      lVar11 = lVar11 + 1;
                    } while (lVar6 != lVar11);
                  }
                  if ((*(char *)(unaff_RDI + 0x280) == *(char *)(unaff_RSI + 0x280)) &&
                     (((*(char *)(unaff_RDI + 0x280) == '\0' ||
                       (cVar3 = FUN_009b3030(), cVar3 != '\0')) &&
                      (*(char *)(unaff_RDI + 0x281) == *(char *)(unaff_RSI + 0x281))))) {
                    if (*(char *)(unaff_RDI + 0x281) != '\0') {
                      lVar8 = *(longlong *)(unaff_RDI + 0x240);
                      lVar7 = *(longlong *)(unaff_RDI + 0x248);
                      if (lVar7 - lVar8 !=
                          *(longlong *)(unaff_RSI + 0x248) - *(longlong *)(unaff_RSI + 0x240))
                      goto LAB_00978eea;
                      for (; lVar8 != lVar7; lVar8 = lVar8 + 0x58) {
                        cVar3 = FUN_009796ac();
                        if (cVar3 == '\0') goto LAB_00978eea;
                      }
                    }
                    if (*(char *)(unaff_RDI + 0x282) == *(char *)(unaff_RSI + 0x282)) {
                      uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
                      if (*(char *)(unaff_RDI + 0x282) == '\0') goto LAB_00978eec;
                      lVar7 = *(longlong *)(unaff_RDI + 600);
                      lVar6 = *(longlong *)(unaff_RDI + 0x260);
                      if (lVar6 - lVar7 ==
                          *(longlong *)(unaff_RSI + 0x260) - *(longlong *)(unaff_RSI + 600)) {
                        for (; lVar7 != lVar6; lVar7 = lVar7 + 0x180) {
                          cVar3 = FUN_009b34e8();
                          if (cVar3 == '\0') goto LAB_00978eea;
                        }
                        goto LAB_00978eec;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00978eea:
  uVar9 = 0;
LAB_00978eec:
  return uVar9 & 0xffffffff;
}


