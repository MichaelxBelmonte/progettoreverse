// ===================================================================
// GNCelemonyHTTPDownloadRequest — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00e51950
// ============================================================
// Function: FUN_00e51950
// Address: 00e51950
// Size: 1949 bytes
// Class: GNCelemonyHTTPDownloadRequest
// String references:
//   "GNCelemonyHTTPDownloadRequest"

void FUN_00e51950(void)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char *pcVar6;
  int iVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  FUN_00e93050();
  local_90 = local_58;
  local_88 = 0;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_88 = '\x01';
  uVar3 = FUN_00e1cfc0();
  uVar3 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar3);
  uVar9 = extraout_XMM0_Da_00;
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  plVar8 = (int64_t *)(this_ptr + 0x10);
  local_60 = (*PTR__objc_msgSend_024a9998)(uVar9,uVar3);
  FUN_00e94b90();
  local_80 = local_58;
  local_78 = 0;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_78 = '\x01';
  uVar3 = FUN_00e1cfc0();
  (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_01,uVar3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e92270();
  (*PTR__objc_msgSend_024a9998)();
  FUN_00e94c30();
  lVar4 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00e51b24;
    }
  }
  else if (local_58 != 0) {
LAB_00e51b24:
    uVar3 = (*PTR__objc_msgSend_024a9998)
                      ((int64_t)*(int *)(lVar4 + 0x18),*(void*)(lVar4 + 0x10));
    (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_02,uVar3);
    FUN_00d50b20();
  }
  FUN_00e94af0();
  FUN_00c9fe20();
  lVar4 = local_58;
  pcVar6 = &local_a0;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_a0 = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 == '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    local_50[0] = '\0';
    local_58 = 0;
    local_48 = lVar4;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar7 = -local_40._4_4_;
        }
        else {
          iVar7 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar7 = 0;
        }
        local_40 = CONCAT44(iVar7,(int)local_40);
      }
      lVar4 = (int64_t)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (*(int *)(local_48 + 0xc) <= iVar7) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
      uVar9 = FUN_00e94af0();
      local_f0 = local_58;
      local_e8 = '\0';
      FUN_01de4130(uVar9,&local_f0);
      lVar4 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      local_e0 = lVar4;
      local_d8 = '\0';
      uVar3 = FUN_00e1cfc0();
      local_d0 = local_58;
      local_c8 = '\0';
      uVar5 = FUN_00e1cfc0();
      (*PTR__objc_msgSend_024a9998)(uVar5,uVar3);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*plVar8;
  if ((g_02786ce8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_02786c38 = FUN_00e79220();
    g_02786c20 = "GNCelemonyHTTPDownloadRequest";
    g_02786c28 = 0xd0;
    g_02786c30 = FUN_00e53020;
    g_02786c40 = 0;
    ram_0000000002786c48 = 0;
    g_02786c50 = 0;
    g_02786cc8 = 0;
    ram_0000000002786cd0 = 0;
    g_02786cd8 = 0;
    g_02786cda = 2;
    g_02786c58 = 0;
    ram_0000000002786c60 = 0;
    g_02786c68 = 0;
    ram_0000000002786c70 = 0;
    g_02786c78 = 0;
    ram_0000000002786c80 = 0;
    g_02786c88 = 0;
    ram_0000000002786c90 = 0;
    g_02786c98 = 0;
    ram_0000000002786ca0 = 0;
    g_02786ca8 = 0;
    ram_0000000002786cb0 = 0;
    g_02786cb8 = 0;
    ram_0000000002786cc0 = 0;
    g_02786ce3 = 0;
    g_02786cdb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00e51e14;
  }
  plVar8 = &g_02802688;
LAB_00e51e14:
  if (*plVar8 == 0) {
    FUN_00e2da70();
    uVar9 = FUN_00e2dce0();
    (*PTR__objc_msgSend_024a9998)(uVar9,local_60);
    uVar3 = (*PTR__objc_retain_024a99a8)();
    *(void*)(this_ptr + 0x38) = uVar3;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    _objc_alloc();
    uVar9 = FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = this_ptr;
    (*PTR__objc_msgSend_024a9998)(uVar9,&local_b0);
    uVar3 = _objc_autorelease();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e2da70();
    uVar9 = FUN_00e2dce0();
    (*PTR__objc_msgSend_024a9998)(uVar9,local_60);
    uVar3 = (*PTR__objc_retain_024a99a8)();
    *(void*)(this_ptr + 0x38) = uVar3;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    _objc_alloc();
    uVar9 = FUN_00d50b00();
    local_b8 = '\x01';
    local_c0 = this_ptr;
    (*PTR__objc_msgSend_024a9998)(uVar9,&local_c0);
    uVar3 = _objc_autorelease();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_01f99c60(0,0);
  if (iVar7 == 0) {
    FUN_00e50fb0();
    *(void*)(this_ptr + 0x60) = 1;
    lVar4 = *(int64_t *)(this_ptr + 0x38);
  }
  else {
    (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_03,uVar3);
    *(void*)(this_ptr + 0x60) = 1;
    lVar4 = *(int64_t *)(this_ptr + 0x38);
  }
  if (lVar4 != 0) {
    cVar2 = FUN_00e92480();
    if (cVar2 == '\0') {
      if (*(char *)(this_ptr + 0x60) != '\0') {
        *(void*)(this_ptr + 0x60) = 0;
        (*PTR__objc_msgSend_024a9998)();
      }
    }
    else if (*(char *)(this_ptr + 0x60) == '\0') {
      (*PTR__objc_msgSend_024a9998)();
      *(void*)(this_ptr + 0x60) = 1;
    }
  }
  (*PTR__objc_release_024a99a0)();
  return;
}

