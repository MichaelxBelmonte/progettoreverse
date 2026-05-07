// Function: FUN_009b3200
// Address: 009b3200
// Size: 738 bytes
// Class: MUSpectrumShaper


undefined8 FUN_009b3200(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  longlong unaff_RSI;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 8) == *(int *)(unaff_RSI + 8)) {
    lVar11 = *(longlong *)(unaff_RDI + 0x10);
    lVar7 = *(longlong *)(unaff_RDI + 0x18) - lVar11;
    if (lVar7 == *(longlong *)(unaff_RSI + 0x18) - *(longlong *)(unaff_RSI + 0x10)) {
      if (lVar11 != *(longlong *)(unaff_RDI + 0x18)) {
        lVar9 = 0;
        do {
          if (*(char *)(lVar11 + lVar9) != *(char *)(*(longlong *)(unaff_RSI + 0x10) + lVar9)) {
            return 0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
      }
      bVar1 = *(byte *)(unaff_RDI + 0x28);
      pvVar8 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar8 = *(void **)(unaff_RDI + 0x30);
      }
      bVar2 = *(byte *)(unaff_RSI + 0x28);
      if ((bVar2 & 1) == 0) {
        pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar5 = *(void **)(unaff_RSI + 0x30);
      }
      if (pvVar8 == pvVar5) {
        if ((bVar2 & 1) == 0) {
          lVar11 = unaff_RSI + 0x29;
        }
        else {
          lVar11 = *(longlong *)(unaff_RSI + 0x38);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar8 != (void *)0x0) {
            pvVar8 = (void *)0x0;
            do {
              if (*(char *)(unaff_RDI + 0x29 + (longlong)pvVar8) !=
                  *(char *)(lVar11 + (longlong)pvVar8)) {
                return 0;
              }
              pvVar8 = (void *)((longlong)pvVar8 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar8);
          }
        }
        else if ((pvVar8 != (void *)0x0) &&
                (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar8,(uint)bVar1), iVar4 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(unaff_RDI + 0x40);
        pvVar8 = (void *)(ulonglong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar8 = *(void **)(unaff_RDI + 0x48);
        }
        bVar2 = *(byte *)(unaff_RSI + 0x40);
        if ((bVar2 & 1) == 0) {
          pvVar5 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar5 = *(void **)(unaff_RSI + 0x48);
        }
        if (pvVar8 == pvVar5) {
          if ((bVar2 & 1) == 0) {
            lVar11 = unaff_RSI + 0x41;
          }
          else {
            lVar11 = *(longlong *)(unaff_RSI + 0x50);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar8 != (void *)0x0) {
              pvVar8 = (void *)0x0;
              do {
                if (*(char *)(unaff_RDI + 0x41 + (longlong)pvVar8) !=
                    *(char *)(lVar11 + (longlong)pvVar8)) {
                  return 0;
                }
                pvVar8 = (void *)((longlong)pvVar8 + 1);
              } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar8);
            }
          }
          else if ((pvVar8 != (void *)0x0) &&
                  (iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar8,(uint)bVar1), iVar4 != 0)) {
            return 0;
          }
          if (*(longlong *)(unaff_RDI + 0x58) == *(longlong *)(unaff_RSI + 0x58)) {
            bVar1 = *(byte *)(unaff_RDI + 0x60);
            pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
            pvVar8 = pvVar5;
            if ((bVar1 & 1) != 0) {
              pvVar8 = *(void **)(unaff_RDI + 0x68);
            }
            bVar2 = *(byte *)(unaff_RSI + 0x60);
            if ((bVar2 & 1) == 0) {
              pvVar10 = (void *)(ulonglong)(bVar2 >> 1);
            }
            else {
              pvVar10 = *(void **)(unaff_RSI + 0x68);
            }
            if (pvVar8 == pvVar10) {
              if ((bVar2 & 1) == 0) {
                lVar11 = unaff_RSI + 0x61;
              }
              else {
                lVar11 = *(longlong *)(unaff_RSI + 0x70);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar8 != (void *)0x0) {
                  pvVar8 = (void *)0x0;
                  do {
                    if (*(char *)(unaff_RDI + 0x61 + (longlong)pvVar8) !=
                        *(char *)(lVar11 + (longlong)pvVar8)) {
                      return 0;
                    }
                    pvVar8 = (void *)((longlong)pvVar8 + 1);
                  } while (pvVar5 != pvVar8);
                }
              }
              else if (pvVar8 != (void *)0x0) {
                iVar4 = _memcmp((void *)(ulonglong)bVar2,pvVar8,(uint)bVar1);
                pvVar5 = (void *)CONCAT44(extraout_var,iVar4);
                if (iVar4 != 0) {
                  return 0;
                }
              }
              cVar3 = *(char *)(unaff_RDI + 0x8a);
              uVar6 = CONCAT71((int7)((ulonglong)pvVar5 >> 8),cVar3);
              if ((cVar3 == *(char *)(unaff_RSI + 0x8a)) &&
                 ((cVar3 == '\0' ||
                  (uVar6 = (ulonglong)*(uint *)(unaff_RDI + 0x78),
                  *(uint *)(unaff_RDI + 0x78) == *(uint *)(unaff_RSI + 0x78))))) {
                cVar3 = *(char *)(unaff_RDI + 0x8b);
                uVar6 = CONCAT71((int7)(uVar6 >> 8),cVar3);
                if ((cVar3 == *(char *)(unaff_RSI + 0x8b)) &&
                   ((cVar3 == '\0' ||
                    (uVar6 = (ulonglong)*(uint *)(unaff_RDI + 0x7c),
                    *(uint *)(unaff_RDI + 0x7c) == *(uint *)(unaff_RSI + 0x7c))))) {
                  if (((*(char *)(unaff_RDI + 0x8c) == *(char *)(unaff_RSI + 0x8c)) &&
                      (((*(char *)(unaff_RDI + 0x8c) == '\0' ||
                        (*(char *)(unaff_RDI + 0x80) == *(char *)(unaff_RSI + 0x80))) &&
                       (*(char *)(unaff_RDI + 0x8d) == *(char *)(unaff_RSI + 0x8d))))) &&
                     (((*(char *)(unaff_RDI + 0x8d) == '\0' ||
                       (*(char *)(unaff_RDI + 0x81) == *(char *)(unaff_RSI + 0x81))) &&
                      (*(char *)(unaff_RDI + 0x82) == *(char *)(unaff_RSI + 0x82))))) {
                    return CONCAT71((int7)(uVar6 >> 8),
                                    *(char *)(unaff_RDI + 0x83) == *(char *)(unaff_RSI + 0x83));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


