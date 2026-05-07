// Function: FUN_0196c5e0
// Address: 0196c5e0
// Size: 2955 bytes
// Class: MUSampledFunction

void FUN_0196c5e0(void* param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  code *pcVar7;
  undefined7 uVar13;
  float *pfVar8;
  uint64_t uVar9;
  int64_t lVar10;
  code *pcVar11;
  uint64_t uVar12;
  code *pcVar14;
  uint64_t uVar15;
  float *arg1;
  int64_t this_ptr;
  code *pcVar16;
  uint64_t uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  int64_t local_110;
  uint8_t local_108;
  int64_t local_100;
  uint8_t local_f8;
  code *local_f0;
  uint8_t local_e8;
  void*local_e0;
  code *local_d8;
  float local_d0;
  float local_cc;
  double local_c8;
  code *local_c0;
  uint local_b4;
  double local_b0;
  uint64_t local_a8;
  uint32_t local_a0;
  float local_9c;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint local_7c;
  double local_78;
  code *local_60;
  float local_54;
  code *local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ec20();
  if (local_38 == '\0') {
    if (local_40 == 0x0) {
      return;
    }
    local_c0 = local_40;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = local_40;
    if (local_40 == 0x0) {
      return;
    }
  }
  FUN_01989f80();
  local_b0 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1);
  if ((local_38 != '\0') && (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  pcVar14 = local_40;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a280();
  local_d0 = (float)(**(code **)(*(int64_t *)pcVar14 + 0x938))();
  local_d0 = local_d0 - *arg1;
  if ((local_38 != '\0') && (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  FUN_01964590();
  fVar19 = (float)FUN_0198a7d0();
  local_cc = (fVar19 + *(float *)(this_ptr + 0x1bc) * g_0241b660) - arg1[1];
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  local_50 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0x0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  pcVar14 = local_40;
  local_60 = local_40;
  pcVar7 = local_40;
  if (((local_38 == '\0') && (local_40 != 0x0)) &&
     ((pcVar7 = FUN_00d50b00(), local_38 != '\0' && (local_40 != 0x0)))) {
    pcVar7 = FUN_00d50b20();
  }
  uVar13 = (undefined7)((uint64_t)pcVar7 >> 8);
  local_90 = CONCAT71(uVar13,1);
  if (local_50 == 0x0) {
    uVar17 = 0;
    local_a8 = CONCAT71(uVar13,1);
    local_88 = CONCAT71(uVar13,1);
joined_r0x0196c98f:
    if (pcVar14 == 0x0) goto LAB_0196cae6;
LAB_0196c9ba:
    local_54 = g_02390d00 + arg1[2];
    local_90 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
    if ((local_54 < 0.0) || (local_54 < arg1[2] + g_023b1608)) goto LAB_0196cae6;
    local_7c = (uint)uVar17;
    do {
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + local_54);
      lVar10 = *(int64_t *)(this_ptr + 0x178);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_f8 = 1;
      local_100 = lVar10;
      uVar9 = FUN_0196da90(SUB84(local_78 - local_b0,0),&local_41);
      bVar4 = (byte)uVar9;
      if (lVar10 != 0) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0x0)) {
        uVar9 = FUN_00d50b20();
      }
      local_54 = local_54 + g_02390d00;
      bVar3 = g_0239424c <= local_54 & bVar4;
      if (bVar3 != 1) {
        pfVar8 = (float *)CONCAT71((int7)((uint64_t)uVar9 >> 8),bVar3);
        if (bVar4 == 0) {
          FUN_00d50b20();
          uVar17 = (uint64_t)local_7c;
          uVar15 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
          local_60 = 0x0;
          local_90 = 0;
          local_9c = arg1[2];
          bVar18 = true;
          goto LAB_0196cafe;
        }
        break;
      }
      pfVar8 = arg1;
    } while (arg1[2] + g_023b1608 <= local_54);
    local_90 = CONCAT71((int7)((uint64_t)pfVar8 >> 8),1);
    uVar15 = 0;
    uVar17 = (uint64_t)local_7c;
    local_9c = arg1[2];
    if (pcVar14 == 0x0) {
      bVar18 = true;
      goto LAB_0196cafe;
    }
  }
  else {
    fVar19 = 0.0;
    do {
      pfVar8 = arg1;
      if (arg1[2] <= fVar19) goto LAB_0196c9a1;
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
      lVar10 = *(int64_t *)(this_ptr + 0x178);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_108 = 1;
      local_110 = lVar10;
      uVar9 = FUN_0196da90(SUB84(local_78 - local_b0,0),&local_41);
      bVar4 = (byte)uVar9;
      if (lVar10 != 0) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0x0)) {
        uVar9 = FUN_00d50b20();
      }
      fVar19 = fVar19 + g_02390124;
      pfVar8 = (float *)CONCAT71((int7)((uint64_t)uVar9 >> 8),fVar19 < g_02390d34);
    } while ((bVar4 & fVar19 < g_02390d34) != 0);
    if (bVar4 == 0) {
      FUN_00d50b20();
      uVar17 = CONCAT71((int7)((uint64_t)&local_110 >> 8),1);
      local_50 = 0x0;
      local_a8 = 0;
      local_88 = 0;
      goto joined_r0x0196c98f;
    }
LAB_0196c9a1:
    uVar13 = (undefined7)((uint64_t)pfVar8 >> 8);
    local_a8 = CONCAT71(uVar13,1);
    uVar17 = 0;
    local_88 = CONCAT71(uVar13,1);
    if (pcVar14 != 0x0) goto LAB_0196c9ba;
