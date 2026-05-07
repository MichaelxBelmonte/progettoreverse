// ===================================================================
// MUPitchSystemRulerView — Complete reconstructed pseudocode
// 10 functions
// ===================================================================


// ============================================================
// 019f48d0
// ============================================================
// Function: FUN_019f48d0
// Address: 019f48d0
// Size: 3816 bytes
// Class: MUPitchSystemRulerView

uint64_t FUN_019f48d0(uint64_t param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t lVar10;
  char *pcVar11;
  void* pVar12;
  char *pcVar13;
  char *pcVar14;
  uint64_t uVar15;
  int64_t *this_ptr;
  double dVar16;
  double dVar17;
  double local_a8;
  double local_98;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  char *local_78;
  char local_70 [8];
  char *local_68;
  char local_60 [8];
  char *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  char *local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_68 + 0xc);
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 1) {
    uVar15 = 0;
    goto LAB_019f5827;
  }
  (**(code **)(*this_ptr + 0xe20))();
  FUN_00d23310();
  pcVar7 = local_68;
  pVar12 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_60[0]);
  pcVar14 = &local_88;
  if (local_60[0] != '\0') {
    pcVar14 = local_60;
  }
  local_88 = local_60[0];
  *pcVar14 = '\0';
  if ((local_60[0] != '\0') && (pcVar7 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 == '\0') && (pcVar7 != (char *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar12);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  pcVar14 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (char *)0x0) goto LAB_019f4a69;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (char *)0x0)) {
      FUN_00d50b20();
    }
