// Function: FUN_019939d0
// Address: 019939d0
// Size: 1508 bytes
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


void FUN_019939d0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  uint64_t local_128;
  float fStack_120;
  int64_t local_118;
  uint8_t local_110;
  uint64_t local_108;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  int64_t *local_e8;
  char local_e0;
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
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fStack_84 = (float)((uint64_t)param_1 >> 0x20);
  local_88 = (float)param_1;
  *(void*)(this_ptr + 0x78) = 0xfffffffe;
  lVar7 = this_ptr[7];
  plVar8 = (int64_t *)0x0;
  bVar3 = false;
  local_f8 = fVar11;
  fStack_80 = in_XMM0_Dc;
  fStack_7c = in_XMM0_Dd;
  iVar5 = -2;
  do {
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar9 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 8);
        if (plVar8 == plVar1) {
          if ((!bVar3) && (plVar8 != (int64_t *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            plVar8 = plVar1;
          }
          else {
            bVar3 = true;
            plVar8 = plVar1;
          }
        }
        lVar7 = this_ptr[0x78];
        iVar5 = FUN_01989fa0();
        if (iVar5 <= (int)lVar7) {
          lVar7 = this_ptr[0x78];
          iVar5 = FUN_01989fa0();
          iVar6 = FUN_01989fb0();
          if ((int)lVar7 < iVar6 + iVar5) {
            (**(code **)(*plVar8 + 0x4e0))();
            cVar4 = FUN_00d054a0();
            if (cVar4 != '\0') {
              uVar10 = (**(code **)(*plVar8 + 0x4d8))();
              fStack_100 = extraout_XMM0_Dc;
              fStack_fc = extraout_XMM0_Dd;
              local_108 = uVar10;
              (**(code **)(*(int64_t *)*arg1 + 0x368))();
              (**(code **)(*plVar8 + 0x500))();
              local_88 = local_88 - (float)local_108;
              fStack_84 = fStack_84 - local_108._4_4_;
              fStack_80 = fStack_80 - fStack_100;
              fStack_7c = fStack_7c - fStack_fc;
              uVar10 = FUN_00d05360();
              fStack_120 = fVar11;
              local_128 = uVar10;
              if ((g_0239424c < fVar11) && (g_0239424c < fVar12)) {
                local_e0 = '\0';
                local_d8 = *arg1;
                local_d0 = '\0';
                local_e8 = plVar8;
                (**(code **)(*this_ptr + 0x7a0))(&local_128,&local_d8);
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              (**(code **)(*(int64_t *)*arg1 + 0x368))((uint)(float)local_108 ^ g_023945e0)
              ;
              local_88 = local_88 + (float)local_108;
              fStack_84 = fStack_84 + local_108._4_4_;
              fStack_80 = fStack_80 + fStack_100;
              fStack_7c = fStack_7c + fStack_fc;
            }
          }
        }
        lVar9 = lVar9 + 1;
        lVar7 = this_ptr[7];
      } while (lVar9 < *(int *)(lVar7 + 0xc));
      iVar5 = (int)this_ptr[0x78];
    }
    *(int *)(this_ptr + 0x78) = iVar5 + 1;
    bVar2 = iVar5 < 3;
    iVar5 = iVar5 + 1;
  } while (bVar2);
  *(void*)(this_ptr + 0x78) = 0;
  if (*(char *)((int64_t)this_ptr + 0x441) != '\0') {
    local_118 = *arg1;
    local_110 = 0;
    FUN_019928f0();
  }
  if (((*(float *)(this_ptr + 0x40) != 0.0) || (NAN(*(float *)(this_ptr + 0x40)))) &&
     ((*(float *)((int64_t)this_ptr + 0x204) != 0.0 ||
      (NAN(*(float *)((int64_t)this_ptr + 0x204)))))) {
    FUN_01d39800((int)this_ptr[0x3f],(int)this_ptr[0x40],g_023908d8);
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01cfcdc0(g_0239011c,g_0239011c,g_0239011c,g_0239011c);
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_48;
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_c8 = local_48;
    local_c0 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01cfcdc0(0,0,0,g_0239011c);
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_48;
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = local_48;
    local_b0 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if ((1 < *(int *)(this_ptr[0x41] + 0xc)) && ((char)this_ptr[0x51] != '\0')) {
    local_a8 = *arg1;
    local_a0 = '\0';
    (**(code **)(*this_ptr + 0xb90))(local_88,local_f8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(float *)(this_ptr + 0x5c) == (float)g_023dccec) &&
     (!NAN(*(float *)(this_ptr + 0x5c)) && !NAN((float)g_023dccec))) {
    if ((*(float *)((int64_t)this_ptr + 0x2e4) == g_023dccec._4_4_) &&
       (!NAN(*(float *)((int64_t)this_ptr + 0x2e4)) && !NAN(g_023dccec._4_4_))) {
      if ((*(float *)(this_ptr + 0x5d) == (float)g_023dccf4) &&
         (!NAN(*(float *)(this_ptr + 0x5d)) && !NAN((float)g_023dccf4))) {
        if ((*(float *)((int64_t)this_ptr + 0x2ec) == g_023dccf4._4_4_) &&
           (!NAN(*(float *)((int64_t)this_ptr + 0x2ec)) && !NAN(g_023dccf4._4_4_)))
        goto LAB_01993fa6;
      }
    }
  }
  local_98 = *arg1;
  local_90 = '\0';
  (**(code **)(*this_ptr + 0xb98))(local_88,local_f8);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01993fa6:
  if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

