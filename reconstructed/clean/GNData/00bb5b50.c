// Function: FUN_00bb5b50
// Address: 00bb5b50
// Size: 2464 bytes
// Class: GNData
// String references:
//   "adtl"
//   "labl"
//   "note"
//   "ltxt"
//   "LIST"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint32_t FUN_00bb5b50(void)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  void*local_108;
  uint8_t local_100;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  uint32_t local_64;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*arg1 == 0) {
    uVar10 = 0;
  }
  else {
    local_40 = 0;
    local_48 = 0;
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    local_88 = puVar4;
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (int64_t)&g_0256d868;
    plVar5[2] = 0;
    *(void*)((int64_t)plVar5 + 0x1c) = 0;
    *(void*)((int64_t)plVar5 + 0x24) = 0;
    *(void*)((int64_t)plVar5 + 0x2c) = 0;
    (*g_0256d880)();
    local_60 = plVar5;
    FUN_00cccf90();
    FUN_00ccce90();
    FUN_00ccce80();
    (**(code **)(*local_60 + 0x388))(4,"adtl");
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = *arg1;
    plVar5 = local_60;
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar9 = 0;
      do {
        lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar9 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_02765288;
        local_70 = lVar8;
        if (g_02765288 != 0) {
          FUN_00d50b00();
        }
        local_58 = lVar2;
        local_50 = '\0';
        cVar3 = FUN_00ca18c0();
        uVar10 = extraout_XMM0_Da;
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b20();
        }
        lVar2 = g_02765290;
        lVar8 = g_02765278;
        if (cVar3 == '\0') {
          if (g_02765278 != 0) {
            FUN_00d50b00();
          }
          local_58 = lVar8;
          local_50 = '\0';
          cVar3 = FUN_00ca18c0();
          uVar10 = extraout_XMM0_Da_01;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if (lVar8 != 0) {
            uVar10 = FUN_00d50b20();
          }
          lVar2 = g_02765280;
          lVar8 = g_02765278;
          if (cVar3 != '\0') {
            if (g_02765278 != 0) {
              uVar10 = FUN_00d50b00();
            }
            local_c8 = lVar8;
            local_c0 = '\x01';
            uVar6 = FUN_000175c0(uVar10,&local_c8);
            lVar8 = local_58;
            plVar5 = local_60;
            uVar10 = extraout_XMM0_Da_02;
            if (local_58 == 0) {
              lVar8 = 0;
              uVar6 = 0;
              local_80 = 0;
            }
            else if (local_50 == '\0') {
              uVar6 = FUN_00d50b00();
              uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              uVar10 = extraout_XMM0_Da_08;
              local_80 = uVar6;
              if ((local_50 != '\0') && (local_58 != 0)) {
                uVar6 = FUN_00d50b20();
                uVar10 = extraout_XMM0_Da_09;
              }
            }
            else {
              local_50 = '\0';
              uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              local_80 = uVar6;
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Da_10;
            }
            iVar7 = 2;
joined_r0x00bb5fdc:
            if (lVar8 != 0) goto LAB_00bb5fe2;
LAB_00bb6350:
            local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            lVar8 = 0;
            local_78 = 0;
            if (iVar7 != 1) goto LAB_00bb6076;
LAB_00bb6368:
            uVar10 = (**(code **)(*plVar5 + 0x388))(4,"note");
            if ((local_140 != '\0') && (local_148 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            uVar10 = FUN_00ccdf50(uVar10,*(int *)(lVar8 + 0x18) + 4);
            if ((local_130 != '\0') && (local_138 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            goto LAB_00bb63e0;
          }
          if (g_02765280 != 0) {
            FUN_00d50b00();
          }
          local_58 = lVar2;
          local_50 = '\0';
          cVar3 = FUN_00ca18c0();
          uVar10 = extraout_XMM0_Da_03;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar10 = FUN_00d50b20();
          }
          if (lVar2 != 0) {
            uVar10 = FUN_00d50b20();
          }
          lVar8 = g_02765280;
          plVar5 = local_60;
          if (cVar3 != '\0') {
            if (g_02765280 != 0) {
              uVar10 = FUN_00d50b00();
            }
            local_b8 = lVar8;
            local_b0 = '\x01';
            uVar6 = FUN_000175c0(uVar10,&local_b8);
            lVar8 = local_58;
            plVar5 = local_60;
            uVar10 = extraout_XMM0_Da_04;
            if (local_58 == 0) {
              lVar8 = 0;
              uVar6 = 0;
              local_80 = 0;
            }
            else if (local_50 == '\0') {
              uVar6 = FUN_00d50b00();
              uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              uVar10 = extraout_XMM0_Da_14;
              local_80 = uVar6;
              if ((local_50 != '\0') && (local_58 != 0)) {
                uVar6 = FUN_00d50b20();
                uVar10 = extraout_XMM0_Da_15;
              }
            }
            else {
              local_50 = '\0';
              uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              local_80 = uVar6;
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Da_16;
            }
            iVar7 = 1;
            goto joined_r0x00bb5fdc;
          }
        }
        else {
          if (g_02765290 != 0) {
            uVar10 = FUN_00d50b00();
          }
          local_d8 = lVar2;
          local_d0 = '\x01';
          uVar6 = FUN_000175c0(uVar10,&local_d8);
          lVar8 = local_58;
          plVar5 = local_60;
          uVar10 = extraout_XMM0_Da_00;
          if (local_58 == 0) {
            lVar8 = 0;
            uVar6 = 0;
            local_80 = 0;
          }
          else if (local_50 == '\0') {
            uVar6 = FUN_00d50b00();
            uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            uVar10 = extraout_XMM0_Da_05;
            local_80 = uVar6;
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Da_06;
            }
          }
          else {
            local_50 = '\0';
            uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            local_80 = uVar6;
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            uVar6 = FUN_00d50b20();
            uVar10 = extraout_XMM0_Da_07;
          }
          iVar7 = 3;
          if (lVar8 == 0) goto LAB_00bb6350;
LAB_00bb5fe2:
          uVar6 = FUN_00d8cf90(uVar10,4);
          lVar8 = local_58;
          uVar10 = extraout_XMM0_Da_11;
          if (local_58 == 0) {
            local_78 = 0;
            lVar8 = 0;
          }
          else if (((local_50 == '\0') &&
                   (uVar6 = FUN_00d50b00(), uVar10 = extraout_XMM0_Da_12, local_50 != '\0')) &&
                  (local_58 != 0)) {
            local_78 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            uVar10 = FUN_00d50b20();
          }
          else {
            local_78 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          }
          iVar1 = *(int *)(lVar8 + 0x18);
          if (((int64_t)iVar1 & 1U) != 0) {
            uVar10 = FUN_00c8e340(uVar10,1);
            *(void*)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar1) = 0;
          }
          local_64 = 0;
          plVar5 = local_60;
          if (iVar7 == 1) goto LAB_00bb6368;
LAB_00bb6076:
          if (iVar7 == 2) {
            uVar10 = (**(code **)(*plVar5 + 0x388))(4,"labl");
            if ((local_160 != '\0') && (local_168 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            uVar10 = FUN_00ccdf50(uVar10,*(int *)(lVar8 + 0x18) + 4);
            if ((local_150 != '\0') && (local_158 != 0)) {
              uVar10 = FUN_00d50b20();
            }
LAB_00bb63e0:
            local_90 = '\0';
            local_98 = lVar8;
            FUN_00ccdbb0(uVar10,&local_98);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((char)local_78 != '\0') {
              FUN_00d50b20();
            }
          }
          else {
            if (iVar7 == 3) {
              uVar10 = (**(code **)(*plVar5 + 0x388))(4,"ltxt");
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              uVar10 = FUN_00ccdf50(uVar10,*(int *)(lVar8 + 0x18) + 0x14);
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              lVar2 = g_02765288;
              if (g_02765288 != 0) {
                uVar10 = FUN_00d50b00();
              }
              local_a8 = lVar2;
              local_a0 = '\x01';
              uVar10 = FUN_000175c0(uVar10,&local_a8);
              lVar2 = local_58;
              plVar5 = local_60;
              if (local_50 == '\0') {
                if (((local_58 != 0) && (uVar10 = FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != 0)) {
                  uVar10 = FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              if (lVar2 == 0) {
                FUN_00ccdf50(uVar10,0);
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                uVar10 = FUN_00d8d560();
                FUN_00ccdf50(extraout_XMM0_Da_13,uVar10);
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
              }
              uVar10 = (**(code **)(*plVar5 + 0x388))(0xc,&local_48);
              if ((local_170 != '\0') && (local_178 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              if (lVar2 != 0) {
                uVar10 = FUN_00d50b20();
              }
              goto LAB_00bb63e0;
            }
            if (lVar8 != 0) goto LAB_00bb63e0;
          }
          if ((char)local_80 != '\0' && (char)local_64 == '\0') {
            FUN_00d50b20();
          }
        }
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        lVar8 = *arg1;
      } while (lVar9 < *(int *)(lVar8 + 0xc));
    }
    puVar4 = local_88;
    uVar10 = (**(code **)(*plVar5 + 0x368))();
    if ((local_110 != '\0') && (local_118 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    local_108 = puVar4;
    local_100 = 0;
    uVar10 = FUN_00bb0460(uVar10,&local_108);
    FUN_00d50b20();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar10;
}

