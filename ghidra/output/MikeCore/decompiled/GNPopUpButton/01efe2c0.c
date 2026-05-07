// Function: FUN_01efe2c0
// Address: 01efe2c0
// Size: 1905 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x01efe9f6) */
/* WARNING: Removing unreachable block (ram,0x01efe78a) */
/* WARNING: Removing unreachable block (ram,0x01efe79a) */
/* WARNING: Removing unreachable block (ram,0x01efea02) */

void FUN_01efe2c0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong *plVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  longlong *unaff_RDI;
  longlong lVar14;
  longlong *plVar15;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong *local_80;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_01f03a80();
  plVar15 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar15;
  local_48 = (undefined8 *)0x0;
  local_50 = 0;
  local_58 = (longlong *)0x0;
  FUN_00ca1340();
  pcVar7 = DAT_02572370;
  lVar10 = unaff_RDI[0xf];
  if (*(int *)(lVar10 + 0xc) < 1) {
    bVar5 = false;
    local_48 = (undefined8 *)0x0;
    bVar4 = false;
    plVar15 = (longlong *)0x0;
    local_50 = 0;
    local_58 = (longlong *)0x0;
  }
  else {
    lVar14 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    plVar15 = (longlong *)0x0;
    bVar4 = false;
    local_48 = (undefined8 *)0x0;
    bVar5 = false;
    do {
      lVar10 = *(longlong *)(lVar10 + 0x10);
      plVar2 = *(longlong **)(lVar10 + lVar14 * 8);
      if (local_58 == plVar2) {
        if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          local_50 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          lVar10 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_58 == (longlong *)0x0)) {
          local_50 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          local_58 = plVar2;
        }
        else {
          local_58 = plVar2;
          uVar11 = FUN_00d50b20();
          local_50 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        }
      }
      puVar12 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &DAT_02572358;
      (*pcVar7)();
      if (puVar12 == local_48) {
        if (bVar5) {
          FUN_00d50b20();
LAB_01efe492:
          iVar1 = *(int *)((longlong)local_80 + 0xc);
        }
        else {
          iVar1 = *(int *)((longlong)local_80 + 0xc);
          bVar5 = true;
        }
      }
      else {
        bVar6 = true;
        if (bVar5) {
          if (local_48 != (undefined8 *)0x0) {
            FUN_00d50b20();
            local_48 = puVar12;
            bVar5 = bVar6;
            goto LAB_01efe492;
          }
          iVar1 = *(int *)((longlong)local_80 + 0xc);
          local_48 = puVar12;
          bVar5 = bVar6;
        }
        else {
          iVar1 = *(int *)((longlong)local_80 + 0xc);
          local_48 = puVar12;
          bVar5 = bVar6;
        }
      }
      if (0 < iVar1) {
        lVar10 = 0;
        do {
          plVar2 = *(longlong **)(local_80[2] + lVar10 * 8);
          if (plVar15 == plVar2) {
            if ((!bVar4) && (plVar15 != (longlong *)0x0)) {
              bVar4 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar4 = true;
              plVar15 = plVar2;
            }
            else {
              bVar4 = true;
              plVar15 = plVar2;
            }
          }
          (**(code **)(*plVar15 + 0x5c8))();
          if (local_40 == (longlong *)0x0) {
            cVar9 = '\0';
          }
          else {
            (**(code **)(*plVar15 + 0x5c8))();
            plVar2 = (longlong *)CONCAT71(uStack_67,local_68);
            (**(code **)(*local_58 + 0x370))();
            lVar3 = CONCAT71(uStack_8f,local_90);
            if (local_88 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            cVar9 = (**(code **)(*plVar2 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            local_38[0] = '\0';
            local_40 = plVar15;
            FUN_00d21140();
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)local_80 + 0xc));
      }
      (**(code **)(*local_58 + 0x370))();
      plVar2 = (longlong *)CONCAT71(uStack_67,local_68);
      if (local_60 == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_38[0] = '\0';
      local_40 = plVar2;
      FUN_00ca0840();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      lVar14 = lVar14 + 1;
      lVar10 = unaff_RDI[0xf];
    } while (lVar14 < *(int *)(lVar10 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x608))();
  FUN_00c9fe20();
  plVar2 = local_40;
  local_68 = local_38[0];
  pcVar13 = local_38;
  if (local_38[0] == '\0') {
    pcVar13 = &local_68;
  }
  *pcVar13 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar10 = unaff_RDI[0xe];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = (longlong *)lVar10;
  cVar9 = FUN_00d23d70();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar9 == '\0') {
    FUN_00c9fe20();
    plVar2 = local_40;
    local_68 = local_38[0];
    pcVar13 = local_38;
    if (local_38[0] == '\0') {
      pcVar13 = &local_68;
    }
    *pcVar13 = '\0';
    if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      (**(code **)(*unaff_RDI + 0x5d0))();
    }
    else {
      FUN_00c9fe20();
      plVar2 = local_40;
      local_90 = local_38[0];
      pcVar13 = &local_90;
      if (local_38[0] != '\0') {
        pcVar13 = local_38;
      }
      *pcVar13 = '\0';
      if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar8 = local_40;
      pcVar13 = local_38;
      if (local_38[0] == '\0') {
        pcVar13 = &local_68;
      }
      local_68 = local_38[0];
      *pcVar13 = '\0';
      if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 == '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x5d0))();
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar5) && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


