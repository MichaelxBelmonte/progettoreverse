// Function: FUN_01e6dab0
// Address: 01e6dab0
// Size: 2133 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6dab0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  bool bVar4;
  int64_t *plVar5;
  int64_t *in_RDX;
  void*arg1;
  int64_t *this_ptr;
  bool bVar6;
  uint64_t uVar7;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  uint8_t auVar8 [16];
  float fVar9;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t local_e8 [16];
  uint8_t local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  int64_t local_88;
  char local_80;
  int64_t *local_58;
  int64_t *local_40;
  char local_38;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  local_d8._4_4_ = (uint32_t)((uint64_t)param_1 >> 0x20);
  local_d8._0_4_ = (uint32_t)param_1;
  local_e8._8_4_ = in_XMM1_Dc;
  local_e8._0_8_ = param_2;
  local_e8._12_4_ = in_XMM1_Dd;
  if (*in_RDX == this_ptr[0x2d]) {
    local_d8._0_4_ = (float)local_d8._0_4_ + g_023b5570;
    local_d8._4_4_ = (float)local_d8._4_4_ + _UNK_023b5574;
    in_XMM0_Dc = in_XMM0_Dc + _UNK_023b5578;
    in_XMM0_Dd = in_XMM0_Dd + _UNK_023b557c;
  }
  fStack_d0 = in_XMM0_Dc;
  fStack_cc = in_XMM0_Dd;
  iVar1 = (int)this_ptr[0x2b];
  if (iVar1 == 0) {
    if (((float)g_028ba110 != 0.0) || (NAN((float)g_028ba110))) {
      if ((g_028ba110._4_4_ == 0.0) && (!NAN(g_028ba110._4_4_))) goto LAB_01e6dc66;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = g_028ba110;
    }
    else {
LAB_01e6dc66:
      auVar8._8_8_ = _UNK_024202c8;
      auVar8._0_8_ = g_024202c0;
      g_028ba110 = g_024202c0;
    }
    blendps(auVar8,local_e8,0xd);
    auVar3._4_4_ = fVar9;
    auVar3._0_4_ = fVar9 + g_02421224 + (float)local_d8._4_4_;
    auVar3._8_4_ = in_XMM1_Dd;
    auVar3._12_4_ = in_XMM1_Dd;
    insertps(_local_d8,auVar3,0x10);
    blendps(local_e8,g_02421240,0xe);
LAB_01e6dcc5:
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_40 + 0x378))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    FUN_01d48a10();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)(*in_RDX + 0xc) == '\0') {
      FUN_01cfc3c0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cfbc00();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar5 = (int64_t *)*arg1;
    lVar2 = *(int64_t *)(*in_RDX + 0x10);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x3f8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (1 < *(uint *)(this_ptr + 0x2b)) {
      return;
    }
    plVar5 = *(int64_t **)(*in_RDX + 0x20);
  }
  else {
    if (iVar1 == 2) goto LAB_01e6dcc5;
    if (iVar1 != 1) {
      return;
    }
    plVar5 = *(int64_t **)(*in_RDX + 0x20);
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar5 + 0x4d8))();
    FUN_00d05510();
    (**(code **)(*plVar5 + 0x4d0))();
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x450))();
      FUN_01e3f820();
      (**(code **)(*this_ptr + 0x798))();
    }
    FUN_00d50b20();
    return;
  }
  local_58 = *(int64_t **)(*in_RDX + 0x38);
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b00();
    bVar4 = false;
    goto LAB_01e6e1ad;
  }
  if ((g_028ba118 == (int64_t *)0x0) || (g_028ba121 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba118 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028ba118 == plVar5) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        bVar6 = g_028ba118 != (int64_t *)0x0;
        g_028ba118 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028ba120 == '\0') {
        g_028ba120 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      if (((float)g_028ba110 != 0.0) || (NAN((float)g_028ba110))) {
        if ((g_028ba110._4_4_ == 0.0) && (!NAN(g_028ba110._4_4_))) goto LAB_01e6e038;
      }
      else {
LAB_01e6e038:
        g_028ba110 = g_024202c0;
      }
      FUN_01d4ed60();
      FUN_01d52700();
      FUN_01d52740();
      FUN_01cfbee0();
      if ((local_80 == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01d530c0();
      FUN_00d05530();
      (**(code **)(*local_40 + 0x3b8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      g_028ba121 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba121 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028ba118 == (int64_t *)0x0) {
      bVar4 = true;
      local_58 = (int64_t *)0x0;
      goto LAB_01e6e1ad;
    }
  }
  local_58 = g_028ba118;
  FUN_00d50b00();
  bVar4 = false;
LAB_01e6e1ad:
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  if (*(char *)(*in_RDX + 0xc) == '\0') {
    FUN_01d526f0();
    uVar7 = FUN_00d05510();
    FUN_01d49110(uVar7,g_0239011c);
  }
  else {
    FUN_01d526f0();
    uVar7 = FUN_00d05510();
    FUN_01d49110(uVar7,g_02390124);
  }
  FUN_01d48390();
  if (!bVar4 && local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

