// Function: FUN_00d91c00
// Address: 00d91c00
// Size: 975 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d91f34) */
/* WARNING: Removing unreachable block (ram,0x00d91f3d) */
/* WARNING: Removing unreachable block (ram,0x00d91dd3) */
/* WARNING: Removing unreachable block (ram,0x00d91ddc) */
/* WARNING: Removing unreachable block (ram,0x00d91fcd) */
/* WARNING: Removing unreachable block (ram,0x00d91fd6) */

undefined8 * FUN_00d91c00(byte param_1,longlong *param_2,char param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar10;
  bool bVar11;
  byte local_44;
  undefined8 *local_40;
  
  uVar5 = *(uint *)(unaff_RSI + 0x20);
  if (uVar5 == 0xffffffff) {
    if (*(longlong *)(unaff_RSI + 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00e7dde0();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  local_40 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_40 = &DAT_025795a8;
  FUN_00d500e0();
  if (0 < (int)uVar5) {
    local_44 = param_1 ^ 1;
    if (param_3 == '\0') {
      uVar10 = 0;
      do {
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          FUN_00d931c0();
        }
        sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x18) + uVar10 * 2);
        lVar3 = *param_2;
        uVar2 = *(uint *)(lVar3 + 0x20);
        if (uVar2 == 0xffffffff) {
          FUN_00d931c0();
          uVar2 = *(uint *)(lVar3 + 0x20);
        }
        if (0 < (int)uVar2) {
          uVar9 = 0;
          do {
            if (*(short *)(*(longlong *)(lVar3 + 0x18) + uVar9 * 2) == sVar1) {
              if ((int)uVar9 != -1) {
                iVar6 = *(int *)(local_40 + 4);
                if (iVar6 == -1) {
                  if (local_40[2] == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = FUN_00e7dde0();
                  }
                }
                if ((iVar6 != 0 | local_44) == 1) {
                  *(byte *)((longlong)local_40 + 0x24) = *(byte *)((longlong)local_40 + 0x24) & 0xfe
                  ;
                  FUN_00d21140();
                  puVar8 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar8 = &DAT_025795a8;
                  FUN_00d500e0();
                  if (puVar8 == local_40) {
                    FUN_00d50b20();
                  }
                  else {
                    FUN_00d50b20();
                    local_40 = puVar8;
                  }
                }
                goto LAB_00d91e51;
              }
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar2 != uVar9);
        }
        FUN_00d8ea20();
LAB_00d91e51:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5);
    }
    else {
      uVar10 = 0;
      bVar11 = false;
      do {
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          FUN_00d931c0();
        }
        sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x18) + uVar10 * 2);
        bVar4 = ~bVar11;
        if (sVar1 != 0x22) {
          bVar4 = bVar11;
        }
        bVar11 = (bool)(bVar4 & 1);
        if (!bVar11) {
          lVar3 = *param_2;
          uVar2 = *(uint *)(lVar3 + 0x20);
          if (uVar2 == 0xffffffff) {
            FUN_00d931c0();
            uVar2 = *(uint *)(lVar3 + 0x20);
          }
          if (0 < (int)uVar2) {
            uVar9 = 0;
            do {
              if (*(short *)(*(longlong *)(lVar3 + 0x18) + uVar9 * 2) == sVar1) {
                if ((int)uVar9 != -1) {
                  iVar6 = *(int *)(local_40 + 4);
                  if (iVar6 == -1) {
                    if (local_40[2] == 0) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = FUN_00e7dde0();
                    }
                  }
                  if ((iVar6 != 0 | local_44) == 1) {
                    *(byte *)((longlong)local_40 + 0x24) =
                         *(byte *)((longlong)local_40 + 0x24) & 0xfe;
                    FUN_00d21140();
                    puVar8 = (undefined8 *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar8 = &DAT_025795a8;
                    FUN_00d500e0();
                    if (puVar8 == local_40) {
                      FUN_00d50b20();
                    }
                    else {
                      FUN_00d50b20();
                      local_40 = puVar8;
                    }
                  }
                  goto LAB_00d91ce2;
                }
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar2 != uVar9);
          }
        }
        FUN_00d8ea20();
LAB_00d91ce2:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5);
    }
  }
  iVar6 = *(int *)(local_40 + 4);
  if (iVar6 == -1) {
    if (local_40[2] == 0) goto LAB_00d91fdb;
    iVar6 = FUN_00e7dde0();
  }
  if (iVar6 != 0) {
    *(byte *)((longlong)local_40 + 0x24) = *(byte *)((longlong)local_40 + 0x24) & 0xfe;
    FUN_00d21140();
  }
LAB_00d91fdb:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


