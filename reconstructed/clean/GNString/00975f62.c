// Function: FUN_00975f62
// Address: 00975f62
// Size: 1745 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00975f62(string *param_1,string *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  void*puVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  void*local_218;
  void*local_210;
  void*local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  uint16_t local_1e8;
  uint32_t local_1e6;
  uint8_t local_1e2;
  void*local_1e0;
  void*local_1d8;
  uint64_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint16_t local_1a0;
  void*local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  uint32_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  uint64_t local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  undefined5 uStack_130;
  undefined3 local_12b;
  undefined5 uStack_128;
  uint16_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  void*local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  undefined7 local_c0;
  uint32_t uStack_b9;
  uint32_t local_b0;
  uint8_t local_ac;
  uint32_t local_a8;
  uint16_t local_a4;
  byte local_a0;
  int64_t local_88;
  int64_t lStack_80;
  uint64_t local_78;
  uint64_t local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  if (*(char *)(this_ptr + 0x40) != '\0') {
    *(void*)(this_ptr + 0x40) = 0;
    plVar3 = *(int64_t **)(this_ptr + 0x38);
    *(void*)(this_ptr + 0x30) = 0;
    *(void*)(this_ptr + 0x38) = 0;
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar4 = *(void*)(this_ptr + 8);
    plVar3 = *(int64_t **)(this_ptr + 0x10);
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    std::string::string(param_1,param_2);
    plVar5 = *(int64_t **)(this_ptr + 0x10);
    *(void*)(this_ptr + 8) = 0;
    *(void*)(this_ptr + 0x10) = 0;
    if (plVar5 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    std::string::assign((char *)param_1);
    uVar9 = 0;
    uVar10 = 0;
    local_218 = &g_02519c18;
    local_210 = &g_02517118;
    local_208 = &g_02517058;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e6 = 0x101;
    local_1e2 = 0;
    local_1e0 = &g_0251b468;
    local_1d8 = &g_0251b398;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = &g_0251b400;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    local_12b = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_120 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_e8 = &g_0251d288;
    local_c0 = 0;
    uStack_b9 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_a8 = 4;
    local_a4 = 0x100;
    std::string::operator=((string *)(segment_command_00000020.segname + 8),(string *)&g_0251d288)
    ;
    FUN_008f91be();
    FUN_00978a88();
    uVar6 = FUN_009e95e1();
    local_78 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    FUN_00976983(0,1);
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    uVar8 = *(void*)(this_ptr + 0x44);
    local_58 = *(void*)(this_ptr + 0x48);
    local_50 = *(int64_t **)(this_ptr + 0x50);
    if (local_50 != (int64_t *)0x0) {
      LOCK();
      local_50[1] = local_50[1] + 1;
      UNLOCK();
    }
    puVar7 = &local_68;
    local_68 = uVar4;
    local_60 = plVar3;
    uVar8 = FUN_00930118(puVar7,&local_48,uVar8,&local_58,uVar9,uVar10,uVar6);
    if (local_50 != (int64_t *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))();
        uVar8 = std::__shared_weak_count::__release_weak();
      }
    }
    if (local_60 != (int64_t *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_60 + 0x10))();
        uVar8 = std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00977ced(uVar8,&local_218);
    if (local_48 != 0) {
      lStack_40 = local_48;
      operator_delete(puVar7);
    }
    if (local_88 != 0) {
      lStack_80 = local_88;
      operator_delete(puVar7);
    }
    FUN_008b98bc();
    FUN_008b9182();
    if ((local_a0 & 1) != 0) {
      operator_delete(puVar7);
    }
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

