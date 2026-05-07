// Function: FUN_007dc1e0
// Address: 007dc1e0
// Size: 2468 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_007dc1e0(void)

{
  uint uVar1;
  uint uVar2;
  void*puVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  undefined7 uVar8;
  void* pVar9;
  void*puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar13;
  bool bVar14;
  bool bVar15;
  uint64_t uVar16;
  double dVar17;
  double dVar18;
  double local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t local_80;
  char local_78;
  double local_70;
  void*local_68;
  uint64_t local_60;
  void*local_58;
  char local_50 [8];
  void*local_48;
  uint64_t local_40;
  uint64_t uVar19;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &g_02572358;
  *puVar3 = &g_02572358;
  uVar16 = (*g_02572370)();
  puVar7 = *(void**)(this_ptr + 0x38);
  if (puVar7 != (void*)0x0) {
    uVar16 = FUN_00d50b00();
  }
  local_50[0] = '\0';
  local_58 = puVar7;
  local_48 = puVar3;
  FUN_00d214d0(uVar16,*(void*)((int64_t)puVar3 + 0xc));
  if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  puVar7 = local_48;
  while (pVar9 = (void*)puVar10, *(int *)((int64_t)puVar7 + 0xc) != 0) {
    FUN_00d23340();
    puVar7 = local_58;
    local_90 = local_50[0];
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = &local_90;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (puVar7 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 == '\0') && (puVar7 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_007db680();
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar7 = local_48;
    FUN_00d23740();
  }
  if (*arg1 == 0) {
LAB_007dc576:
    bVar14 = false;
LAB_007dc58b:
    local_68 = (void*)0x0;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    if (local_58 == (void*)0x0) {
      bVar14 = false;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      bVar14 = CONCAT71(uStack_8f,local_90) != 0;
      if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar14) goto LAB_007dc576;
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    puVar7 = local_58;
    if (local_58 == (void*)0x0) {
      puVar7 = (void*)0x0;
      bVar14 = false;
    }
    else if (local_50[0] == '\0') {
      FUN_00d50b00();
      bVar14 = true;
      if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
      bVar14 = true;
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (puVar7 == (void*)0x0) goto LAB_007dc58b;
    uVar1 = *(uint *)((int64_t)puVar7 + 0xc);
    local_68 = puVar7;
    if (0 < (int)uVar1) {
      uVar11 = 0;
      puVar7 = (void*)0x0;
      local_40 = 0;
      uVar19 = 0;
      local_60 = 0;
      do {
        lVar6 = local_68[2];
        uVar13 = *(uint64_t *)(lVar6 + uVar11 * 8);
        uVar12 = uVar11;
        if (uVar19 == uVar13) {
          if (((char)local_60 == '\0') && (uVar19 != 0)) {
            local_60 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (uVar13 != 0) {
            lVar6 = FUN_00d50b00();
          }
          if (((char)local_60 == '\0') || (uVar19 == 0)) {
            local_60 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
            uVar19 = uVar13;
          }
          else {
            uVar16 = FUN_00d50b20();
            local_60 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
            uVar19 = uVar13;
          }
        }
        pvVar5 = _pthread_getspecific((void*)uVar12);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          uVar12 = uVar19;
        }
        local_70 = (double)FUN_0125a280();
        pvVar5 = _pthread_getspecific((void*)uVar12);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          uVar12 = uVar19;
        }
        local_98 = (double)FUN_01259520();
        pVar9 = (void*)uVar12;
        uVar2 = *(uint *)((int64_t)local_48 + 0xc);
        uVar13 = 0;
        if ((int)uVar2 < 1) {
LAB_007dcabe:
          puVar3 = puVar7;
          if ((uint)uVar13 == uVar2) goto LAB_007dcac7;
        }
        else {
          do {
            lVar6 = local_48[2];
            puVar3 = *(void**)(lVar6 + uVar13 * 8);
            if (puVar7 == puVar3) {
              if (((char)local_40 == '\0') && (puVar7 != (void*)0x0)) {
                local_40 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (puVar3 != (void*)0x0) {
                lVar6 = FUN_00d50b00();
              }
              if (((char)local_40 == '\0') || (puVar7 == (void*)0x0)) {
                local_40 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
                puVar7 = puVar3;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_40 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                puVar7 = puVar3;
              }
            }
            pvVar5 = _pthread_getspecific((void*)uVar12);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              uVar12 = uVar19;
            }
            local_70 = (double)FUN_0125a280();
            pvVar5 = _pthread_getspecific((void*)uVar12);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              uVar12 = uVar19;
            }
            local_98 = (double)FUN_01259520();
            pvVar5 = _pthread_getspecific((void*)uVar12);
            puVar3 = puVar7;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              puVar3 = (void*)puVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            dVar17 = (double)puVar3[7] + g_023944d8;
            pvVar5 = _pthread_getspecific((void*)uVar12);
            puVar3 = puVar7;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              puVar3 = (void*)puVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            pVar9 = (void*)uVar12;
            dVar18 = (double)puVar3[8] + g_02391030;
            if (((local_70 < local_98) && (dVar17 < dVar18)) &&
               (((dVar17 <= local_70 && (local_70 < dVar18)) ||
                ((dVar17 < local_98 && (local_70 <= dVar18)))))) {
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_007db120(local_70,local_98);
              goto LAB_007dcabe;
            }
            uVar13 = uVar13 + 1;
            puVar3 = puVar7;
          } while (uVar2 != uVar13);
LAB_007dcac7:
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &g_0250f460;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          uVar16 = FUN_00d500e0();
          uVar8 = (undefined7)((uint64_t)uVar16 >> 8);
          if (puVar7 == puVar3) {
            puVar7 = puVar3;
            if ((char)local_40 == '\0') {
              local_40 = CONCAT71(uVar8,1);
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            bVar15 = (char)local_40 != '\0';
            local_40 = CONCAT71(uVar8,1);
            if ((bVar15) && (puVar3 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar5 = _pthread_getspecific(pVar9);
          puVar3 = puVar7;
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            puVar3 = (void*)puVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          puVar3[7] = local_70;
          puVar3[8] = local_98;
          puVar3[9] = local_70;
          puVar3[10] = local_98;
          local_50[0] = '\0';
          local_58 = puVar7;
          FUN_00d21140();
          if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar1);
      goto LAB_007dc59a;
    }
  }
  uVar19 = 0;
  local_60 = 0;
  local_40 = 0;
  puVar7 = (void*)0x0;
LAB_007dc59a:
  uVar1 = *(uint *)((int64_t)local_48 + 0xc);
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      lVar6 = *(int64_t *)(local_48[2] + uVar11 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_007db550();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar11);
  }
  FUN_007db7b0();
  if (((char)local_60 != '\0') && (uVar19 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (puVar7 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

