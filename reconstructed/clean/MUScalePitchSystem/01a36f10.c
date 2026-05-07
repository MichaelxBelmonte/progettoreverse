// Function: FUN_01a36f10
// Address: 01a36f10
// Size: 1537 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01a36f10(uint64_t param_1,float *param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void*arg1;
  int64_t this_ptr;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint8_t auVar11 [16];
  uint32_t local_d8;
  uint32_t uStack_d4;
  char local_d0;
  uint32_t local_c4;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  float fStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  
  if (*(char *)(this_ptr + 0x1ad) != '\0') {
    if ((g_028b2b68 == (int64_t *)0x0) || (g_028b2b71 == '\0')) {
      FUN_00e8cb50();
      if (g_028b2b68 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_001b9f00();
        (**(code **)(*plVar4 + 0x18))();
        if (g_028b2b68 == plVar4) {
          bVar8 = false;
          bVar2 = false;
        }
        else {
          bVar8 = true;
          bVar2 = true;
          bVar7 = g_028b2b68 != (int64_t *)0x0;
          g_028b2b68 = plVar4;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (g_028b2b70 == '\0') {
          g_028b2b70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar8;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_01cfc6a0();
        local_d8 = 0;
        FUN_01cfc6a0();
        local_4c = 0x3dcccccd;
        FUN_01cfc6a0();
        local_48 = 0x3f666666;
        FUN_01cfc6a0();
        local_44 = 0x3f800000;
        FUN_01ae52c0(&local_70,&local_d8,&local_4c,&local_60);
        FUN_01f7ba60();
        FUN_019fe220();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_38 != '\0') && (CONCAT44(fStack_3c,local_40) != 0)) {
          FUN_00d50b20();
        }
        g_028b2b71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b2b71 = '\x01';
        FUN_00e8cb70();
      }
    }
    plVar3 = g_028b2b68;
    auVar11 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)((uint)(*param_2 + g_02390d00) & g_023945e0 |
                                            g_02394dc8) + *param_2 + g_02390d00)),0xb);
    local_40 = auVar11._0_4_;
    fStack_3c = 0.0;
    uStack_34 = *(void*)(this_ptr + 0x118);
    auVar11 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)(g_023945e0 & (uint)(param_2[2] + g_02390d34) |
                                            g_02394dc8) + param_2[2] + g_02390d34)),0xb);
    local_38 = auVar11._0_4_;
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    plVar4 = (int64_t *)*arg1;
    uVar9 = auVar11._0_8_;
    if (lVar1 == 0) {
      local_b0 = 0;
      if (g_028b2b68 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_b8 = plVar3;
      local_b0 = '\x01';
      (**(code **)(*plVar4 + 0x420))(uVar9,&local_b8);
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a0 = 0;
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = lVar1;
      FUN_01d488d0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))
                (CONCAT44(fStack_3c,local_40),CONCAT44(uStack_34,local_38));
    }
    if (1 < *(int *)(*(int64_t *)(this_ptr + 0x188) + 0xc)) {
      if ((g_028b2b78 == (int64_t *)0x0) || (g_028b2b81 == '\0')) {
        FUN_00e8cb50();
        if (g_028b2b78 == (int64_t *)0x0) {
          plVar4 = (int64_t *)FUN_00e8fc40();
          FUN_001b9f00();
          (**(code **)(*plVar4 + 0x18))();
          if (g_028b2b78 == plVar4) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            bVar8 = g_028b2b78 != (int64_t *)0x0;
            g_028b2b78 = plVar4;
            if (bVar8) {
              FUN_00d50b20();
            }
          }
          if (g_028b2b80 == '\0') {
            g_028b2b80 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_01cfc6a0();
          local_4c = 0;
          FUN_01cfc6a0();
          local_48 = 0x3f000000;
          FUN_01cfc6a0();
          local_44 = 0x3f000000;
          FUN_01cfc6a0();
          local_c4 = 0x3f800000;
          FUN_01ae52c0(&local_60,&local_4c,&local_48,&local_80);
          FUN_01f7ba60();
          FUN_019fe220();
          if ((local_d0 != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          g_028b2b81 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028b2b81 = '\x01';
          FUN_00e8cb70();
        }
      }
      uStack_34 = 0x41400000;
      if (1 < *(int *)(*(int64_t *)(this_ptr + 0x188) + 0xc)) {
        iVar5 = 1;
        iVar6 = 0x1a;
        do {
          plVar3 = g_028b2b78;
          fStack_3c = (float)iVar6;
          uVar10 = (uint64_t)(uint)fStack_3c;
          plVar4 = (int64_t *)*arg1;
          local_90 = 0;
          if (g_028b2b78 != (int64_t *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          local_98 = plVar3;
          local_90 = '\x01';
          (**(code **)(*plVar4 + 0x420))(uVar10,&local_98);
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x20;
        } while (iVar5 < *(int *)(*(int64_t *)(this_ptr + 0x188) + 0xc));
      }
    }
  }
  return;
}

