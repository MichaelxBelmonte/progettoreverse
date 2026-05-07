// Function: FUN_00e2f480
// Address: 00e2f480
// Size: 787 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00e2f480(void)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void*puVar5;
  void*this_ptr;
  int64_t lVar6;
  uint32_t extraout_XMM0_Da;
  uint64_t local_138;
  uint64_t uStack_130;
  int64_t *local_128;
  uint64_t uStack_120;
  uint64_t local_118;
  uint64_t uStack_110;
  uint64_t local_108;
  uint64_t uStack_100;
  int64_t local_f8;
  int64_t local_f0;
  uint64_t local_e8;
  void*local_c8;
  char local_c0;
  uint8_t local_b8 [128];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  _objc_alloc();
  local_e8 = (*PTR__objc_msgSend_024a9998)();
  uVar3 = (*PTR__objc_msgSend_024a9998)
                    (extraout_XMM0_Da,*(void*)PTR__NSURLIsVolumeKey_0249c1d8);
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_msgSend_024a9998)(2,uVar3);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (int64_t *)0x0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  lVar4 = (*PTR__objc_msgSend_024a9998)(local_b8,&local_138,0x10);
  if (lVar4 != 0) {
    local_f0 = *local_128;
    do {
      lVar6 = 0;
      local_f8 = lVar4;
      do {
        if (*local_128 != local_f0) {
          _objc_enumerationMutation();
        }
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02589080;
        puVar5[2] = 0;
        FUN_00d500e0();
        FUN_00e1d1d0();
        if (local_c0 == '\0') {
          if (local_c8 != (void*)0x0) {
            FUN_00d50b00();
            goto LAB_00e2f65d;
          }
          if (puVar5[2] != 0) {
            puVar5[2] = 0;
            goto LAB_00e2f690;
          }
        }
        else {
          local_c0 = '\0';
LAB_00e2f65d:
          puVar1 = (void*)puVar5[2];
          if (puVar1 != local_c8) {
            if (local_c8 != (void*)0x0) {
              FUN_00d50b00();
            }
            puVar5[2] = local_c8;
            if (puVar1 != (void*)0x0) {
LAB_00e2f690:
              FUN_00d50b20();
            }
          }
          if (local_c8 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_c0 = '\0';
        FUN_00d235a0();
        FUN_00d50b20();
        lVar6 = lVar6 + 1;
        local_c8 = puVar5;
      } while (local_f8 != lVar6);
      lVar4 = (*PTR__objc_msgSend_024a9998)(local_b8,&local_138,0x10);
    } while (lVar4 != 0);
  }
  (*PTR__objc_release_024a99a0)();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return this_ptr;
  }
                      ___stack_chk_fail();
}

