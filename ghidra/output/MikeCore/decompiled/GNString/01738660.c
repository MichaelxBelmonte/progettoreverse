// Function: FUN_01738660
// Address: 01738660
// Size: 1137 bytes
// Class: GNString


ulonglong FUN_01738660(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar12;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 uVar10;
  
  uVar11 = *unaff_RDI;
  uVar9 = uVar11 | *unaff_RSI;
  uVar12 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),uVar9 == 0);
  if ((uVar11 != 0) && (*unaff_RSI != 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)uVar9);
    if (pvVar5 != (void *)0x0) {
      uVar11 = *unaff_RDI;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar6 = *(longlong *)(uVar11 + 0x58);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(lVar6 + 0xc);
    uVar11 = *unaff_RSI;
    pvVar5 = _pthread_getspecific((pthread_key_t)uVar9);
    if (pvVar5 != (void *)0x0) {
      uVar11 = *unaff_RSI;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar6 = *(longlong *)(uVar11 + 0x58);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    iVar2 = *(int *)(lVar6 + 0xc);
    FUN_00d50b20();
    FUN_00d50b20();
    if (iVar1 == iVar2) {
      uVar11 = *unaff_RDI;
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar9);
      if (pvVar5 != (void *)0x0) {
        uVar11 = *unaff_RDI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
      }
      cVar4 = *(char *)(uVar11 + 0x40);
      uVar11 = *unaff_RSI;
      pvVar5 = _pthread_getspecific((pthread_key_t)uVar9);
      if (pvVar5 != (void *)0x0) {
        uVar11 = *unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
      }
      bVar8 = (*(char *)(uVar11 + 0x40) != '\0') != (cVar4 != '\0');
      uVar10 = CONCAT71((int7)(uVar9 >> 8),bVar8);
      if (!bVar8) {
        uVar11 = *unaff_RDI;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
        if (pvVar5 != (void *)0x0) {
          uVar11 = *unaff_RDI;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        iVar1 = *(int *)(uVar11 + 0x6c);
        uVar11 = *unaff_RSI;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
        if (pvVar5 != (void *)0x0) {
          uVar11 = *unaff_RSI;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        if (iVar1 == *(int *)(uVar11 + 0x6c)) {
          uVar11 = *unaff_RDI;
          pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
          if (pvVar5 != (void *)0x0) {
            uVar11 = *unaff_RDI;
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8)
              ;
            }
          }
          iVar1 = *(int *)(uVar11 + 0x50);
          uVar11 = *unaff_RSI;
          pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
          if (pvVar5 != (void *)0x0) {
            uVar11 = *unaff_RSI;
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8)
              ;
            }
          }
          if (iVar1 == *(int *)(uVar11 + 0x50)) {
            uVar11 = *unaff_RDI;
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
            if (pvVar5 != (void *)0x0) {
              uVar11 = *unaff_RDI;
              lVar6 = FUN_00e8b990();
              if (lVar6 != 0) {
                uVar11 = *(ulonglong *)
                          (uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
              }
            }
            lVar6 = *(longlong *)(uVar11 + 0x58);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            uVar11 = *unaff_RSI;
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
            if (pvVar5 != (void *)0x0) {
              uVar11 = *unaff_RSI;
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                uVar11 = *(ulonglong *)
                          (uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
              }
            }
            lVar7 = *(longlong *)(uVar11 + 0x58);
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            uVar3 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar3 < 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = CONCAT71((int7)(uVar11 >> 8),1);
              uVar11 = 1;
              do {
                pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                cVar4 = (**(code **)(*local_70 + 0x50))();
                if (local_60 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar4 == '\0') break;
                uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar11 < uVar3);
                bVar8 = uVar11 != uVar3;
                uVar11 = uVar11 + 1;
              } while (bVar8);
            }
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            uVar12 = uVar12 ^ 1;
            goto LAB_01738a9c;
          }
        }
      }
    }
    uVar12 = 0;
  }
LAB_01738a9c:
  return uVar12 & 0xffffff01;
}


