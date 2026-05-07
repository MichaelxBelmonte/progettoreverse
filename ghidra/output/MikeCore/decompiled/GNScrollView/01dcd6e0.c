// Function: FUN_01dcd6e0
// Address: 01dcd6e0
// Size: 1404 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x01dcdb79) */
/* WARNING: Removing unreachable block (ram,0x01dcdb85) */
/* WARNING: Removing unreachable block (ram,0x01dcd90e) */
/* WARNING: Removing unreachable block (ram,0x01dcd91a) */
/* WARNING: Removing unreachable block (ram,0x01dcda4d) */
/* WARNING: Removing unreachable block (ram,0x01dcda59) */
/* WARNING: Removing unreachable block (ram,0x01dcdbb1) */
/* WARNING: Removing unreachable block (ram,0x01dcdbba) */

undefined8 * FUN_01dcd6e0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar8 = *(longlong *)(unaff_RSI + 0x160);
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar3 = false;
    local_48 = (longlong *)0x0;
    bVar4 = false;
    local_40 = (longlong *)0x0;
    bVar1 = false;
    lVar13 = 0;
    bVar2 = false;
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar11 = 0;
    plVar10 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = false;
    local_40 = (longlong *)0x0;
    bVar4 = false;
    local_48 = (longlong *)0x0;
    bVar3 = false;
    lVar12 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar11 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      if (lVar12 == lVar13) {
        lVar13 = lVar12;
        if ((bVar1) || (lVar12 == 0)) {
          bVar14 = bVar1;
          if (lVar12 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar1) && (lVar12 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar14;
      cVar5 = FUN_01db9b00();
      if ((cVar5 != '\0') && (cVar5 = FUN_01db9d40(), cVar5 != '\0')) {
        FUN_01dcdf40();
        local_38 = local_68;
        if (local_68 == plVar10) {
          local_38 = plVar10;
          bVar14 = bVar2;
          if ((!bVar2) && (local_68 != (longlong *)0x0)) {
            if (local_60 != '\0') goto LAB_01dcd8a5;
            FUN_00d50b00();
            bVar14 = true;
          }
        }
        else if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar14 = true;
          if ((bVar2) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01dcd8a5:
          local_60 = '\0';
          bVar14 = true;
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar2 = bVar14;
        if (local_38 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar6 = FUN_01db9f80();
          iVar9 = 2;
          if (iVar6 != 0) {
            iVar9 = iVar6;
          }
          iVar6 = 3;
          if (iVar9 != 1) {
            iVar6 = iVar9;
          }
          FUN_00d7af80(iVar9,iVar6);
          if (local_68 == local_40) {
            if ((!bVar3) && (local_68 != (longlong *)0x0)) {
              plVar10 = local_40;
              if (local_60 == '\0') {
                FUN_00d50b00();
LAB_01dcda21:
                bVar14 = local_60 != '\0';
                goto joined_r0x01dcda25;
              }
              goto LAB_01dcd9b1;
            }
            if (local_60 != '\0') {
LAB_01dcda2b:
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (bVar3) {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b20();
                local_40 = local_68;
                goto LAB_01dcda21;
              }
              bVar14 = false;
              local_40 = local_68;
joined_r0x01dcda25:
              bVar3 = true;
              if (bVar14) goto LAB_01dcda2b;
            }
            else {
              local_40 = local_68;
              bVar3 = true;
            }
          }
          else {
            plVar10 = local_68;
            if ((bVar3) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01dcd9b1:
            local_60 = '\0';
            local_40 = plVar10;
            bVar3 = true;
          }
          cVar5 = FUN_01db9f90();
          if (cVar5 != '\0') {
            FUN_01db9fb0();
            if (local_68 == local_48) {
              if ((!bVar4) && (local_68 != (longlong *)0x0)) {
                plVar10 = local_48;
                if (local_60 != '\0') goto LAB_01dcdaba;
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              plVar10 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  local_48 = local_68;
                  bVar4 = true;
                  goto LAB_01dcdb37;
                }
              }
              else {
                if ((bVar4) && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dcdaba:
                local_60 = '\0';
              }
              local_48 = plVar10;
              bVar4 = true;
            }
LAB_01dcdb37:
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 == (longlong *)0x0) {
              local_48 = (longlong *)0x0;
            }
            else {
              (**(code **)(*local_40 + 0x388))();
            }
          }
          local_68 = local_40;
          local_60 = '\0';
          FUN_00d21140();
          plVar10 = local_38;
        }
      }
      lVar11 = lVar11 + 1;
      lVar8 = *(longlong *)(unaff_RSI + 0x160);
      lVar12 = lVar13;
    } while (lVar11 < *(int *)(lVar8 + 0xc));
  }
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