LAB_019f4a18:
    local_40 = pcVar7;
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pcVar7 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != (char *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = (double)FUN_0125a280();
    cVar3 = FUN_019a9840();
    local_98 = local_98 + g_0241b6a8;
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(pVar12);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = (double)FUN_012f8e60(local_98);
    }
    if (pcVar7 != (char *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pcVar7 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != (char *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = (double)FUN_01259520();
    cVar3 = FUN_019a9840();
    local_a8 = local_a8 + g_0241b6b0;
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(pVar12);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = (double)FUN_012f8e60(local_a8);
    }
    if (pcVar7 != (char *)0x0) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pcVar6 = (char *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void**)pcVar6 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    pcVar7 = (char *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void**)pcVar7 = &g_02572358;
    (*pcVar2)();
    pcVar8 = (char *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void**)pcVar8 = &g_02572358;
    (*pcVar2)();
    pvVar5 = _pthread_getspecific(pVar12);
    if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar12 = (void*)pcVar14;
    }
    FUN_01328ff0();
    pcVar13 = local_68;
    pcVar14 = pcVar7;
    if (local_60[0] == '\0') {
      if (local_68 != (char *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (char *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f4d79;
      }
    }
    else if (local_68 != (char *)0x0) {
LAB_019f4d79:
      local_60[0] = '\0';
      local_68 = (char *)0x0;
      local_58 = pcVar13;
      local_50 = -1;
      iStack_4c = 0;
      local_48 = 0;
      while( true ) {
        if (iStack_4c != 0) {
          if (iStack_4c < 1) {
            iStack_4c = -iStack_4c;
          }
          else {
            local_50 = local_50 - iStack_4c;
            FUN_00d23690();
            local_48 = local_48 + iStack_4c;
            iStack_4c = 0;
          }
        }
        lVar9 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(local_58 + 0xc) <= local_50) break;
        lVar10 = *(int64_t *)(local_58 + 0x10);
        pcVar14 = *(char **)(lVar10 + 8 + lVar9 * 8);
        local_68 = pcVar14;
        pvVar5 = _pthread_getspecific((void*)lVar10);
        pcVar13 = local_68;
        pVar12 = (void*)lVar10;
        if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar14 = pcVar13, lVar9 != 0)) {
          pcVar14 = *(char **)(pcVar13 + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
        }
        dVar16 = (double)FUN_014bacf0();
        pcVar13 = local_68;
        if (local_98 <= dVar16) {
          pvVar5 = _pthread_getspecific(pVar12);
          pcVar11 = local_68;
          pcVar14 = pcVar13;
          if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar14 = pcVar11, lVar9 != 0)) {
            pcVar14 = *(char **)(pcVar11 + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
          }
          dVar16 = (double)FUN_014bacf0();
          if (dVar16 <= local_a8) {
            local_78 = local_68;
            local_70[0] = '\0';
            FUN_00d21140();
            if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      pcVar13 = local_58;
      FUN_01a02100();
      pVar12 = (void*)pcVar13;
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01329770();
    pcVar13 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != (char *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (char *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f4f75;
      }
    }
    else if (local_68 != (char *)0x0) {
LAB_019f4f75:
      local_60[0] = '\0';
      local_68 = (char *)0x0;
      local_58 = pcVar13;
      local_50 = -1;
      iStack_4c = 0;
      local_48 = 0;
      while( true ) {
        if (iStack_4c != 0) {
          if (iStack_4c < 1) {
            iStack_4c = -iStack_4c;
          }
          else {
            local_50 = local_50 - iStack_4c;
            FUN_00d23690();
            local_48 = local_48 + iStack_4c;
            iStack_4c = 0;
          }
        }
        lVar9 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(local_58 + 0xc) <= local_50) break;
        lVar10 = *(int64_t *)(local_58 + 0x10);
        pcVar14 = *(char **)(lVar10 + 8 + lVar9 * 8);
        local_68 = pcVar14;
        pvVar5 = _pthread_getspecific((void*)lVar10);
        pcVar13 = local_68;
        pVar12 = (void*)lVar10;
        if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar14 = pcVar13, lVar9 != 0)) {
          pcVar14 = *(char **)(pcVar13 + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
        }
        dVar16 = (double)FUN_014bacf0();
        pcVar13 = local_68;
        if (local_98 <= dVar16) {
          pvVar5 = _pthread_getspecific(pVar12);
          pcVar11 = local_68;
          pcVar14 = pcVar13;
          if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar14 = pcVar11, lVar9 != 0)) {
            pcVar14 = *(char **)(pcVar11 + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
          }
          dVar16 = (double)FUN_014bacf0();
          if (dVar16 <= local_a8) {
            local_78 = local_68;
            local_70[0] = '\0';
            uVar4 = FUN_00d23d70();
            pcVar14 = (char *)(uint64_t)uVar4;
            if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)uVar4 == '\0') {
              local_78 = local_68;
              local_70[0] = '\0';
              FUN_00d21140();
              if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_01a02100();
      FUN_00d50b20();
    }
    if (1 < *(int *)(pcVar7 + 0xc)) {
      FUN_00d242c0();
    }
    if (1 < *(int *)(pcVar6 + 0xc)) {
      FUN_00d242c0();
    }
    local_60[0] = '\0';
    local_68 = (char *)0x0;
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    local_58 = pcVar7;
    while( true ) {
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          FUN_00d23690();
          local_48 = local_48 + iStack_4c;
          iStack_4c = 0;
        }
      }
      lVar9 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(local_58 + 0xc) <= local_50) break;
      pcVar14 = *(char **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar9 * 8);
      local_68 = pcVar14;
      pvVar5 = _pthread_getspecific((void*)*(int64_t *)(local_58 + 0x10));
      pcVar13 = local_68;
      if ((pvVar5 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pcVar14 = pcVar13, lVar9 != 0)) {
        pcVar14 = *(char **)(pcVar13 + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
      }
      FUN_014bb640();
      FUN_00d470c0();
      pcVar13 = (char *)CONCAT71(uStack_87,local_88);
      if (local_80 == '\0') {
        if (pcVar13 != (char *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_70[0] = '\0';
      local_78 = pcVar13;
      FUN_00d21140();
      if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
        FUN_00d50b20();
      }
      if (pcVar13 != (char *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
    }
    pcVar13 = local_58;
    FUN_01a021a0();
    if (pcVar6 != (char *)0x0) {
      local_60[0] = '\0';
      local_68 = (char *)0x0;
      local_50 = -1;
      iStack_4c = 0;
      local_48 = 0;
      local_58 = pcVar6;
      while( true ) {
        if (iStack_4c != 0) {
          if (iStack_4c < 1) {
            iStack_4c = -iStack_4c;
          }
          else {
            local_50 = local_50 - iStack_4c;
            FUN_00d23690();
            local_48 = local_48 + iStack_4c;
            iStack_4c = 0;
          }
        }
        lVar9 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(local_58 + 0xc) <= local_50) break;
        local_68 = *(char **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar9 * 8);
        pvVar5 = _pthread_getspecific((void*)*(int64_t *)(local_58 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bacf0();
        FUN_00d470c0();
        pcVar14 = (char *)CONCAT71(uStack_87,local_88);
        if (local_80 == '\0') {
          if (pcVar14 != (char *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_70[0] = '\0';
        local_78 = pcVar14;
        FUN_00d21140();
        if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if (pcVar14 != (char *)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
      }
      pcVar13 = local_58;
      FUN_01a02100();
    }
    if ((param_2 != '\0') && (0 < *(int *)(pcVar8 + 0xc))) {
      local_60[0] = '\0';
      local_68 = (char *)0x0;
      iStack_4c = 0;
      local_48 = 0;
      lVar9 = 0;
      local_58 = pcVar8;
      while( true ) {
        pVar12 = (void*)pcVar13;
        local_50 = (int)lVar9;
        if (*(int *)(pcVar8 + 0xc) <= local_50) break;
        local_68 = *(char **)(*(int64_t *)(pcVar8 + 0x10) + lVar9 * 8);
        pvVar5 = _pthread_getspecific(pVar12);
        if ((pvVar5 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar12 = (void*)local_40;
        }
        dVar16 = (double)FUN_01264170();
        pvVar5 = _pthread_getspecific(pVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        lVar10 = CONCAT71(uStack_87,local_88);
        if (local_80 == '\0') {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        FUN_00d23310();
        pcVar13 = local_78;
        local_38[0] = local_70[0];
        pcVar14 = local_38;
        pcVar11 = local_70;
        if (local_70[0] == '\0') {
          pcVar11 = pcVar14;
        }
        *pcVar11 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
          FUN_00d50b20();
        }
        pVar12 = (void*)pcVar14;
        local_98 = (double)FUN_00d45bc0();
        cVar3 = FUN_019a9840();
        if (cVar3 != '\0') {
          pvVar5 = _pthread_getspecific(pVar12);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_98 = (double)FUN_012f8ad0(local_98);
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01a42180(local_98);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (pcVar13 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0xe20))();
        FUN_00d23310();
        pcVar14 = local_78;
        local_38[0] = local_70[0];
        pcVar13 = local_38;
        pcVar11 = local_70;
        if (local_70[0] == '\0') {
          pcVar11 = pcVar13;
        }
        *pcVar11 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if (pcVar14 == local_40) {
          pcVar11 = local_40;
          if ((local_38[0] != '\0') && (pcVar14 != (char *)0x0)) {
            FUN_00d50b20();
            pcVar11 = local_40;
          }
        }
        else {
          pcVar11 = pcVar14;
          if (local_38[0] == '\0') {
            if (pcVar14 != (char *)0x0) {
              FUN_00d50b00();
            }
            if (local_40 != (char *)0x0) {
              FUN_00d50b20();
            }
          }
          else if (local_40 != (char *)0x0) {
            FUN_00d50b20();
          }
        }
        local_40 = pcVar11;
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (char *)0x0) {
          local_40 = (char *)0x0;
          break;
        }
        pvVar5 = _pthread_getspecific((void*)pcVar13);
        if ((pvVar5 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pcVar13 = local_40;
        }
        dVar17 = (double)FUN_01264170();
        lVar9 = lVar9 + 1;
        if ((dVar16 != dVar17) || (NAN(dVar16) || NAN(dVar17))) break;
      }
      FUN_00136b80();
    }
    uVar15 = CONCAT71((int7)((uint64_t)pcVar14 >> 8),0 < *(int *)(pcVar8 + 0xc));
    FUN_00d50b20();
    if (pcVar7 != (char *)0x0) {
      FUN_00d50b20();
    }
    pcVar7 = local_40;
    if (pcVar6 != (char *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    if (local_68 != (char *)0x0) goto LAB_019f4a18;
LAB_019f4a69:
    uVar15 = 0;
  }
  if (pcVar7 != (char *)0x0) {
    FUN_00d50b20();
  }
LAB_019f5827:
  return uVar15 & 0xffffffff;
}



// ============================================================
// 019f1a30
// ============================================================
// Function: FUN_019f1a30
// Address: 019f1a30
// Size: 2376 bytes
// Class: MUPitchSystemRulerView

void FUN_019f1a30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  int64_t lVar8;
  void *pvVar9;
  char *pcVar10;
  void*puVar11;
  char *pcVar12;
  void* pVar13;
  int iVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  bVar3 = true;
  if (((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) &&
     (cVar7 = (**(code **)(&UNK_000015d8 + *this_ptr))(), cVar7 != '\0')) {
    bVar3 = *(int *)(this_ptr[0x3d] + 0xc) < 2;
  }
  FUN_0199e1b0();
  FUN_00d216c0();
  (**(code **)(*this_ptr + 0xaa8))();
  FUN_00d21370();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    return;
  }
  FUN_00323290();
  plVar4 = local_70;
  if (((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  cVar7 = FUN_019a9840();
  plVar1 = (int64_t *)*arg1;
  if (cVar7 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = plVar1;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar14 = -local_58._4_4_;
          }
          else {
            iVar14 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar14);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar14 = 0;
          }
          local_58 = CONCAT44(iVar14,(int)local_58);
        }
        lVar8 = (int64_t)(int)local_58;
        iVar14 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar14);
        if (*(int *)((int64_t)local_60 + 0xc) <= iVar14) break;
        local_70 = *(int64_t **)(local_60[2] + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((void*)local_60[2]);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar1 = (int64_t *)CONCAT71(uStack_7f,local_80);
        if (local_78 == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
  }
  else if (plVar1 != (int64_t *)0x0) {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = plVar1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar14 = -local_58._4_4_;
        }
        else {
          iVar14 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar14 = 0;
        }
        local_58 = CONCAT44(iVar14,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar14 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar14);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar14) break;
      local_70 = *(int64_t **)(local_60[2] + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)local_60[2]);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      plVar1 = local_48;
      local_80 = local_40[0];
      pcVar10 = &local_80;
      pcVar12 = local_40;
      if (local_40[0] == '\0') {
        pcVar12 = pcVar10;
      }
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)pcVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      local_38[0] = local_40[0];
      pcVar10 = local_40;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
      }
      *pcVar10 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == (int64_t *)0x0) {
        local_40[0] = '\0';
        local_48 = plVar1;
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        FUN_00d235a0();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_80 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar10 = &g_02572358;
  *puVar11 = &g_02572358;
  (*g_02572370)();
  cVar7 = FUN_019a9840();
  if (cVar7 == '\0') {
    (**(code **)(*this_ptr + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f222b;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_019f222b:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (void*)pcVar10;
          plVar2 = *(int64_t **)(plVar1[2] + lVar8 * 8);
          local_70 = plVar2;
          (**(code **)(*plVar2 + 0x928))();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar5 = local_48;
          local_38[0] = local_40[0];
          pcVar10 = local_38;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          local_40[0] = '\0';
          local_48 = plVar5;
          cVar7 = FUN_00d23d70();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar7 == '\0') {
            local_40[0] = '\0';
            local_48 = plVar2;
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
      goto LAB_019f23b7;
    }
  }
  else {
    (**(code **)(*this_ptr + 0xaa8))();
    plVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019f1f4a;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_019f1f4a:
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = plVar1;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          pVar13 = (void*)pcVar10;
          plVar2 = *(int64_t **)(plVar1[2] + lVar8 * 8);
          local_70 = plVar2;
          (**(code **)(*plVar2 + 0x928))();
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar5 = local_48;
          local_38[0] = local_40[0];
          pcVar10 = local_38;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar13 = (void*)pcVar10;
          if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4d60();
          plVar6 = local_48;
          local_80 = local_40[0];
          pcVar10 = &local_80;
          pcVar12 = local_40;
          if (local_40[0] == '\0') {
            pcVar12 = pcVar10;
          }
          *pcVar12 = '\0';
          if ((local_40[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (int64_t *)0x0) {
            local_40[0] = '\0';
            local_48 = plVar5;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_40[0] = '\0';
            local_48 = plVar6;
            cVar7 = FUN_00d23d70();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar7 == '\0') {
              local_40[0] = '\0';
              local_48 = plVar2;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_80 != '\0') {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((int64_t)plVar1 + 0xc));
      }
      FUN_01a02090();
      FUN_00d50b20();
LAB_019f23b7:
      if (puVar11 == (void*)0x0) goto LAB_019f23cb;
    }
  }
  FUN_00d50b20();
LAB_019f23cb:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019ef560
// ============================================================
// Function: FUN_019ef560
// Address: 019ef560
// Size: 1612 bytes
// Class: MUPitchSystemRulerView

void FUN_019ef560(double param_1)

{
  char cVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  void* pVar7;
  int64_t *plVar8;
  int unaff_ESI;
  int iVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint64_t extraout_XMM0_Qa;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint32_t local_64;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if (unaff_ESI == 0) {
LAB_019ef68b:
    uVar2 = 0;
    local_70 = (int64_t *)0x0;
    plVar8 = (int64_t *)this_ptr[0x89];
joined_r0x019ef69f:
    if (plVar8 != (int64_t *)0x0) {
      local_58 = 0;
      uVar2 = FUN_00d50b00();
    }
    local_58 = '\0';
    local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    plVar10 = (int64_t *)0x0;
    local_88 = plVar8;
    local_60 = plVar8;
    if (plVar8 == (int64_t *)0x0) goto LAB_019ef670;
LAB_019ef6c2:
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = local_88;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar3 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
      local_b8 = *(int64_t **)(local_50[2] + 8 + lVar3 * 8);
      local_b0 = '\0';
      local_60 = local_b8;
      (**(code **)(*this_ptr + 0xab0))(local_50[2],&local_b8);
      plVar8 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x9b0))(g_02390124);
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if ((char)local_64 != '\0') goto LAB_019ef681;
LAB_019ef80d:
    local_58 = '\0';
    local_60 = plVar10;
    FUN_00d243f0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar2 = (**(code **)(*this_ptr + 0x9b8))(g_023944d8 + param_1,g_023944e0);
    plVar10 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_019ef68b;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (int64_t *)0x0) {
      plVar8 = (int64_t *)this_ptr[0x89];
      local_70 = local_60;
      goto joined_r0x019ef69f;
    }
    FUN_00550890();
    plVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) {
        plVar8 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = '\0';
    }
    local_64 = 0;
    local_70 = plVar10;
    local_88 = plVar8;
    if (plVar8 != (int64_t *)0x0) goto LAB_019ef6c2;
LAB_019ef670:
    if ((char)local_64 == '\0') goto LAB_019ef80d;
LAB_019ef681:
    FUN_00d216c0();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this_ptr + 0x20))();
  cVar1 = (**(code **)(*local_60 + 0x50))();
  uVar2 = extraout_XMM0_Qa;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar2 = FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    plVar10 = (int64_t *)this_ptr[0x89];
    if ((int)this_ptr[0x8a] == 0) {
      if (plVar10 == (int64_t *)0x0) goto LAB_019efb98;
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = plVar10;
      if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
        lVar3 = 0;
        do {
          local_a8 = *(int64_t **)(plVar10[2] + lVar3 * 8);
          local_a0 = '\0';
          local_60 = local_a8;
          uVar2 = (**(code **)(*this_ptr + 0xab0))(uVar2,&local_a8);
          plVar8 = local_80;
          local_38[0] = local_78[0];
          pcVar6 = local_78;
          if (local_78[0] == '\0') {
            pcVar6 = local_38;
          }
          *pcVar6 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if ((plVar8 != (int64_t *)0x0) &&
             (uVar2 = (**(code **)(*plVar8 + 0x9b0))(g_02390124), local_38[0] != '\0')) {
            uVar2 = FUN_00d50b20();
          }
          lVar3 = lVar3 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar3);
        } while ((int)lVar3 < *(int *)((int64_t)plVar10 + 0xc));
      }
    }
    else {
      if (plVar10 == (int64_t *)0x0) goto LAB_019efb98;
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = plVar10;
      if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
        lVar3 = 0;
        do {
          local_98 = *(int64_t **)(plVar10[2] + lVar3 * 8);
          local_90 = '\0';
          local_60 = local_98;
          uVar2 = (**(code **)(*this_ptr + 0xab0))(uVar2,&local_98);
          plVar8 = local_80;
          local_38[0] = local_78[0];
          pcVar6 = local_38;
          pcVar4 = local_78;
          if (local_78[0] == '\0') {
            pcVar4 = pcVar6;
          }
          *pcVar4 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          pVar7 = (void*)pcVar6;
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar11 = (double)FUN_0125a280();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_01264170();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_01264170();
            uVar2 = (**(code **)(*plVar8 + 0x9b0))((float)((dVar12 - (param_1 - dVar11)) / dVar13));
            if (local_38[0] != '\0') {
              uVar2 = FUN_00d50b20();
            }
          }
          lVar3 = lVar3 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar3);
        } while ((int)lVar3 < *(int *)((int64_t)plVar10 + 0xc));
      }
    }
    FUN_001159b0();
  }
