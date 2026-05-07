// Function: FUN_00cadab0
// Address: 00cadab0
// Size: 1641 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cadcdf) */
/* WARNING: Removing unreachable block (ram,0x00cadceb) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00cadab0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  ulonglong local_48;
  char local_40 [8];
  char local_38;
  
  if (-1 < *(int *)(unaff_RDI + 0x18)) {
    puVar6 = *(undefined8 **)(*unaff_RSI + 0x10);
    local_48 = 0;
    lVar5 = FUN_00c8df20();
    if (lVar5 == 0) {
      local_38 = '\0';
      if ((DAT_028a72f8 == (undefined8 *)0x0) || (*(int *)((longlong)DAT_028a72f8 + 0xc) == 0)) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02569b68;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        FUN_00d500e0();
      }
      else {
        FUN_00d23340();
        puVar8 = (ulonglong *)local_40;
        if ((char)local_48 != '\0') {
          puVar8 = &local_48;
        }
        local_40[0] = (char)local_48;
        *(undefined1 *)puVar8 = 0;
        if (((char)local_48 != '\0') && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] == '\0') && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00d23740();
      }
      uVar1 = *(undefined8 *)(*unaff_RSI + 0x10);
      puVar7 = (undefined8 *)FUN_00e83020();
      *puVar7 = uVar1;
      puVar7[1] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      lVar5 = FUN_00c8e030();
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 8) != 0) {
          FUN_00d50b20();
        }
        FUN_00e83070();
      }
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        local_38 = '\0';
        if (puVar6 != (undefined8 *)0x0) {
          local_38 = '\0';
          FUN_00d50b20();
        }
      }
    }
    else {
      puVar6 = *(undefined8 **)(lVar5 + 8);
      local_38 = '\0';
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
    }
    local_98 = *param_2;
    local_90 = '\0';
    local_88 = *param_1;
    local_80 = '\0';
    iVar4 = FUN_00cace70(&local_88,&local_98,local_40);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar4 + *(int *)(unaff_RDI + 0x18);
    *(int *)(unaff_RDI + 0x18) = iVar4;
    if (local_40[0] != '\0') {
      if ((DAT_028a72f8 == (undefined8 *)0x0) || (DAT_028a7301 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028a72f8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &DAT_02572358;
          (*DAT_02572370)();
          if (DAT_028a72f8 == puVar7) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            bVar12 = DAT_028a72f8 != (undefined8 *)0x0;
            DAT_028a72f8 = puVar7;
            if (bVar12) {
              FUN_00d50b20();
            }
          }
          if (DAT_028a7300 == '\0') {
            DAT_028a7300 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_00d21370();
          DAT_028a7301 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028a7301 = '\x01';
          FUN_00e8cb70();
        }
      }
      if (*(int *)((longlong)DAT_028a72f8 + 0xc) < 0xfe0) {
        local_48 = local_48 & 0xffffffffffffff00;
        FUN_00d21140();
        if (((char)local_48 != '\0') && (puVar6 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar1 = *(undefined8 *)(*unaff_RSI + 0x10);
      puVar7 = (undefined8 *)FUN_00e83020();
      *puVar7 = uVar1;
      puVar7[1] = 0;
      lVar5 = FUN_00c8e030();
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 8) != 0) {
          FUN_00d50b20();
        }
        FUN_00e83070();
      }
      iVar4 = *(int *)(unaff_RDI + 0x18);
    }
    if (0x7ff7 < iVar4) {
      iVar4 = FUN_00c8d630();
      pcVar3 = DAT_02572370;
      if (0 < iVar4) {
        iVar10 = 0;
        do {
          lVar5 = FUN_00c8df10();
          if ((lVar5 != 0) && (lVar9 = *(longlong *)(lVar5 + 8), lVar9 != 0)) {
            if (*(int *)(lVar9 + 0xc) == 0) {
LAB_00cadf62:
              FUN_00d50b00();
              bVar2 = false;
              if (DAT_028a72f8 == (undefined8 *)0x0) goto LAB_00cadf88;
LAB_00cadf7b:
              if (DAT_028a7301 == '\0') goto LAB_00cadf88;
            }
            else {
              if (*(int *)(lVar9 + 0xc) < 1) {
                *(undefined4 *)(lVar9 + 0xc) = 0;
                goto LAB_00cadf62;
              }
              lVar11 = 0;
              do {
                FUN_00d50b20();
                *(undefined8 *)(lVar9 + 0x10 + lVar11 * 8) = 0;
                if (*(longlong *)(lVar9 + 0x88 + lVar11 * 8) != 0) {
                  FUN_00d50b20();
                  *(undefined8 *)(lVar9 + 0x88 + lVar11 * 8) = 0;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(int *)(lVar9 + 0xc));
              lVar5 = *(longlong *)(lVar5 + 8);
              *(undefined4 *)(lVar9 + 0xc) = 0;
              lVar9 = lVar5;
              if (lVar5 != 0) goto LAB_00cadf62;
              bVar2 = true;
              lVar9 = 0;
              if (DAT_028a72f8 != (undefined8 *)0x0) goto LAB_00cadf7b;
LAB_00cadf88:
              FUN_00e8cb50();
              if (DAT_028a72f8 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar7 = &DAT_02572358;
                (*pcVar3)();
                if (DAT_028a72f8 == puVar7) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                  bVar13 = DAT_028a72f8 != (undefined8 *)0x0;
                  DAT_028a72f8 = puVar7;
                  if (bVar13) {
                    FUN_00d50b20();
                  }
                }
                if (DAT_028a7300 == '\0') {
                  DAT_028a7300 = '\x01';
                  FUN_00e8cb90();
                }
                if (!bVar12) {
                  FUN_00d50b20();
                }
                FUN_00d21370();
                DAT_028a7301 = '\x01';
                FUN_00e8cb70();
              }
              else {
                DAT_028a7301 = '\x01';
                FUN_00e8cb70();
              }
            }
            if (*(int *)((longlong)DAT_028a72f8 + 0xc) < 0xfe0) {
              local_48 = local_48 & 0xffffffffffffff00;
              FUN_00d21140();
              if (((char)local_48 != '\0') && (lVar9 != 0)) {
                FUN_00d50b20();
              }
            }
            if (!bVar2) {
              FUN_00d50b20();
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar4);
      }
      iVar4 = FUN_00c8d630();
      if (0 < iVar4) {
        iVar10 = 0;
        do {
          lVar5 = FUN_00c8df10();
          if (lVar5 != 0) {
            if (*(longlong *)(lVar5 + 8) != 0) {
              FUN_00d50b20();
            }
            FUN_00e83070();
          }
          iVar10 = iVar10 + 1;
        } while (iVar4 != iVar10);
      }
      FUN_00c8d5e0();
      *(undefined4 *)(unaff_RDI + 0x18) = 0xffffffff;
    }
    if ((local_38 != '\0') && (puVar6 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


