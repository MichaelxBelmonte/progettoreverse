// Function: FUN_00d2fe60
// Address: 00d2fe60
// Size: 796 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00d2fe60(void)

{
  void*puVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint64_t local_118;
  uint64_t uStack_110;
  int64_t *local_108;
  uint64_t uStack_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  int64_t local_d8;
  uint8_t local_b8 [128];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*puVar1)();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (int64_t *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar3 = (*puVar1)(local_b8,&local_118,0x10);
  if (lVar3 == 0) {
    bVar6 = false;
    lVar5 = 0;
  }
  else {
    local_d8 = *local_108;
    uVar7 = extraout_XMM0_Da;
    do {
      lVar4 = 0;
      do {
        if (*local_108 != local_d8) {
          uVar7 = _objc_enumerationMutation();
        }
        cVar2 = (*puVar1)(uVar7,&cf_en);
        lVar5 = g_0277d5a8;
        if ((((cVar2 != '\0') ||
             (cVar2 = (*puVar1)(extraout_XMM0_Da_00,&cf_fr), lVar5 = g_0277d5b0,
             cVar2 != '\0')) ||
            (cVar2 = (*puVar1)(extraout_XMM0_Da_01,&cf_de), lVar5 = g_0277d5b8,
            cVar2 != '\0')) ||
           (((cVar2 = (*puVar1)(extraout_XMM0_Da_02,&cf_es), lVar5 = g_0277d5c0,
             cVar2 != '\0' ||
             (cVar2 = (*puVar1)(extraout_XMM0_Da_03,&cf_it), lVar5 = g_0277d5c8,
             cVar2 != '\0')) ||
            ((cVar2 = (*puVar1)(extraout_XMM0_Da_04,&cf_ja), lVar5 = g_0277d5d0,
             cVar2 != '\0' ||
             (cVar2 = (*puVar1)(extraout_XMM0_Da_05,&cf_sv), lVar5 = g_0277d5d8,
             cVar2 != '\0')))))) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar6 = lVar5 != 0;
          goto LAB_00d3007e;
        }
        lVar4 = lVar4 + 1;
        uVar7 = extraout_XMM0_Da_06;
      } while (lVar3 != lVar4);
      lVar3 = (*puVar1)(local_b8,&local_118,0x10);
      bVar6 = false;
      lVar5 = 0;
      uVar7 = extraout_XMM0_Da_07;
    } while (lVar3 != 0);
  }
LAB_00d3007e:
  (*PTR__objc_release_024a99a0)();
  lVar3 = g_0277d5a8;
  if (lVar5 == 0) {
    *(void*)(this_ptr + 1) = 0;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar3;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (!bVar6) {
      FUN_00d50b00();
    }
    *this_ptr = lVar5;
  }
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return this_ptr;
}

