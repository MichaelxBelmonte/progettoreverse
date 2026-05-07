// Function: FUN_0097cf46
// Address: 0097cf46
// Size: 650 bytes
// Class: GNString


undefined8 FUN_0097cf46(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_var;
  void *pvVar5;
  longlong unaff_RSI;
  void *pvVar6;
  longlong lVar7;
  longlong unaff_RDI;
  size_t sVar8;
  
  bVar1 = *(byte *)(unaff_RDI + 8);
  pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(unaff_RDI + 0x10);
  }
  bVar2 = *(byte *)(unaff_RSI + 8);
  if ((bVar2 & 1) == 0) {
    pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
  }
  else {
    pvVar4 = *(void **)(unaff_RSI + 0x10);
  }
  if (pvVar5 == pvVar4) {
    sVar8 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar7 = unaff_RSI + 9;
    }
    else {
      lVar7 = *(longlong *)(unaff_RSI + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar5 != (void *)0x0) {
        pvVar5 = (void *)0x0;
        do {
          if (*(char *)(unaff_RDI + 9 + (longlong)pvVar5) != *(char *)(lVar7 + (longlong)pvVar5)) {
            return 0;
          }
          pvVar5 = (void *)((longlong)pvVar5 + 1);
        } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
      }
    }
    else if ((pvVar5 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar8), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(unaff_RDI + 0x20);
    pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar5 = *(void **)(unaff_RDI + 0x28);
    }
    bVar2 = *(byte *)(unaff_RSI + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
    }
    else {
      pvVar4 = *(void **)(unaff_RSI + 0x28);
    }
    if (pvVar5 == pvVar4) {
      sVar8 = CONCAT31((int3)(sVar8 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar7 = unaff_RSI + 0x21;
      }
      else {
        lVar7 = *(longlong *)(unaff_RSI + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar5 != (void *)0x0) {
          pvVar5 = (void *)0x0;
          do {
            if (*(char *)(unaff_RDI + 0x21 + (longlong)pvVar5) !=
                *(char *)(lVar7 + (longlong)pvVar5)) {
              return 0;
            }
            pvVar5 = (void *)((longlong)pvVar5 + 1);
          } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
        }
      }
      else if ((pvVar5 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar8), iVar3 != 0)) {
        return 0;
      }
      bVar1 = *(byte *)(unaff_RDI + 0x38);
      pvVar5 = (void *)(ulonglong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(unaff_RDI + 0x40);
      }
      bVar2 = *(byte *)(unaff_RSI + 0x38);
      if ((bVar2 & 1) == 0) {
        pvVar4 = (void *)(ulonglong)(bVar2 >> 1);
      }
      else {
        pvVar4 = *(void **)(unaff_RSI + 0x40);
      }
      if (pvVar5 == pvVar4) {
        sVar8 = CONCAT31((int3)(sVar8 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar7 = unaff_RSI + 0x39;
        }
        else {
          lVar7 = *(longlong *)(unaff_RSI + 0x48);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(unaff_RDI + 0x39 + (longlong)pvVar5) !=
                  *(char *)(lVar7 + (longlong)pvVar5)) {
                return 0;
              }
              pvVar5 = (void *)((longlong)pvVar5 + 1);
            } while ((void *)(ulonglong)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,sVar8), iVar3 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(unaff_RDI + 0x50);
        pvVar4 = (void *)(ulonglong)(bVar1 >> 1);
        pvVar5 = pvVar4;
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(unaff_RDI + 0x58);
        }
        bVar2 = *(byte *)(unaff_RSI + 0x50);
        if ((bVar2 & 1) == 0) {
          pvVar6 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar6 = *(void **)(unaff_RSI + 0x58);
        }
        if (pvVar5 == pvVar6) {
          if ((bVar2 & 1) == 0) {
            lVar7 = unaff_RSI + 0x51;
          }
          else {
            lVar7 = *(longlong *)(unaff_RSI + 0x60);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(unaff_RDI + 0x51 + (longlong)pvVar5) !=
                    *(char *)(lVar7 + (longlong)pvVar5)) {
                  return 0;
                }
                pvVar5 = (void *)((longlong)pvVar5 + 1);
              } while (pvVar4 != pvVar5);
            }
          }
          else if (pvVar5 != (void *)0x0) {
            iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar5,CONCAT31((int3)(sVar8 >> 8),1));
            pvVar4 = (void *)CONCAT44(extraout_var,iVar3);
            if (iVar3 != 0) {
              return 0;
            }
          }
          if (((*(char *)(unaff_RDI + 0x68) == *(char *)(unaff_RSI + 0x68)) &&
              (*(char *)(unaff_RDI + 0x6f) == *(char *)(unaff_RSI + 0x6f))) &&
             ((*(char *)(unaff_RDI + 0x6f) == '\0' ||
              (*(char *)(unaff_RDI + 0x69) == *(char *)(unaff_RSI + 0x69))))) {
            return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}


