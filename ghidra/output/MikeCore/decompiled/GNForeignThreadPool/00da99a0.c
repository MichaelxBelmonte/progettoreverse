// Function: FUN_00da99a0
// Address: 00da99a0
// Size: 1481 bytes
// Class: GNForeignThreadPool


/* WARNING: Removing unreachable block (ram,0x00da9b88) */
/* WARNING: Removing unreachable block (ram,0x00da9b91) */
/* WARNING: Removing unreachable block (ram,0x00da9b43) */
/* WARNING: Removing unreachable block (ram,0x00da9b4f) */
/* WARNING: Removing unreachable block (ram,0x00da9afd) */
/* WARNING: Removing unreachable block (ram,0x00da9b09) */
/* WARNING: Removing unreachable block (ram,0x00da9c68) */
/* WARNING: Removing unreachable block (ram,0x00da9c74) */
/* WARNING: Removing unreachable block (ram,0x00da9f15) */
/* WARNING: Removing unreachable block (ram,0x00da9f1e) */
/* WARNING: Removing unreachable block (ram,0x00da9ca2) */
/* WARNING: Removing unreachable block (ram,0x00da9cab) */
/* WARNING: Removing unreachable block (ram,0x00da9ce4) */
/* WARNING: Removing unreachable block (ram,0x00da9ced) */
/* WARNING: Removing unreachable block (ram,0x00da9d0d) */
/* WARNING: Removing unreachable block (ram,0x00da9d16) */

undefined8 * FUN_00da99a0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 *local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  local_38 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_38 = &DAT_025795a8;
  pcVar1 = DAT_025795c0;
  (*DAT_025795c0)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025795a8;
  (*pcVar1)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*pcVar1)();
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar10 = 0;
    puVar9 = puVar7;
    puVar11 = puVar6;
    do {
      FUN_00d8cbc0();
      FUN_00d8ea20();
      cVar2 = (**(code **)(*unaff_RSI + 0x3a0))();
      if (cVar2 == '\0') {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar8 == puVar11) {
          FUN_00d50b20();
          puVar8 = puVar11;
        }
        else if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
LAB_00da9c30:
        FUN_00d8ea20();
        cVar2 = (**(code **)(*unaff_RSI + 0x3b0))();
        if (cVar2 == '\0') {
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &DAT_025795a8;
          (*pcVar1)();
          if (puVar7 == puVar9) {
            FUN_00d50b20();
            puVar7 = puVar9;
          }
          else if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          cVar2 = (**(code **)(*unaff_RSI + 0x3b8))();
          puVar7 = puVar9;
          if (cVar2 != '\0') {
            iVar4 = FUN_00d8c7a0();
            if (iVar4 != 0) {
              FUN_00d21140();
            }
            FUN_00d21140();
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_025795a8;
            (*pcVar1)();
            if (puVar7 == local_38) {
              FUN_00d50b20();
            }
            else {
              bVar12 = local_38 != (undefined8 *)0x0;
              local_38 = puVar7;
              if (bVar12) {
                FUN_00d50b20();
              }
            }
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_025795a8;
            (*pcVar1)();
            if (puVar6 == puVar8) {
              FUN_00d50b20();
              puVar6 = puVar8;
            }
            else if (puVar8 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_025795a8;
            (*pcVar1)();
            if (puVar7 == puVar9) {
              FUN_00d50b20();
              puVar7 = puVar9;
            }
            else if (puVar9 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_00da9aa1;
          }
        }
        FUN_00d8ea20();
        puVar6 = puVar8;
      }
      else {
        cVar2 = (**(code **)(*unaff_RSI + 0x3a8))();
        puVar8 = puVar11;
        if (cVar2 == '\0') goto LAB_00da9c30;
        iVar4 = FUN_00d8c7a0();
        if (iVar4 != 0) {
          FUN_00d21140();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar7 == local_38) {
          FUN_00d50b20();
        }
        else {
          bVar12 = local_38 != (undefined8 *)0x0;
          local_38 = puVar7;
          if (bVar12) {
            FUN_00d50b20();
          }
        }
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar6 == puVar11) {
          FUN_00d50b20();
          puVar6 = puVar11;
        }
        else if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_025795a8;
        (*pcVar1)();
        if (puVar7 == puVar9) {
          FUN_00d50b20();
          puVar7 = puVar9;
        }
        else if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
LAB_00da9aa1:
      iVar10 = iVar10 + 1;
      puVar9 = puVar7;
      puVar11 = puVar6;
    } while (iVar3 != iVar10);
  }
  iVar3 = FUN_00d8c7a0();
  if (iVar3 != 0) {
    FUN_00d21140();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


