// Function: FUN_01873dc0
// Address: 01873dc0
// Size: 2346 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018743d0) */
/* WARNING: Removing unreachable block (ram,0x018743dc) */
/* WARNING: Removing unreachable block (ram,0x01873feb) */
/* WARNING: Removing unreachable block (ram,0x01873ff7) */
/* WARNING: Removing unreachable block (ram,0x01873eff) */
/* WARNING: Removing unreachable block (ram,0x01873f0b) */
/* WARNING: Removing unreachable block (ram,0x01874209) */
/* WARNING: Removing unreachable block (ram,0x01874215) */
/* WARNING: Removing unreachable block (ram,0x018742d6) */
/* WARNING: Removing unreachable block (ram,0x018742e2) */
/* WARNING: Removing unreachable block (ram,0x018742f0) */
/* WARNING: Removing unreachable block (ram,0x018742fc) */
/* WARNING: Removing unreachable block (ram,0x0187433c) */
/* WARNING: Removing unreachable block (ram,0x01874348) */
/* WARNING: Removing unreachable block (ram,0x018744f7) */
/* WARNING: Removing unreachable block (ram,0x01874503) */

void FUN_01873dc0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *unaff_RDI;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  longlong local_80;
  int local_68;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar14 = *unaff_RDI;
  if (1 < *(int *)(lVar14 + 0xc)) {
    local_68 = 1;
    do {
      plVar8 = local_48;
      lVar17 = (longlong)local_68;
      lVar16 = *(longlong *)(lVar14 + 0x10);
      plVar1 = *(longlong **)(lVar16 + lVar17 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
        lVar14 = *unaff_RDI;
        lVar16 = *(longlong *)(lVar14 + 0x10);
      }
      plVar2 = *(longlong **)(lVar16 + -8 + lVar17 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        lVar14 = *unaff_RDI;
      }
      bVar7 = true;
      if ((local_68 < *(int *)(lVar14 + 0xc) + -1) &&
         (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 8 + lVar17 * 8), lVar14 != 0)) {
        FUN_00d50b00();
        bVar7 = false;
      }
      else {
        lVar14 = 0;
      }
      lVar16 = *(longlong *)
                (**(longlong **)(*(longlong *)(*(longlong *)plVar1[2] + 0x20) + 0x10) + 0x10);
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      FUN_018dd490();
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar15 = local_40;
      if (local_40[0] == '\0') {
        pcVar15 = local_38;
      }
      *pcVar15 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar17 = *(longlong *)((longlong)local_48 + 0x14);
      FUN_00e7b970();
      iVar10 = FUN_00e7cea0();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      lVar3 = *(longlong *)
               (**(longlong **)(*(longlong *)(*(longlong *)plVar2[2] + 0x20) + 0x10) + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_018dd490();
      if (local_40[0] == '\0') {
        if (((lVar17 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (lVar17 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar15 = local_40;
      if (local_40[0] == '\0') {
        pcVar15 = local_38;
      }
      *pcVar15 = '\0';
      if ((local_40[0] != '\0') && (lVar17 != 0)) {
        FUN_00d50b20();
      }
      local_48 = *(longlong **)(lVar17 + 0x14);
      FUN_00e7b970();
      iVar11 = FUN_00e7cea0();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (lVar14 == 0) {
        bVar6 = false;
        local_50 = (longlong *)0x0;
        bVar19 = false;
        local_80 = 0;
        iVar12 = 0;
      }
      else {
        local_80 = *(longlong *)
                    (**(longlong **)(*(longlong *)(**(longlong **)(lVar14 + 0x10) + 0x20) + 0x10) +
                    0x10);
        bVar19 = local_80 != 0;
        if (bVar19) {
          FUN_00d50b00();
        }
        FUN_018dd490();
        if (local_48 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          bVar6 = false;
        }
        else {
          local_50 = local_48;
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            bVar6 = true;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
            bVar6 = true;
          }
        }
        FUN_00d23340();
        local_38[0] = local_40[0];
        pcVar15 = local_40;
        if (local_40[0] == '\0') {
          pcVar15 = local_38;
        }
        *pcVar15 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = *(longlong **)((longlong)local_48 + 0x14);
        FUN_00e7b970();
        iVar12 = FUN_00e7cea0();
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      cVar9 = FUN_018da750();
      if (cVar9 != '\0') {
        if (local_50 == (longlong *)0x0) {
          cVar9 = '\0';
        }
        else {
          cVar9 = (**(code **)(*local_50 + 0x50))();
          if (cVar9 == '\0') {
            iVar12 = 0;
          }
          iVar11 = iVar12 + iVar11;
        }
        FUN_018df0d0();
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((cVar9 == '\0') && (iVar11 < iVar10)) {
          FUN_00d50b00();
          uVar13 = FUN_01715480();
          iVar10 = *(int *)((longlong)plVar2 + 0xc);
        }
        else {
          FUN_00d50b00();
          uVar13 = FUN_01715480();
          iVar10 = *(int *)((longlong)plVar1 + 0xc);
          plVar2 = plVar1;
        }
        if (0 < iVar10) {
          lVar18 = 0;
          do {
            lVar4 = *(longlong *)(*(longlong *)(plVar2[2] + lVar18 * 8) + 0x20);
            if ((*(int *)(lVar4 + 0xc) != 0) &&
               (*(longlong *)(**(longlong **)(lVar4 + 0x10) + 0x10) != 0)) {
              FUN_00d50b00();
              FUN_018da8c0(uVar13,uVar13);
              if (local_40[0] == '\0') {
                if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                   (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40[0] = '\0';
              }
              lVar4 = **(longlong **)
                        (*(longlong *)(*(longlong *)(plVar2[2] + lVar18 * 8) + 0x20) + 0x10);
              plVar5 = *(longlong **)(lVar4 + 0x10);
              if (plVar5 != local_48) {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                *(longlong **)(lVar4 + 0x10) = local_48;
                if (plVar5 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < *(int *)((longlong)plVar2 + 0xc));
        }
        if (cVar9 != '\0') {
          local_40[0] = '\0';
          FUN_00d214d0();
          if ((local_40[0] != '\0') && (lVar14 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23620();
        }
        local_40[0] = '\0';
        FUN_00d214d0();
        if ((local_40[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
        FUN_00d50b20();
        local_68 = local_68 + -1;
        bVar20 = local_48 != (longlong *)0x0;
        local_48 = plVar1;
        if (bVar20) {
          FUN_00d50b20();
        }
      }
      if ((bVar6) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar19) && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar17 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar16 != 0) {
        FUN_00d50b20();
      }
      if (!bVar7 && lVar14 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_68 = local_68 + 1;
      lVar14 = *unaff_RDI;
    } while (local_68 < *(int *)(lVar14 + 0xc));
  }
  return;
}


