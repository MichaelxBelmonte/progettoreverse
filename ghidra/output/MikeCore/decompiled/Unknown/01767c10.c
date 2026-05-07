// Function: FUN_01767c10
// Address: 01767c10
// Size: 1664 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0176822a) */
/* WARNING: Removing unreachable block (ram,0x01768237) */
/* WARNING: Removing unreachable block (ram,0x0176825c) */
/* WARNING: Removing unreachable block (ram,0x01768269) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01767c10(pthread_key_t param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar10;
  undefined7 uVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  longlong local_98;
  char local_90;
  longlong local_40;
  char local_38;
  
  lVar9 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  lVar8 = *unaff_RSI;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x58);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_01738660();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    lVar9 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01770870();
    lVar8 = *unaff_RSI;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      lVar8 = *unaff_RSI;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x60);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01770870();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == cVar3) {
      lVar9 = *(longlong *)(unaff_RDI + 0x60);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f00();
      iVar4 = *(int *)(local_40 + 0xc);
      lVar8 = *unaff_RSI;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        lVar8 = *unaff_RSI;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      lVar8 = *(longlong *)(lVar8 + 0x60);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f00();
      iVar5 = *(int *)(local_98 + 0xc);
      if (local_90 != '\0') {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if (iVar4 == iVar5) {
        lVar9 = *(longlong *)(unaff_RDI + 0x60);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01770ea0();
        lVar8 = *unaff_RSI;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          lVar8 = *unaff_RSI;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
        }
        lVar8 = *(longlong *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01770ea0();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (iVar4 == iVar5) {
          lVar9 = *(longlong *)(unaff_RDI + 0x60);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *unaff_RSI;
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            lVar9 = *unaff_RSI;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar9 = *(longlong *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          uVar1 = *(uint *)(local_40 + 0xc);
          uVar11 = (undefined7)((ulonglong)unaff_RSI >> 8);
          if ((int)uVar1 < 1) {
            uVar10 = CONCAT71(uVar11,1);
            if (local_40 != 0) goto LAB_0176827b;
          }
          else {
            bVar12 = true;
            uVar10 = 1;
            do {
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar14 = (float)FUN_01779ec0();
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar15 = (float)FUN_01779ec0();
              if (DAT_02390124 < (float)((uint)(fVar14 - fVar15) & _DAT_02390140)) break;
              bVar12 = uVar10 < uVar1;
              bVar13 = uVar10 != uVar1;
              uVar10 = uVar10 + 1;
            } while (bVar13);
            uVar10 = CONCAT71(uVar11,bVar12) ^ 1;
LAB_0176827b:
            FUN_00d50b20();
          }
          FUN_00d50b20();
          goto LAB_0176802f;
        }
      }
    }
  }
  uVar10 = 0;
LAB_0176802f:
  return uVar10 & 0xffffff01;
}


