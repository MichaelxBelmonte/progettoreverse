// Function: FUN_017fb9d0
// Address: 017fb9d0
// Size: 5785 bytes
// Class: Unknown

int64_t * FUN_017fb9d0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  char cVar11;
  uint uVar12;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar13;
  int iVar14;
  int64_t lVar15;
  bool bVar16;
  int64_t *local_res8;
  void*local_res20;
  uint64_t local_2b0;
  uint8_t local_2a8;
  int64_t local_2a0;
  uint8_t local_298;
  int64_t local_290;
  uint8_t local_288;
  int64_t local_280;
  uint8_t local_278;
  int64_t local_270;
  uint8_t local_268;
  int64_t local_260;
  uint8_t local_258;
  int64_t local_250;
  uint8_t local_248;
  int64_t local_240;
  uint8_t local_238;
  int64_t local_230;
  uint8_t local_228;
  uint8_t local_218;
  int64_t local_210;
  uint8_t local_208;
  int64_t local_200;
  uint8_t local_1f8;
  int64_t local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  int64_t local_1d0;
  uint8_t local_1c8;
  int64_t local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  uint8_t local_198;
  int64_t local_190;
  uint8_t local_188;
  int64_t local_180;
  uint8_t local_178;
  int64_t local_170;
  uint8_t local_168;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  char local_148;
  void*local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int local_9c;
  uint32_t local_98;
  uint32_t local_94;
  int64_t local_90;
  int64_t local_88;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  
  local_a8 = param_4;
  FUN_00c8e690();
  local_90 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (*(int *)(arg1 + 0x48) - 3U < 2) {
    FUN_017fd8b0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    if ((local_48 != 0) && (3 < *(int *)(local_48 + 0x18))) {
      lVar15 = 0;
      do {
        iVar14 = *(int *)(*(int64_t *)(local_48 + 0x10) + lVar15 * 4);
        iVar3 = FUN_01715480();
        iVar4 = *(int *)(puVar8 + 3);
        FUN_00c8e340();
        iVar14 = iVar14 - iVar3;
        iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
        *(uint *)(puVar8[2] + (int64_t)iVar4) = (iVar14 >> 0x1f & 0xcU) + iVar14;
        iVar14 = *(int *)(local_48 + 0x18);
        iVar4 = iVar14 + 3;
        if (-1 < iVar14) {
          iVar4 = iVar14;
        }
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < iVar4 >> 2);
    }
    iVar14 = FUN_01715480();
    iVar14 = iVar14 * 7;
    iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
    cVar11 = ((byte)(iVar14 >> 0x1f) & 0xc) + (char)iVar14 + '\x06';
    uVar12 = cVar11 * 0x2b;
    local_130 = '\0';
    local_138 = puVar8;
    FUN_017167a0((int)(char)(cVar11 + ((char)((uVar12 & 0xffff) >> 0xf) + (char)(uVar12 >> 9)) *
                                      -0xc + -6),&local_138);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_128 = local_48;
    local_120 = '\0';
    local_88 = local_48;
    FUN_01716260();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    FUN_01715620();
    FUN_01715d30();
    FUN_017fee20();
    lVar15 = *param_1;
    lVar2 = param_1[1];
    if (lVar15 == local_88) {
      if (((char)lVar2 == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
        goto LAB_017fbdda;
      }
    }
    else {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
      *param_1 = local_88;
      if (((char)lVar2 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
LAB_017fbdda:
      *(void*)(param_1 + 1) = 1;
    }
    lVar15 = *param_3;
    lVar2 = param_3[1];
    if (lVar15 == local_48) {
      if (((char)lVar2 != '\0') || (local_48 == 0)) goto LAB_017fbe20;
      FUN_00d50b00();
      *(void*)(param_3 + 1) = 1;
LAB_017fbe41:
      FUN_00d50b20();
    }
    else {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_48;
      if (((char)lVar2 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(param_3 + 1) = 1;
LAB_017fbe20:
      if (local_48 != 0) goto LAB_017fbe41;
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_017e1c20();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_017e1c20();
    lVar15 = *param_3;
    if (lVar15 == local_48) {
      if (((char)param_3[1] != '\0') || (local_48 == 0)) goto LAB_017fbf38;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_017fbf30;
      }
    }
    else {
      lVar2 = param_3[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_48;
        if (((char)lVar2 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
LAB_017fbf30:
        *(void*)(param_3 + 1) = 1;
LAB_017fbf38:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_017fbf4c;
      }
      *param_3 = local_48;
      if (((char)lVar2 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_3 + 1) = 1;
  }
LAB_017fbf4c:
  FUN_017e1ca0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_017e1ca0();
    lVar15 = *param_1;
    if (lVar15 == local_48) {
      if (((char)param_1[1] != '\0') || (local_48 == 0)) goto LAB_017fc014;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_017fc00c;
      }
    }
    else {
      lVar2 = param_1[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_48;
        if (((char)lVar2 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
LAB_017fc00c:
        *(void*)(param_1 + 1) = 1;
LAB_017fc014:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_017fc028;
      }
      *param_1 = local_48;
      if (((char)lVar2 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_1 + 1) = 1;
  }
LAB_017fc028:
  if (*(int *)(arg1 + 0x48) != 0) {
    iVar14 = FUN_01717720();
    iVar4 = FUN_01717720();
    if (iVar14 != iVar4) {
      local_118 = *param_1;
      local_110 = '\0';
      FUN_01716260();
      lVar15 = *param_1;
      if (lVar15 == local_48) {
        if (((char)param_1[1] != '\0') || (local_48 == 0)) goto LAB_017fc11f;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_017fc11b;
        }
LAB_017fc13c:
        *(void*)(param_1 + 1) = 1;
        local_40 = '\0';
      }
      else {
        lVar2 = param_1[1];
        if (local_40 != '\0') {
          *param_1 = local_48;
          if (((char)lVar2 != '\0') && (lVar15 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_017fc13c;
        }
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_48;
        if (((char)lVar2 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
LAB_017fc11b:
        *(void*)(param_1 + 1) = 1;
LAB_017fc11f:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      local_108 = *param_3;
      local_100 = '\0';
      FUN_01716260();
      lVar15 = *param_3;
      if (lVar15 == local_48) {
        if (((char)param_3[1] != '\0') || (local_48 == 0)) goto LAB_017fc208;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_017fc204;
        }
LAB_017fc1cd:
        *(void*)(param_3 + 1) = 1;
        local_40 = '\0';
      }
      else {
        lVar2 = param_3[1];
        if (local_40 != '\0') {
          *param_3 = local_48;
          if (((char)lVar2 != '\0') && (lVar15 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_017fc1cd;
        }
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_48;
        if (((char)lVar2 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
LAB_017fc204:
        *(void*)(param_3 + 1) = 1;
LAB_017fc208:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      local_2b0 = *local_res20;
      local_2a8 = 0;
      FUN_017ff040(*(void*)(arg1 + 0x54),*(void*)(arg1 + 0x50),&local_2b0);
    }
  }
  local_f8 = *param_1;
  local_f0 = '\0';
  local_e8 = *local_a8;
  local_e0 = '\0';
  uVar5 = FUN_017e1d20();
  FUN_017e22f0(&local_e8,&local_f8,uVar5);
  local_50 = local_48;
  if (local_48 == 0) {
    local_98 = 1;
    local_50 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    local_98 = 0;
  }
  else {
    local_40 = '\0';
    local_98 = 0;
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = *param_3;
  local_d0 = '\0';
  local_c8 = *local_res8;
  local_c0 = '\0';
  uVar5 = FUN_017e1d20();
  uVar9 = FUN_017e22f0(&local_c8,&local_d8,uVar5);
  if (local_48 == 0) {
    local_94 = (uint32_t)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    lVar15 = 0;
  }
  else {
    lVar15 = local_48;
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_94 = 0;
    }
    else {
      local_40 = '\0';
      local_94 = 0;
    }
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  local_2a0 = *param_1;
  local_298 = 0;
  FUN_017fd8b0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_290 = *param_3;
  local_288 = 0;
  FUN_017fd8b0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_88 = local_48;
  FUN_017fd8b0();
  lVar2 = local_150;
  if ((local_148 == '\0') && (local_150 != 0)) {
    FUN_00d50b00();
  }
  FUN_017fd8b0();
  if ((local_148 == '\0') && (local_150 != 0)) {
    FUN_00d50b00();
  }
  iVar14 = FUN_01715480();
  iVar4 = FUN_01715480();
  local_a8._0_4_ = 0xffffffff;
  if (iVar14 == iVar4) {
    local_a8._0_4_ = FUN_01715480();
  }
  uVar12 = *(int *)(arg1 + 0x48) - 2;
  if (uVar12 < 3) {
    local_230 = local_90;
    local_228 = 0;
    local_218 = 0;
    local_210 = local_88;
    local_208 = 0;
    FUN_017fdf50(uVar12,&local_210,(uint32_t)local_a8);
    local_200 = *param_1;
    local_1f8 = 0;
    FUN_017fd8b0();
    if (local_48 != lVar15) {
      if (lVar15 != 0) {
        FUN_00d50b00();
      }
      bVar16 = local_48 != 0;
      local_48 = lVar15;
      if (bVar16) {
        FUN_00d50b20();
      }
    }
    lVar1 = local_90;
    local_1f0 = local_90;
    local_1e8 = 0;
    local_1d8 = 0;
    local_1d0 = lVar2;
    local_1c8 = 0;
    local_1c0 = local_150;
    local_1b8 = 0;
    local_1e0 = local_48;
    FUN_017fe760(&local_1c0,&local_1d0);
    lVar10 = g_028af788;
    local_1b0 = lVar1;
    local_1a8 = 0;
    local_1a0 = lVar2;
    local_198 = 0;
    if (g_028af788 == 0) {
      local_170 = 0;
LAB_017fc7f4:
      local_168 = 1;
      bVar16 = true;
      local_160 = 0;
    }
    else {
      FUN_00d50b00();
      local_160 = g_028af788;
      local_170 = lVar10;
      local_168 = 1;
      local_158 = 0;
      if (g_028af788 == 0) goto LAB_017fc7f4;
      FUN_00d50b00();
      bVar16 = false;
    }
    local_158 = 1;
    FUN_017fe760(&local_160,&local_170);
    if (!bVar16) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    goto LAB_017fc842;
  }
  if (*(int *)(arg1 + 0x48) != 1) goto LAB_017fc842;
  iVar14 = *(int *)(arg1 + 0x4c);
  if (iVar14 == 5) {
    local_b0 = '\0';
    local_b8 = lVar15;
    FUN_01716260();
    lVar10 = *param_2;
    lVar1 = *(int64_t *)(lVar10 + 200);
    if (lVar1 != lVar15) {
      if (lVar15 == 0) {
        *(void*)(lVar10 + 200) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(lVar10 + 200);
        *(int64_t *)(lVar10 + 200) = lVar15;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    cVar11 = FUN_01716be0();
    if (cVar11 != '\0') {
      FUN_01715d40();
      FUN_01715d40();
    }
    iVar14 = *(int *)(arg1 + 0x4c);
  }
  if (iVar14 == 4) {
    lVar10 = *param_2;
    lVar1 = *(int64_t *)(lVar10 + 200);
    if (lVar1 != lVar15) {
      if (lVar15 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar10 + 200) = lVar15;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  iVar14 = *(int *)(arg1 + 0x4c);
  if (iVar14 == 6) {
    lVar10 = *param_2;
    lVar1 = *(int64_t *)(lVar10 + 200);
    if (lVar1 != lVar15) {
      if (lVar15 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar10 + 200) = lVar15;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    iVar14 = *(int *)(arg1 + 0x4c);
  }
  if (iVar14 == 5) {
    FUN_017e1b40();
    cVar11 = FUN_01716be0();
    if ((cVar11 != '\0') && (cVar11 = FUN_01716c00(), cVar11 != '\0')) {
      iVar4 = FUN_01715480();
      iVar14 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340((int64_t)iVar14,1);
      iVar4 = iVar4 + 4;
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      *(uint *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar14) = (iVar4 >> 0x1f & 0xcU) + iVar4;
      iVar4 = FUN_01715480();
      iVar14 = *(int *)(local_150 + 0x18);
      FUN_00c8e340((int64_t)iVar14,1);
      iVar4 = iVar4 + 3;
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      *(uint *)(*(int64_t *)(local_150 + 0x10) + (int64_t)iVar14) = (iVar4 >> 0x1f & 0xcU) + iVar4
      ;
    }
  }
  if ((*(char *)(arg1 + 0x58) != '\0') && (*(int *)(arg1 + 0x4c) == 2)) {
    cVar11 = FUN_01716e70();
    if ((cVar11 == '\0') ||
       ((((cVar11 = FUN_01716e70(), cVar11 != '\0' || (cVar11 = FUN_01716e70(), cVar11 != '\0')) ||
         (cVar11 = FUN_01716e70(), cVar11 == '\0')) || (cVar11 = FUN_01716e70(), cVar11 == '\0'))))
    {
      cVar11 = FUN_01716e70();
      if ((((cVar11 != '\0') && (cVar11 = FUN_01716e70(), cVar11 == '\0')) &&
          (cVar11 = FUN_01716e70(), cVar11 == '\0')) &&
         ((cVar11 = FUN_01716e70(), cVar11 != '\0' && (cVar11 = FUN_01716e70(), cVar11 != '\0')))) {
        iVar6 = FUN_01717260();
        iVar7 = FUN_01715480();
        local_9c = FUN_01717260();
        iVar3 = FUN_01715480();
        iVar14 = *(int *)(local_150 + 0x18);
        iVar4 = iVar14 + 3;
        if (-1 < iVar14) {
          iVar4 = iVar14;
        }
        if (3 < iVar14) {
          iVar7 = iVar7 + iVar6;
          iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
          iVar3 = iVar3 + local_9c;
          iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
          iVar3 = (iVar3 >> 0x1f & 0xcU) + iVar3;
          lVar10 = *(int64_t *)(local_150 + 0x10);
          uVar13 = 0;
          do {
            if (*(int *)(lVar10 + uVar13 * 4) == (iVar7 >> 0x1f & 0xcU) + iVar7) goto LAB_017fcde7;
            uVar13 = uVar13 + 1;
          } while (iVar4 >> 2 != (int)uVar13);
        }
      }
    }
    else {
      iVar6 = FUN_01717260();
      iVar7 = FUN_01715480();
      local_9c = FUN_01717260();
      iVar3 = FUN_01715480();
      iVar14 = *(int *)(local_150 + 0x18);
      iVar4 = iVar14 + 3;
      if (-1 < iVar14) {
        iVar4 = iVar14;
      }
      if (3 < iVar14) {
        iVar7 = iVar7 + iVar6;
        iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        iVar3 = iVar3 + local_9c;
        iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
        iVar3 = (iVar3 >> 0x1f & 0xcU) + iVar3;
        lVar10 = *(int64_t *)(local_150 + 0x10);
        uVar13 = 0;
        do {
          if (*(int *)(lVar10 + uVar13 * 4) == (iVar7 >> 0x1f & 0xcU) + iVar7) goto LAB_017fcde7;
          uVar13 = uVar13 + 1;
        } while (iVar4 >> 2 != (int)uVar13);
      }
    }
  }
LAB_017fcdec:
  local_280 = local_90;
  local_278 = 0;
  local_270 = lVar2;
  local_268 = 0;
  local_260 = local_150;
  local_258 = 0;
  FUN_017fdf50();
  lVar10 = g_028af788;
  iVar14 = *(int *)(arg1 + 0x4c);
  if (iVar14 == 6) goto LAB_017fc842;
  if (iVar14 == 5) {
    FUN_017e1b40();
    cVar11 = FUN_01716be0();
    if ((cVar11 == '\0') || (cVar11 = FUN_01716c00(), cVar11 == '\0')) goto LAB_017fc842;
    iVar14 = FUN_01715480();
    iVar14 = iVar14 + 1;
  }
  else {
    if (iVar14 != 4) {
      local_250 = local_90;
      local_248 = 0;
      local_240 = lVar2;
      local_238 = 0;
      if (g_028af788 == 0) {
        local_190 = 0;
LAB_017fd012:
        local_188 = 1;
        bVar16 = true;
        local_180 = 0;
      }
      else {
        FUN_00d50b00();
        local_180 = g_028af788;
        local_190 = lVar10;
        local_188 = 1;
        local_178 = 0;
        if (g_028af788 == 0) goto LAB_017fd012;
        FUN_00d50b00();
        bVar16 = false;
      }
      local_178 = 1;
      FUN_017fe760(&local_180,&local_190);
      if (!bVar16) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      goto LAB_017fc842;
    }
    FUN_017e1b40();
    cVar11 = FUN_01716be0();
    if ((cVar11 == '\0') || (cVar11 = FUN_01716c00(), cVar11 == '\0')) goto LAB_017fc842;
    iVar14 = FUN_01715480();
    iVar14 = iVar14 + 8;
  }
  iVar14 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
  *(void*)
   (*(int64_t *)(local_90 + 0x10) + (int64_t)(int)((iVar14 >> 0x1f & 0xcU) + iVar14) * 4) = 1;
LAB_017fc842:
  *this_ptr = local_90;
  *(void*)(this_ptr + 1) = 1;
  if (local_150 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_94 == '\0' && lVar15 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_98 == '\0' && local_50 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_017fcde7:
  *(int *)(lVar10 + (uVar13 & 0xffffffff) * 4) = iVar3;
  goto LAB_017fcdec;
}

