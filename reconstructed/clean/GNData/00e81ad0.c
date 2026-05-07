// Function: FUN_00e81ad0
// Address: 00e81ad0
// Size: 1342 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00e81ad0(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  char *pcVar8;
  uint uVar9;
  int64_t this_ptr;
  bool bVar10;
  int64_t lVar11;
  int iVar12;
  uint uVar13;
  int64_t local_f8;
  char local_f0;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t *)(this_ptr + 0x38) != 0) &&
     (*(int *)(*(int64_t *)(this_ptr + 0x40) + 0xc) != 0)) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02578b00;
    (*g_02578b18)();
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) != 0) {
      FUN_00c8d620();
    }
    FUN_00d7a0f0(1,1);
    if (((*(int64_t *)(this_ptr + 0x38) != 0) &&
        (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) != 0)) &&
       (iVar5 = FUN_00c8d620(), 0 < iVar5)) {
      iVar12 = 0;
      bVar10 = true;
      do {
        do {
          do {
            plVar7 = (int64_t *)FUN_00c8df10();
          } while (plVar7 == (int64_t *)0x0);
          lVar1 = *plVar7;
        } while (lVar1 == 0);
        if (!bVar10) break;
        local_c8 = '\0';
        local_d0 = lVar1;
        FUN_019a54a0(lVar1,&local_d0);
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        FUN_00d7a410();
        if (local_f8 != 0) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        iVar12 = iVar12 + 1;
        bVar10 = iVar12 < iVar5;
      } while (iVar12 != iVar5);
    }
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar9 = 0;
        do {
          plVar7 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar9 * 8);
          uVar2 = *(void*)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)uVar9 * 8);
          cVar4 = FUN_00d77de0();
          if (cVar4 == '\0') {
            (**(code **)(*plVar7 + 0x210))();
            local_38[0] = local_40[0];
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = local_38;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            local_c0 = local_48;
            local_b8 = '\0';
            FUN_019a54a0();
            if (local_40[0] == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40[0] = '\0';
            }
            (**(code **)(*plVar7 + 0x200))(0,uVar2,0);
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*plVar7 + 0x210))();
            if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')
                ) && (local_48 != 0)) {
              FUN_00d50b20();
            }
            uVar13 = *(uint *)(local_48 + 0xc);
            if (0 < (int)uVar13) {
              lVar11 = (uint64_t)uVar13 + 1;
              do {
                uVar13 = uVar13 - 1;
                lVar3 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)uVar13 * 8);
                local_a8 = '\0';
                local_b0 = lVar3;
                cVar4 = FUN_00d7a850();
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 == '\0') {
                  local_98 = '\0';
                  local_a0 = lVar3;
                  FUN_019a54a0();
                  local_38[0] = local_40[0];
                  pcVar8 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar8 = local_38;
                  }
                  *pcVar8 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    FUN_00d23620();
                  }
                  else {
                    local_90 = local_48;
                    local_88 = '\0';
                    FUN_00d233f0();
                    if ((local_88 != '\0') && (local_90 != 0)) {
                      FUN_00d50b20();
                    }
                    if (local_38[0] != '\0') {
                      FUN_00d50b20();
                    }
                  }
                }
                lVar11 = lVar11 + -1;
              } while (1 < lVar11);
            }
            FUN_00d50b20();
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

