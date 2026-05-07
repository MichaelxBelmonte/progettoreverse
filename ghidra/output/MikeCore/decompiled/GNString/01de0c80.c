// Function: FUN_01de0c80
// Address: 01de0c80
// Size: 1835 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01de1153) */
/* WARNING: Removing unreachable block (ram,0x01de115f) */
/* WARNING: Removing unreachable block (ram,0x01de1348) */
/* WARNING: Removing unreachable block (ram,0x01de1358) */

undefined8 * FUN_01de0c80(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  longlong *plVar14;
  longlong local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  iVar11 = 0;
  if ((int)unaff_RSI[0x30] < 1) {
    local_70 = 0;
    bVar1 = false;
    bVar3 = false;
    local_48 = (longlong *)0x0;
    bVar4 = false;
    local_58 = (longlong *)0x0;
    bVar2 = false;
    local_50 = (longlong *)0x0;
  }
  else {
    local_50 = (longlong *)0x0;
    bVar2 = false;
    local_58 = (longlong *)0x0;
    bVar4 = false;
    local_48 = (longlong *)0x0;
    bVar3 = false;
    bVar1 = false;
    local_70 = 0;
    do {
      if ((int)unaff_RSI[0x36] == iVar11) {
LAB_01de0d58:
        iVar6 = FUN_00d8c7a0();
        if (iVar6 != 0) {
          (**(code **)(*unaff_RSI + 0x9e8))();
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          FUN_00d8dbf0();
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar8 = unaff_RSI[0x2c];
        if (0 < *(int *)(lVar8 + 0xc)) {
          uVar13 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + uVar13 * 8);
            if (local_70 == lVar8) {
              if ((!bVar1) && (local_70 != 0)) {
                bVar1 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              if ((bVar1) && (local_70 != 0)) {
                FUN_00d50b20();
                bVar1 = true;
                local_70 = lVar8;
              }
              else {
                bVar1 = true;
                local_70 = lVar8;
              }
            }
            (**(code **)(*unaff_RSI + 0xa08))(uVar13 & 0xffffffff,iVar11);
            if (local_50 == local_68) {
              if ((bVar2) || (local_50 == (longlong *)0x0)) goto joined_r0x01de0ff5;
              bVar2 = true;
              if (local_60 == '\0') {
                FUN_00d50b00();
                plVar12 = local_50;
                goto LAB_01de0fd6;
              }
            }
            else if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar12 = local_68;
              if ((bVar2) && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01de0fd6:
              bVar2 = true;
              local_50 = plVar12;
joined_r0x01de0ff5:
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar2) && (local_50 != (longlong *)0x0)) {
              local_50 = local_68;
              FUN_00d50b20();
              bVar2 = true;
            }
            else {
              local_50 = local_68;
              bVar2 = true;
            }
            FUN_01db9a00();
            if (local_68 == local_58) {
              if ((bVar3) || (local_68 == (longlong *)0x0)) {
joined_r0x01de10e2:
                plVar12 = local_58;
                bVar5 = bVar3;
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                plVar12 = local_58;
                bVar5 = true;
                if (local_60 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01de10ca;
                }
              }
            }
            else {
              plVar12 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                bVar5 = true;
                if ((bVar3) && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  local_58 = local_68;
LAB_01de10ca:
                  bVar3 = true;
                  goto joined_r0x01de10e2;
                }
              }
              else {
                bVar5 = true;
                if ((bVar3) && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            bVar3 = bVar5;
            (**(code **)(*plVar12 + 0x978))();
            (**(code **)(*plVar12 + 0x970))();
            if (local_48 == local_68) {
              if ((bVar4) || (local_48 == (longlong *)0x0)) goto joined_r0x01de123f;
              bVar4 = true;
              if (local_60 == '\0') {
                FUN_00d50b00();
                plVar14 = local_48;
                goto LAB_01de1224;
              }
            }
            else if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar14 = local_68;
              if ((bVar4) && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01de1224:
              bVar4 = true;
              local_48 = plVar14;
joined_r0x01de123f:
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar4) && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar4 = true;
              local_48 = local_68;
            }
            else {
              bVar4 = true;
              local_48 = local_68;
            }
            if (uVar13 != 0) {
              (**(code **)(*unaff_RSI + 0x9f0))();
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              FUN_00d8dbf0();
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d8dbf0();
            uVar13 = uVar13 + 1;
            lVar8 = unaff_RSI[0x2c];
            local_58 = plVar12;
          } while ((longlong)uVar13 < (longlong)*(int *)(lVar8 + 0xc));
        }
      }
      else {
        lVar8 = unaff_RSI[0x34];
        if (lVar8 != 0) {
          iVar6 = *(int *)(lVar8 + 0x18);
          iVar9 = iVar6 + 3;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          if (3 < iVar6) {
            lVar10 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar8 + 0x10) + lVar10 * 4) == iVar11) goto LAB_01de0d58;
              lVar10 = lVar10 + 1;
            } while (iVar9 >> 2 != (int)lVar10);
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)unaff_RSI[0x30]);
  }
  FUN_00d8c7d0();
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


