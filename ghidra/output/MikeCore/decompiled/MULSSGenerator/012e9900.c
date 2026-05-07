// Function: FUN_012e9900
// Address: 012e9900
// Size: 2622 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e9b96) */
/* WARNING: Removing unreachable block (ram,0x012e9ba3) */
/* WARNING: Removing unreachable block (ram,0x012e9a0b) */
/* WARNING: Removing unreachable block (ram,0x012e9a18) */
/* WARNING: Removing unreachable block (ram,0x012e9a97) */
/* WARNING: Removing unreachable block (ram,0x012e9ac0) */
/* WARNING: Removing unreachable block (ram,0x012e9a99) */
/* WARNING: Removing unreachable block (ram,0x012e9ac2) */

undefined8 * FUN_012e9900(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  int in_EDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  uint uVar11;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_78;
  char local_70;
  int local_60;
  undefined8 *local_50;
  char local_48;
  undefined8 *local_40;
  
  if ((char)unaff_RSI[0x28] != '\0') {
    (**(code **)(*unaff_RSI + 0x1a0))();
  }
  lVar10 = unaff_RSI[0x27];
  if (lVar10 == 0) {
LAB_012e9a22:
    pcVar4 = DAT_02572370;
    lVar10 = unaff_RSI[0x16];
    if (lVar10 != 0) {
      local_70 = '\0';
      local_78 = (undefined8 *)0x0;
      local_60 = -1;
      bVar2 = false;
      local_40 = (undefined8 *)0x0;
      while( true ) {
        lVar8 = (longlong)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar10 + 0xc) <= local_60) break;
        local_78 = *(undefined8 **)(*(longlong *)(lVar10 + 0x10) + 8 + lVar8 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar10 + 0x10));
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_012754d0(param_1,param_2);
        if (cVar5 != '\0') {
          if (local_40 == (undefined8 *)0x0) {
            local_40 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = &DAT_02572358;
            (*pcVar4)();
            bVar2 = true;
          }
          local_48 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_50 = local_78;
        }
      }
      FUN_001159b0();
LAB_012e9bcc:
      if ((local_40 != (undefined8 *)0x0) && (in_EDX != 0)) {
        uVar11 = *(uint *)((longlong)local_40 + 0xc);
        if (in_EDX == 1) {
          if (0 < (int)uVar11) {
            lVar8 = (ulonglong)uVar11 + 1;
            lVar10 = 0;
            bVar3 = false;
            do {
              uVar11 = uVar11 - 1;
              lVar1 = *(longlong *)(local_40[2] + (ulonglong)uVar11 * 8);
              pVar9 = uVar11;
              if (lVar10 == lVar1) {
                if ((!bVar3) && (lVar10 != 0)) {
                  bVar3 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar3) && (lVar10 != 0)) {
                  FUN_00d50b20();
                  bVar3 = true;
                  lVar10 = lVar1;
                }
                else {
                  bVar3 = true;
                  lVar10 = lVar1;
                }
              }
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_78 == (undefined8 *)0x0) {
                cVar5 = '\0';
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                if (local_50 == (undefined8 *)0x0) {
                  cVar5 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125a560();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011ef460();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd6a0();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar5 = FUN_014bc070();
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_00d23620();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
LAB_012ea359:
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (0 < (int)uVar11) {
          lVar8 = (ulonglong)uVar11 + 1;
          lVar10 = 0;
          bVar3 = false;
          do {
            uVar11 = uVar11 - 1;
            lVar1 = *(longlong *)(local_40[2] + (ulonglong)uVar11 * 8);
            pVar9 = uVar11;
            if (lVar10 == lVar1) {
              if ((!bVar3) && (lVar10 != 0)) {
                bVar3 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar3) && (lVar10 != 0)) {
                FUN_00d50b20();
                bVar3 = true;
                lVar10 = lVar1;
              }
              else {
                bVar3 = true;
                lVar10 = lVar1;
              }
            }
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            if (local_78 == (undefined8 *)0x0) {
              bVar6 = 1;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef460();
              if (local_50 == (undefined8 *)0x0) {
                bVar6 = 1;
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar6 = FUN_014bc070();
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                bVar6 = bVar6 ^ 1;
              }
              if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar6 != 0) {
              FUN_00d23620();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
          goto LAB_012ea359;
        }
      }
      goto LAB_012ea38b;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      lVar10 = unaff_RSI[0x27];
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar10 + 0x38) == '\0') goto LAB_012e9a22;
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015292f0(param_1,param_2);
    if (local_78 != (undefined8 *)0x0) {
      bVar2 = true;
      local_40 = local_78;
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_012e9bcc;
    }
    local_40 = (undefined8 *)0x0;
    bVar2 = false;
LAB_012ea38b:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar2) goto LAB_012ea3a6;
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_012ea3a6;
    }
  }
  local_40 = (undefined8 *)0x0;
LAB_012ea3a6:
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


