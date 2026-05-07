// Function: FUN_002a6470
// Address: 002a6470
// Size: 862 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_002a6470(void)

{
  int64_t *plVar1;
  uint uVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar5 [16];
  float fVar7;
  uint8_t auVar6 [16];
  uint8_t local_c8 [16];
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e44a80();
  local_c8._0_8_ = (**(code **)(*this_ptr + 0xaf8))();
  local_c8._8_8_ = extraout_XMM0_Qb;
  cVar3 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*this_ptr + 0x640))();
    plVar1 = local_60;
    local_a0 = g_026e41f0;
    if (g_026e41f0 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_60 + 0x390))();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_90 = *arg1;
  local_88 = '\0';
  (**(code **)(*this_ptr + 0xb20))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar7 = (float)((uint64_t)local_c8._0_8_ >> 0x20);
  auVar5._0_4_ = g_023945e0 & (uint)fVar7;
  auVar5._4_4_ = _UNK_023945e4 & (uint)fVar7;
  auVar5._8_4_ = _UNK_023945e8 & uVar2;
  auVar5._12_4_ = _UNK_023945ec & uVar2;
  auVar6._4_12_ = SUB1612(auVar5 | g_023945f0,4);
  auVar6._0_4_ = SUB164(auVar5 | g_023945f0,0) + fVar7;
  auVar5 = roundss(ZEXT816(0),auVar6,0xb);
  insertps(local_c8,auVar5,0x10);
  FUN_01d48b40();
  plVar1 = (int64_t *)*arg1;
  FUN_00d05530();
  FUN_01d39800();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  (**(code **)(*plVar1 + 0x3a8))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  return;
}

