// Function: FUN_01e5e460
// Address: 01e5e460
// Size: 600 bytes
// Class: GNString
// String references:
//   "frame"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5e460(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  float fVar2;
  void*puVar3;
  char cVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar6;
  uint64_t uVar7;
  uint32_t local_b8;
  uint32_t local_a8;
  uint64_t local_88;
  uint8_t uStack_80;
  uint64_t uStack_70;
  uint64_t local_58;
  uint8_t uStack_50;
  uint64_t uStack_40;
  uint32_t local_38;
  uint32_t uStack_34;
  
  uStack_34 = (float)((uint64_t)param_1 >> 0x20);
  local_38 = (float)param_1;
  uVar7 = param_2;
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    FUN_01f50d20();
  }
  else {
    FUN_01d907a0();
  }
  uVar5 = FUN_01f51370();
  if ((uStack_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  fVar2 = _UNK_02390374;
  local_a8 = (uint32_t)param_2;
  if (*(char *)(this_ptr + 0x70) != '\0') {
    local_b8 = g_02390370;
    while( true ) {
      FUN_01f27fe0();
      FUN_01f300e0(local_38);
      if ((uStack_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((uStack_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == 0) break;
      local_38 = local_38 + g_02421cf0;
      uStack_34 = uStack_34 + _UNK_02421cf4;
      cVar4 = FUN_00d05440(uVar5,uVar7,local_38,local_a8);
      if (cVar4 == '\0') {
        local_38 = local_b8;
        uStack_34 = fVar2;
        local_b8 = local_b8 + g_023b36ac;
      }
    }
  }
  puVar3 = PTR__objc_msgSend_024a9998;
  if (*(int64_t *)(this_ptr + 0xa0) != 0) {
    uVar5 = (*PTR__objc_msgSend_024a9998)();
    lVar1 = (*puVar3)(uVar5,0);
    puVar3 = PTR_s_frame_026ca200;
    if (lVar1 == 0) {
      uStack_40 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da,PTR_s_frame_026ca200);
    }
    lVar1 = (*PTR__objc_msgSend_024a9998)();
    if (lVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da_00,puVar3);
      uVar5 = (uint32_t)uStack_70;
      uVar6 = (uint32_t)((uint64_t)uStack_70 >> 0x20);
    }
    (*PTR__objc_msgSend_024a9998)
              (SUB84((double)local_38,0),
               (uStack_40 - (double)uStack_34) - (double)CONCAT44(uVar6,uVar5));
  }
  FUN_01e5a130(local_a8);
  return;
}