LAB_019efb98:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019f1280
// ============================================================
// Function: FUN_019f1280
// Address: 019f1280
// Size: 1318 bytes
// Class: MUPitchSystemRulerView

void FUN_019f1280(void)

{
  uint8_t auVar1 [16];
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t in_XMM1 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((int64_t *)this_ptr[0x97] == (int64_t *)0x0) {
    if (*arg1 == 0) {
      return;
    }
    lVar6 = 0;
LAB_019f13c6:
    lVar5 = 0;
    lVar4 = *arg1;
    if (lVar4 == 0) goto joined_r0x019f1511;
  }
  else {
    cVar3 = (**(code **)(*(int64_t *)this_ptr[0x97] + 0x50))();
    bVar7 = true;
    if (cVar3 != '\0') {
      if (this_ptr[0x97] == 0) {
        bVar7 = *arg1 != 0;
      }
      else {
        bVar7 = false;
      }
    }
    if (!bVar7) {
      return;
    }
    lVar6 = this_ptr[0x97];
    if (lVar6 == 0) goto LAB_019f13c6;
    uVar8 = FUN_01e436c0();
    FUN_00d45bc0();
    uVar9 = (**(code **)(*this_ptr + 0x938))();
    auVar12._0_4_ = g_023945e0 & (uint)(float)uVar9;
    auVar12._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar9 >> 0x20);
    auVar12._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_00;
    auVar12._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    auVar11._4_12_ = SUB1612(auVar12 | g_023945f0,4);
    auVar11._0_4_ = SUB164(auVar12 | g_023945f0,0) + (float)uVar9;
    auVar12 = roundss(auVar11,auVar11,0xb);
    auVar10._8_8_ = extraout_XMM0_Qb;
    auVar10._0_8_ = uVar8;
    auVar10 = blendps(auVar10,auVar12,1);
    in_XMM1 = blendps(in_XMM1,g_023b1630,0xd);
    FUN_00d05530(auVar10._0_8_,in_XMM1._0_8_,g_02390d34);
    (**(code **)(*this_ptr + 0x618))();
    lVar5 = this_ptr[0x97];
    lVar4 = *arg1;
    if (lVar5 == lVar4) goto joined_r0x019f1511;
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  this_ptr[0x97] = lVar4;
  bVar7 = lVar5 != 0;
  lVar5 = lVar4;
  if (bVar7) {
    FUN_00d50b20();
    lVar5 = this_ptr[0x97];
  }
joined_r0x019f1511:
  if (lVar5 == 0) {
    if ((*(float *)(this_ptr + 0x98) != 0.0) || (NAN(*(float *)(this_ptr + 0x98)))) {
      *(void*)(this_ptr + 0x98) = 0;
    }
  }
  else {
    uVar8 = FUN_01e436c0();
    FUN_00d45bc0();
    uVar9 = (**(code **)(*this_ptr + 0x938))();
    auVar13._0_4_ = g_023945e0 & (uint)(float)uVar9;
    auVar13._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar9 >> 0x20);
    auVar13._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_02;
    auVar13._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    auVar14._4_12_ = SUB1612(auVar13 | g_023945f0,4);
    auVar14._0_4_ = SUB164(auVar13 | g_023945f0,0) + (float)uVar9;
    auVar10 = roundss(auVar14,auVar14,0xb);
    auVar1._8_8_ = extraout_XMM0_Qb_01;
    auVar1._0_8_ = uVar8;
    auVar10 = blendps(auVar1,auVar10,1);
    auVar12 = blendps(in_XMM1,g_023b1630,0xd);
    FUN_00d05530(auVar10._0_8_,auVar12._0_8_,g_02390d34);
    (**(code **)(*this_ptr + 0x618))();
    if (lVar6 == 0) {
      FUN_00d50b00();
      local_b0 = g_027e14b8;
      if (g_027e14b8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      FUN_00d46dc0();
      lVar6 = local_90;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      FUN_00d46dc0();
      local_50 = local_80;
      local_48 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_48 = '\x01';
      FUN_01f981c0(g_02420b10,&local_b0,&local_50,2);
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01f97770();
      local_a0 = plVar2;
      local_98 = '\0';
      FUN_01f979c0();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x368))();
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 019f2c90
// ============================================================
// Function: FUN_019f2c90
// Address: 019f2c90
// Size: 1874 bytes
// Class: MUPitchSystemRulerView

void FUN_019f2c90(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void* pVar4;
  void*puVar5;
  void*puVar6;
  void*arg1;
  void*this_ptr;
  int iVar7;
  int local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  puVar6 = (void*)*arg1;
  if (puVar6 != (void*)0x0) {
    local_78 = -1;
    while (local_78 = local_78 + 1, local_78 < *(int *)(puVar6 + 0xc)) {
      pVar4 = (void*)*(void*)(puVar6 + 0x10);
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == 0) {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        FUN_00dd6a00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = local_40;
        local_48 = '\0';
        FUN_00d235a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        FUN_00dd6a00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = local_40;
        local_48 = '\0';
        FUN_00d235a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    puVar5 = puVar6;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar7 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)puVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          pvVar3 = _pthread_getspecific((void*)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          FUN_00dd6a00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d235a0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar3 = _pthread_getspecific((void*)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4d60();
          FUN_00dd6a00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d235a0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        local_48 = '\0';
        local_50 = local_40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  FUN_00d242c0();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 019f4110
// ============================================================
// Function: FUN_019f4110
// Address: 019f4110
// Size: 1224 bytes
// Class: MUPitchSystemRulerView

uint64_t FUN_019f4110(uint64_t param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  void* pVar3;
  char *pcVar4;
  int64_t *this_ptr;
  uint64_t unaff_R15;
  uint64_t uVar5;
  int64_t local_c8;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 1) {
    (**(code **)(*this_ptr + 0xe20))();
    FUN_00d23310();
    pVar3 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01270ab0();
    if (local_48 == 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      uVar5 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),local_98 == 0);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar5 = 0;
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\x01' && (char)uVar5 == '\0') {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012708c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d50b00();
        FUN_01a43090(&stack0xffffffffffffff78,&local_c8);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    uVar5 = uVar5 ^ 1;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 019f0970
// ============================================================
// Function: FUN_019f0970
// Address: 019f0970
// Size: 669 bytes
// Class: MUPitchSystemRulerView
// String references:
//   "MUPitchSystemRulerView"

void FUN_019f0970(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint8_t unaff_SIL;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x970))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&g_000015c0 + *this_ptr))();
  (**(code **)(*plVar1 + 0x958))(*plVar1,unaff_SIL);
  pplVar5 = &local_40;
  FUN_01d98320();
  plVar1 = local_40;
  if ((g_027366a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f9768 = FUN_0006d940();
    g_026f9750 = "MUPitchSystemRulerView";
    g_026f9758 = 0x168;
    g_026f9760 = FUN_002757e0;
    g_026f9770 = 0;
    ram_00000000026f9778 = 0;
    g_026f9780 = 0;
    g_026f97f8 = 0;
    ram_00000000026f9800 = 0;
    g_026f9808 = 0;
    g_026f980a = 1;
    g_026f9788 = 0;
    ram_00000000026f9790 = 0;
    g_026f9798 = 0;
    ram_00000000026f97a0 = 0;
    g_026f97a8 = 0;
    ram_00000000026f97b0 = 0;
    g_026f97b8 = 0;
    ram_00000000026f97c0 = 0;
    g_026f97c8 = 0;
    ram_00000000026f97d0 = 0;
    g_026f97d8 = 0;
    ram_00000000026f97e0 = 0;
    g_026f97e8 = 0;
    ram_00000000026f97f0 = 0;
    g_026f9813 = 0;
    g_026f980b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f0a32:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019f0a32;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa28))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_019f0b23;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 != (int64_t *)0x0) && (plVar2 != (int64_t *)0x0)) {
    (**(code **)(*plVar1 + 0x928))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != plVar2) {
      (**(code **)(*plVar1 + 0x930))();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_019f0b23:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 019f3af0
// ============================================================
// Function: FUN_019f3af0
// Address: 019f3af0
// Size: 936 bytes
// Class: MUPitchSystemRulerView

void* FUN_019f3af0(uint64_t param_1,double param_2)

{
  bool bVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  void*puVar5;
  int64_t *in_RDX;
  int64_t *arg1;
  void*this_ptr;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  
  dVar7 = (double)(**(code **)(*arg1 + 0xa50))();
  if (((char)arg1[0x9f] != '\0') || (cVar2 = FUN_019a9840(), cVar2 == '\0')) {
    (**(code **)(*arg1 + 0x9b8))(dVar7,param_2);
    return this_ptr;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*in_RDX == 0) {
    (**(code **)(*arg1 + 0x988))();
    if (local_78 == 0) goto LAB_019f3e9e;
    bVar1 = true;
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_000ba510();
    if (local_78 == 0) {
      bVar1 = false;
    }
    else if (local_70 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      param_2 = param_2 + dVar7;
      iVar6 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f7cb0();
        pvVar4 = _pthread_getspecific((void*)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_012f9490();
        if ((dVar8 <= param_2) && (dVar7 <= dVar9)) {
          pvVar4 = _pthread_getspecific((void*)puVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = dVar7;
          if (dVar7 <= dVar8) {
            dVar10 = dVar8;
          }
          dVar8 = param_2;
          if (dVar9 <= param_2) {
            dVar8 = dVar9;
          }
          FUN_012e9900(dVar10,dVar8 - dVar10);
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          FUN_00d214d0();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_78 + 0xc));
    }
    FUN_000be170();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar1) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_019f3e9e:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 019f2910
// ============================================================
// Function: FUN_019f2910
// Address: 019f2910
// Size: 537 bytes
// Class: MUPitchSystemRulerView

void FUN_019f2910(void)

{
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  if ((char)this_ptr[0x9a] != unaff_SIL) {
    *(char *)(this_ptr + 0x9a) = unaff_SIL;
    if (unaff_SIL == '\0') {
      FUN_00d46dc0(0);
      local_40 = local_30;
      local_38 = 0;
      local_60 = g_027e14c0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_60 = g_027e14c0;
        }
      }
      else {
        local_28 = '\0';
      }
      local_38 = '\x01';
      g_027e14c0 = local_60;
      if (local_60 != 0) {
        local_38 = '\x01';
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*this_ptr + 0x408))(&local_60,&local_40);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (this_ptr[0x9e] != 0) {
        this_ptr[0x9e] = 0;
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      local_50 = local_30;
      local_48 = 0;
      local_70 = g_027e14c0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_70 = g_027e14c0;
        }
      }
      else {
        local_28 = '\0';
      }
      local_48 = '\x01';
      g_027e14c0 = local_70;
      if (local_70 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*this_ptr + 0x408))(&local_70,&local_50);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x620))();
  }
  return;
}