LAB_0196cae6:
    uVar15 = 0;
    local_9c = arg1[2];
    bVar18 = true;
    if (pcVar14 == 0x0) goto LAB_0196cafe;
  }
  bVar18 = pcVar14 == 0x0;
  uVar15 = 0;
  local_9c = local_9c + g_02390d34;
LAB_0196cafe:
  bVar4 = !bVar18 & (byte)local_90;
  fVar19 = 0.0;
  if (local_50 != 0x0) {
    fVar19 = g_023b1608;
  }
  if (fVar19 < local_9c) {
    local_7c = (uint)uVar17;
    local_b4 = (uint)uVar15;
    bVar3 = local_50 != 0x0 & (byte)local_a8;
    local_d8 = g_02680418;
    pcVar11 = 0x0;
    local_e0 = &g_02680400;
    uVar9 = 0;
    local_98 = 0;
    pcVar14 = g_02680418;
    pcVar7 = 0x0;
    do {
      cVar5 = (char)uVar9;
      if (0.0 <= fVar19) {
        if (arg1[2] <= fVar19) {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
          pvVar6 = _pthread_getspecific((void*)pcVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c8 = (double)FUN_01264170();
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)((local_78 - local_b0) - local_c8);
          if (pcVar7 == local_60) {
            pcVar16 = local_60;
            if ((((byte)local_90 != '\0') && (pcVar16 = local_60, cVar5 == '\0')) &&
               (pcVar16 = local_60, local_60 != 0x0)) {
              FUN_00d50b00();
              pcVar16 = local_60;
              uVar9 = 1;
            }
          }
          else {
            if (bVar4 != 0) {
              FUN_00d50b00();
            }
            pcVar16 = local_60;
            uVar9 = local_90;
            if ((cVar5 != '\0') && (pcVar16 = local_60, uVar9 = local_90, pcVar7 != 0x0)) {
              FUN_00d50b20();
              pcVar16 = local_60;
              uVar9 = local_90;
            }
          }
        }
        else {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)(local_78 - local_b0);
          pcVar16 = *(code **)(this_ptr + 0x178);
          if (pcVar7 == pcVar16) {
            pcVar16 = pcVar7;
            if ((cVar5 == '\0') && (pcVar7 != 0x0)) {
              FUN_00d50b00();
              uVar9 = 1;
            }
          }
          else {
            if (pcVar16 != 0x0) {
              FUN_00d50b00();
            }
            uVar9 = 1;
            if ((cVar5 != '\0') && (pcVar7 != 0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        FUN_01989f80();
        local_78 = (double)(**(code **)(*(int64_t *)local_40 + 0x930))(*arg1 + fVar19);
        pvVar6 = _pthread_getspecific((void*)pcVar14);
        if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pcVar14 = local_50;
        }
        local_c8 = (double)FUN_01264170();
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          FUN_00d50b20();
        }
        local_78 = (local_78 - local_b0) + local_c8;
        pcVar16 = local_50;
        if (pcVar7 == local_50) {
          if ((((byte)local_a8 != '\0') && (cVar5 == '\0')) && (local_50 != 0x0)) {
            FUN_00d50b00();
            uVar9 = 1;
          }
        }
        else {
          if (bVar3 != 0) {
            FUN_00d50b00();
          }
          uVar9 = local_88;
          if ((cVar5 != '\0') && (pcVar7 != 0x0)) {
            FUN_00d50b20();
            uVar9 = local_88;
          }
        }
      }
      local_e8 = 0;
      local_f0 = pcVar16;
      cVar5 = FUN_0196da90(SUB84(local_78,0),&local_41);
      if (cVar5 == '\0') {
        if (pcVar11 != 0x0) {
          FUN_01d38ea0();
          iVar1 = *(int *)(local_40 + 0x18);
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
          if (0x37 < iVar1) {
            local_38 = '\0';
            local_40 = pcVar11;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != 0x0)) {
              FUN_00d50b20();
            }
          }
          if ((char)local_98 != '\0') {
            FUN_00d50b20();
          }
          local_98 = 0;
        }
        pcVar11 = 0x0;
      }
      else if (local_41 == '\0') {
        if (pcVar11 == 0x0) {
          pcVar11 = FUN_00e8fc40();
          FUN_00d4ff40();
          *(void**)pcVar11 = local_e0;
          *(void*)(pcVar11 + 0xc) = 0;
          *(int64_t *)(pcVar11 + 0x30) = 0;
          *(int64_t *)(pcVar11 + 0x38) = 0;
          *(void*)(pcVar11 + 0x39) = 0;
          *(void*)(pcVar11 + 0x41) = 0;
          (*local_d8)();
          uVar12 = FUN_01d38cd0(g_02421228);
          local_98 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
        fVar20 = (float)FUN_0198a7d0(local_a0);
        FUN_01d38ba0(local_d0 + fVar19,(fVar20 - arg1[1]) - local_cc);
      }
      fVar19 = fVar19 + g_02390124;
      pcVar7 = pcVar16;
    } while (fVar19 < local_9c);
    if (pcVar11 == 0x0) {
      bVar2 = true;
      bVar18 = true;
    }
    else {
      FUN_01d38ea0();
      iVar1 = *(int *)(local_40 + 0x18);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (0x37 < iVar1) {
        local_38 = '\0';
        local_40 = pcVar11;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = false;
      bVar18 = false;
    }
    if (((char)uVar9 != '\0') && (bVar18 = bVar2, pcVar16 != 0x0)) {
      FUN_00d50b20();
    }
    uVar15 = (uint64_t)local_b4;
    uVar17 = (uint64_t)local_7c;
    if ((char)local_98 != '\0' && !bVar18) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar15 == '\0' && local_60 != 0x0) {
    FUN_00d50b20();
  }
  if ((char)uVar17 == '\0' && local_50 != 0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

