// Function: FUN_01eb0e90
// Address: 01eb0e90
// Size: 1313 bytes
// Class: Unknown

void FUN_01eb0e90(uint64_t param_1,double *param_2)

{
  uint uVar1;
  char *pcVar2;
  int64_t lVar3;
  double *arg1;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar17;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  float fVar16;
  
  local_40[0] = '\0';
  FUN_00d23310();
  local_48[0] = local_60[0];
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_48;
  }
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_58 = local_68;
  local_50[0] = local_48[0] != '\0';
  pcVar2 = local_50;
  if ((bool)local_50[0]) {
    pcVar2 = local_48;
  }
  *pcVar2 = '\0';
  if ((local_48[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  local_38[0] = local_60[0];
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_48[0] = local_38[0] != '\0';
  pcVar2 = local_48;
  if ((bool)local_48[0]) {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  fVar10 = (float)*arg1;
  lVar4 = local_68;
  if (0.0 < fVar10) {
LAB_01eb0fee:
    lVar4 = 0;
  }
  else {
    FUN_00d23310();
    local_38[0] = local_60[0];
    pcVar2 = local_60;
    if (local_60[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == 0) goto LAB_01eb0fee;
    if (local_38[0] == '\0') {
      local_40[0] = '\0';
    }
    else {
      local_40[0] = '\x01';
      local_38[0] = '\0';
    }
  }
  lVar6 = local_58;
  if (fVar10 < g_02390124) goto LAB_01eb10d8;
  FUN_00d23340();
  local_38[0] = local_60[0];
  pcVar2 = local_38;
  pcVar7 = local_60;
  if (local_60[0] == '\0') {
    pcVar7 = pcVar2;
  }
  *pcVar7 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == lVar4) {
    if (((local_40[0] == '\0') && (local_68 != 0)) && (local_38[0] != '\0')) {
      local_40[0] = '\x01';
      goto LAB_01eb10bc;
    }
  }
  else {
    bVar8 = lVar4 != 0;
    if (local_38[0] == '\0') {
      pcVar2 = local_40;
      lVar4 = local_68;
      if (bVar8 && local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      if (bVar8 && local_40[0] != '\0') {
        FUN_00d50b20();
      }
      local_40[0] = '\x01';
      lVar4 = local_68;
    }
LAB_01eb10bc:
    *pcVar2 = '\0';
  }
  lVar6 = local_58;
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
LAB_01eb10d8:
  if (lVar4 == 0) {
    if (*(int *)(local_68 + 0xc) < 2) {
      lVar4 = 0;
    }
    else {
      lVar3 = 1;
      lVar4 = 0;
      lVar5 = 0;
      do {
        fVar11 = (float)FUN_00d459e0();
        if (fVar10 <= fVar11) {
          fVar9 = (float)FUN_00d459e0();
          fVar10 = (fVar10 - fVar9) / (fVar11 - fVar9);
          lVar4 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + (lVar5 >> 0x20) * 8);
          if (lVar4 != 0) {
            local_40[0] = '\0';
          }
          lVar6 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar3 * 8);
          fVar11 = (*(float *)(lVar6 + 0x10) - *(float *)(lVar4 + 0x10)) * fVar10 +
                   *(float *)(lVar4 + 0x10);
          fVar9 = (float)*(void*)(lVar4 + 0x14);
          fVar16 = (float)((uint64_t)*(void*)(lVar4 + 0x14) >> 0x20);
          fVar9 = fVar10 * ((float)*(void*)(lVar6 + 0x14) - fVar9) + fVar9;
          fVar16 = fVar10 * ((float)((uint64_t)*(void*)(lVar6 + 0x14) >> 0x20) - fVar16) +
                   fVar16;
          uVar13 = CONCAT44(fVar16,fVar9);
          fVar10 = (*(float *)(lVar6 + 0x1c) - *(float *)(lVar4 + 0x1c)) * fVar10 +
                   *(float *)(lVar4 + 0x1c);
          if (g_02802fb8 == 0x0) goto LAB_01eb1142;
          fVar17 = g_02390124;
          if (fVar11 <= g_02390124) {
            fVar17 = fVar11;
          }
          fVar11 = g_02390124;
          if (fVar10 <= g_02390124) {
            fVar11 = fVar10;
          }
          fVar10 = g_02390124;
          if (fVar9 <= g_02390124) {
            fVar10 = fVar9;
          }
          fVar9 = g_02390124;
          if (fVar16 <= g_02390124) {
            fVar9 = fVar16;
          }
          auVar14 = ZEXT416((uint)((float)((uint)(fVar11 * g_02394220) & g_023945e0 |
                                          g_02394dc8) + fVar11 * g_02394220));
          roundss(auVar14,auVar14,0xb);
          auVar14 = ZEXT416((uint)((float)((uint)(fVar17 * g_02394220) & g_023945e0 |
                                          g_02394dc8) + fVar17 * g_02394220));
          roundss(auVar14,auVar14,0xb);
          auVar14 = ZEXT416((uint)((float)((uint)(fVar10 * g_02394220) & g_023945e0 |
                                          g_02394dc8) + fVar10 * g_02394220));
          auVar15 = roundss(auVar14,auVar14,0xb);
          fVar9 = fVar9 * g_02394220;
          auVar14 = ZEXT416((uint)((float)(g_023945e0 & (uint)fVar9 | g_02394dc8) + fVar9));
          auVar14 = roundss(auVar14,auVar14,0xb);
          uVar1 = (*g_02802fb8)(g_02802fb8,(int)auVar14._0_4_,fVar9,auVar15._0_8_);
          fVar10 = (float)(uVar1 >> 0x18) / g_02394220;
          fVar11 = (float)(uVar1 >> 0x10 & 0xff) / g_02394220;
          uVar12 = CONCAT44((float)(int)(uVar1 & _UNK_024225c4),(float)(uVar1 >> 8 & g_024225c0))
          ;
          goto LAB_01eb113b;
        }
        lVar3 = lVar3 + 1;
        lVar5 = lVar5 + 0x100000000;
        lVar6 = local_58;
      } while (lVar3 < *(int *)(local_68 + 0xc));
    }
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0xc);
    if (g_02802fb8 != 0x0) {
      uVar1 = (*g_02802fb8)();
    }
    fVar10 = (float)(uVar1 >> 0x18) / g_02394220;
    fVar11 = (float)(uVar1 >> 0x10 & 0xff) / g_02394220;
    uVar12 = CONCAT44((float)(int)(uVar1 & _UNK_024225c4),(float)(uVar1 >> 8 & g_024225c0));
    local_58 = lVar6;
LAB_01eb113b:
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar12;
    auVar14 = divps(auVar14,g_024225d0);
    uVar13 = auVar14._0_8_;
LAB_01eb1142:
    *param_2 = (double)fVar11;
    param_2[1] = (double)(float)uVar13;
    param_2[2] = (double)(float)((uint64_t)uVar13 >> 0x20);
    param_2[3] = (double)fVar10;
    lVar6 = local_58;
  }
  if ((local_48[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}