// ============================================================
// 00810180
// ============================================================
// Function: FUN_00810180
// Address: 00810180
// Size: 555 bytes
// Class: MUPitchSystemRulerView
// String references:
//   "MUPitchSystemRulerView"

void FUN_00810180(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_1a8;
  int64_t local_1a0;
  
  if ((g_027366a0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f9768 = FUN_0006d940();
    g_026f9750 = "MUPitchSystemRulerView";
    g_026f9758 = 0x168;
    g_026f9760 = FUN_002757e0;
    g_026f9770 = 0;
    ram_00000000026f9778 = 0;
    g_026f9780 = 0;
    g_026f97f8 = 0;
    ram_00000000026f9800 = 0;
    g_026f9808 = 0;
    g_026f980a = 1;
    g_026f9788 = 0;
    ram_00000000026f9790 = 0;
    g_026f9798 = 0;
    ram_00000000026f97a0 = 0;
    g_026f97a8 = 0;
    ram_00000000026f97b0 = 0;
    g_026f97b8 = 0;
    ram_00000000026f97c0 = 0;
    g_026f97c8 = 0;
    ram_00000000026f97d0 = 0;
    g_026f97d8 = 0;
    ram_00000000026f97e0 = 0;
    g_026f97e8 = 0;
    ram_00000000026f97f0 = 0;
    g_026f9813 = 0;
    g_026f980b = 0;
    ___cxa_guard_release();
  }
  if (g_026f980b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_00839940();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    if (local_1a8 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}

