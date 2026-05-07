// Function: FUN_01873dc0
// Address: 01873dc0
// Size: 2346 bytes
// Class: Unknown

void FUN_01873dc0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  bool bVar6;
  bool bVar7;
  int64_t *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint32_t uVar13;
  int64_t lVar14;
  char *pcVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t *this_ptr;
  int64_t lVar18;
  bool bVar19;
  bool bVar20;
  int64_t local_80;
  int local_68;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar14 = *this_ptr;
  if (1 < *(int *)(lVar14 + 0xc)) {
    local_68 = 1;
    do {
      plVar8 = local_48;
      lVar17 = (int64_t)local_68;
      lVar16 = *(int64_t *)(lVar14 + 0x10);
      plVar1 = *(int64_t **)(lVar16 + lVar17 * 8);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
        lVar14 = *this_ptr;
        lVar16 = *(int64_t *)(lVar14 + 0x10);
      }
      plVar2 = *(int64_t **)(lVar16 + -8 + lVar17 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        lVar14 = *this_ptr;
      }
      bVar7 = true;
      if ((local_68 < *(int *)(lVar14 + 0xc) + -1) &&
         (lVar14 = *(int64_t *)(*(int64_t *)(lVar14 + 0x10) + 8 + lVar17 * 8), lVar14 != 0)) {
        FUN_00d50b00();
        bVar7 = false;
      }
      else {
        lVar14 = 0;
      }
      lVar16 = *(int64_t *)
                (**(int64_t **)(*(int64_t *)(*(int64_t *)plVar1[2] + 0x20) + 0x10) + 0x10);
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      FUN_018dd490();
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
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
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar17 = *(int64_t *)((int64_t)local_48 + 0x14);
      FUN_00e7b970();
      iVar10 = FUN_00e7cea0();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      lVar3 = *(int64_t *)
               (**(int64_t **)(*(int64_t *)(*(int64_t *)plVar2[2] + 0x20) + 0x10) + 0x10);
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
      local_48 = *(int64_t **)(lVar17 + 0x14);
      FUN_00e7b970();
      iVar11 = FUN_00e7cea0();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (lVar14 == 0) {
        bVar6 = false;
        local_50 = (int64_t *)0x0;
        bVar19 = false;
        local_80 = 0;
        iVar12 = 0;
      }
      else {
        local_80 = *(int64_t *)
                    (**(int64_t **)(*(int64_t *)(**(int64_t **)(lVar14 + 0x10) + 0x20) + 0x10) +
                    0x10);
        bVar19 = local_80 != 0;
        if (bVar19) {
          FUN_00d50b00();
        }
        FUN_018dd490();
        if (local_48 == (int64_t *)0x0) {
          local_50 = (int64_t *)0x0;
          bVar6 = false;
        }
        else {
          local_50 = local_48;
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            bVar6 = true;
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
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
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = *(int64_t **)((int64_t)local_48 + 0x14);
        FUN_00e7b970();
        iVar12 = FUN_00e7cea0();
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      cVar9 = FUN_018da750();
      if (cVar9 != '\0') {
        if (local_50 == (int64_t *)0x0) {
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
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((cVar9 == '\0') && (iVar11 < iVar10)) {
          FUN_00d50b00();
          uVar13 = FUN_01715480();
          iVar10 = *(int *)((int64_t)plVar2 + 0xc);
        }
        else {
          FUN_00d50b00();
          uVar13 = FUN_01715480();
          iVar10 = *(int *)((int64_t)plVar1 + 0xc);
          plVar2 = plVar1;
        }
        if (0 < iVar10) {
          lVar18 = 0;
          do {
            lVar4 = *(int64_t *)(*(int64_t *)(plVar2[2] + lVar18 * 8) + 0x20);
            if ((*(int *)(lVar4 + 0xc) != 0) &&
               (*(int64_t *)(**(int64_t **)(lVar4 + 0x10) + 0x10) != 0)) {
              FUN_00d50b00();
              FUN_018da8c0(uVar13,uVar13);
              if (local_40[0] == '\0') {
                if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                   (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40[0] = '\0';
              }
              lVar4 = **(int64_t **)
                        (*(int64_t *)(*(int64_t *)(plVar2[2] + lVar18 * 8) + 0x20) + 0x10);
              plVar5 = *(int64_t **)(lVar4 + 0x10);
              if (plVar5 != local_48) {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                *(int64_t **)(lVar4 + 0x10) = local_48;
                if (plVar5 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < *(int *)((int64_t)plVar2 + 0xc));
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
        if ((local_40[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
        FUN_00d50b20();
        local_68 = local_68 + -1;
        bVar20 = local_48 != (int64_t *)0x0;
        local_48 = plVar1;
        if (bVar20) {
          FUN_00d50b20();
        }
      }
      if ((bVar6) && (local_50 != (int64_t *)0x0)) {
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
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar16 != 0) {
        FUN_00d50b20();
      }
      if (!bVar7 && lVar14 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_68 = local_68 + 1;
      lVar14 = *this_ptr;
    } while (local_68 < *(int *)(lVar14 + 0xc));
  }
  return;
}

