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

