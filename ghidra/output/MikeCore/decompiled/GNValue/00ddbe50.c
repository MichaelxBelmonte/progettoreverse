// Function: FUN_00ddbe50
// Address: 00ddbe50
// Size: 1117 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00ddc007) */
/* WARNING: Removing unreachable block (ram,0x00ddc013) */
/* WARNING: Removing unreachable block (ram,0x00ddc264) */
/* WARNING: Removing unreachable block (ram,0x00ddc26d) */

ulonglong FUN_00ddbe50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  int local_34;
  
  lVar5 = unaff_RDI[4];
  cVar6 = (**(code **)(*unaff_RDI + 0x388))();
  if (cVar6 == '\0') {
    lVar8 = *unaff_RSI;
    if (0 < *(int *)(lVar8 + 0xc)) {
      local_34 = -1;
      lVar13 = 0;
      lVar12 = 0;
      bVar2 = false;
      local_58 = 0;
      bVar4 = false;
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar13 * 8);
        if (lVar12 == lVar8) {
          if ((!bVar2) && (lVar12 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar12 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar12 = lVar8;
          }
          else {
            bVar2 = true;
            lVar12 = lVar8;
          }
        }
        (**(code **)(*unaff_RDI + 0x370))();
        (**(code **)(*unaff_RDI + 0x380))();
        (**(code **)(*unaff_RDI + 0x390))();
        (**(code **)(*unaff_RDI + 0x380))();
        FUN_00e7b4e0();
        uVar9 = FUN_00d906a0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = (int)uVar9;
        lVar8 = local_58;
        bVar3 = bVar4;
        if (((iVar11 != -1) && (iVar7 = FUN_00d8c7a0(), iVar7 == (int)((ulonglong)uVar9 >> 0x20)))
           && ((local_34 == -1 || (iVar11 < local_34)))) {
          local_34 = iVar11;
          if (local_58 == lVar12) {
            if (((bVar2) && (!bVar4)) && (lVar12 != 0)) {
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else {
            if ((bVar2) && (lVar12 != 0)) {
              FUN_00d50b00();
            }
            lVar8 = lVar12;
            bVar3 = bVar2;
            if ((bVar4) && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_58 = lVar8;
        lVar13 = lVar13 + 1;
        lVar8 = *unaff_RSI;
        bVar4 = bVar3;
      } while (lVar13 < *(int *)(lVar8 + 0xc));
      if (local_34 == -1) {
        uVar14 = 0;
        local_34 = (int)lVar5;
      }
      else {
        if (param_2 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_025795a8;
          (*DAT_025795c0)();
          puVar1 = (undefined8 *)*param_2;
          if (puVar1 == puVar10) {
            if (*(char *)(param_2 + 1) == '\0') goto LAB_00ddc18a;
            FUN_00d50b20();
          }
          else {
            *param_2 = puVar10;
            if ((*(char *)(param_2 + 1) != '\0') && (puVar1 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
LAB_00ddc18a:
            *(undefined1 *)(param_2 + 1) = 1;
          }
          lVar13 = FUN_00d8d520();
          (**(code **)(*unaff_RDI + 0x380))();
          FUN_00d8ea20();
          FUN_00d8c7d0();
        }
        uVar14 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
        if (param_1 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_025795a8;
          (*DAT_025795c0)();
          puVar1 = (undefined8 *)*param_1;
          if (puVar1 == puVar10) {
            if (*(char *)(param_1 + 1) == '\0') goto LAB_00ddc242;
            FUN_00d50b20();
          }
          else {
            *param_1 = puVar10;
            if ((*(char *)(param_1 + 1) != '\0') && (puVar1 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
LAB_00ddc242:
            *(undefined1 *)(param_1 + 1) = 1;
          }
          FUN_00d8dbf0();
          FUN_00d8c7d0();
        }
      }
      *(int *)(unaff_RDI + 4) = local_34;
      if ((bVar3) && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00ddc157;
    }
    *(int *)(unaff_RDI + 4) = (int)lVar5;
  }
  uVar14 = 0;
LAB_00ddc157:
  return uVar14 & 0xffffffff;
}


