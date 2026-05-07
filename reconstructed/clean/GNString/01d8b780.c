// Function: FUN_01d8b780
// Address: 01d8b780
// Size: 1557 bytes
// Class: GNString
// String references:
//   "subtype"
//   "sendEvent:"
//   "type"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01d8b780(double param_1,void*param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  void*puVar4;
  int64_t *plVar5;
  short sVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *arg1;
  void*this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  double local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  local_50 = param_1;
  uVar7 = FUN_01d3a560();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d8b7dd;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01d8b7dd:
    FUN_01d3a630();
    FUN_01e466c0();
    (**(code **)(*arg1 + 0x6a0))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*arg1 + 0x920))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d3a930();
    FUN_00d50b20();
    local_44 = 0;
    goto joined_r0x01d8b81e;
  }
  local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
joined_r0x01d8b81e:
  if (param_2 != (void*)0x0) {
    *param_2 = 0;
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  if ((local_50 != g_023b19a0) || (NAN(local_50) || NAN(g_023b19a0))) {
    local_50 = (double)(*PTR__objc_msgSend_024a9998)();
  }
  else {
    local_50 = (double)(*PTR__objc_msgSend_024a9998)();
  }
  lVar8 = (*PTR__objc_msgSend_024a9998)
                    (local_50,0x4e443cfe,*(void*)PTR__NSEventTrackingRunLoopMode_0249c130,1);
  if (lVar8 != 0) {
    bVar2 = false;
    uVar7 = extraout_XMM0_Qa;
    do {
      FUN_01f1c940(uVar7,*(void*)arg1[0x38]);
      plVar10 = local_40;
      pcVar3 = g_028b8690;
      if (local_40 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        bVar2 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), pcVar3 = g_028b8690, local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          pcVar3 = g_028b8690;
        }
      }
      g_028b8690 = pcVar3;
      if (pcVar3 != 0x0) {
        local_78 = 0;
        uVar7 = FUN_00d50b00();
        local_78 = '\x01';
        local_80 = arg1;
        (*pcVar3)(uVar7,&local_80);
        plVar5 = local_40;
        if (local_40 == plVar10) {
          plVar5 = plVar10;
          bVar1 = bVar2;
          if ((bVar2) || (plVar10 == (int64_t *)0x0)) goto LAB_01d8bb2a;
          if (local_38 != '\0') goto LAB_01d8baf7;
          bVar1 = true;
          FUN_00d50b00();
          if (local_38 == '\0') goto LAB_01d8bb3e;
LAB_01d8bb30:
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d8bb2a:
          plVar10 = plVar5;
          if (local_38 != '\0') goto LAB_01d8bb30;
        }
        else {
          if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d8baf7:
          plVar10 = plVar5;
          local_38 = '\0';
          bVar1 = true;
        }
LAB_01d8bb3e:
        bVar2 = bVar1;
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      puVar4 = PTR__objc_msgSend_024a9998;
      if (plVar10 != (int64_t *)0x0) {
LAB_01d8bc5d:
        FUN_01d3a5b0();
        (*PTR__objc_release_024a99a0)();
        if ((char)local_44 == '\0') {
          FUN_01d3a910();
        }
        FUN_01f7ebb0();
        plVar5 = local_40;
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        local_70 = arg1;
        (**(code **)(*plVar5 + 0x378))(1,&local_70);
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        *this_ptr = plVar10;
        *(void*)(this_ptr + 1) = 1;
        return this_ptr;
      }
      lVar9 = (*PTR__objc_msgSend_024a9998)();
      uVar7 = extraout_XMM0_Qa_01;
      if ((lVar9 == 0xd) && (sVar6 = (*puVar4)(), uVar7 = extraout_XMM0_Qa_02, sVar6 == 2))
      {
        (*PTR__objc_msgSend_024a9998)(1,lVar8);
        goto LAB_01d8bc5d;
      }
      (*puVar4)(uVar7,lVar8);
      lVar8 = (*puVar4)(local_50,0x4e443cfe,
                                *(void*)PTR__NSEventTrackingRunLoopMode_0249c130,1);
      uVar7 = extraout_XMM0_Qa_00;
    } while (lVar8 != 0);
  }
  if (param_2 != (void*)0x0) {
    *param_2 = 1;
  }
  if ((char)local_44 == '\0') {
    FUN_01d3a910();
  }
  (*PTR__objc_release_024a99a0)();
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

