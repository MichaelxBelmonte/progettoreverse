// Function: FUN_002312f0
// Address: 002312f0
// Size: 2638 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioPlaybackRegion"
//   "_startInModificationTime"
//   "_durationInModificationTime"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_002312f0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00d216c0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x980))();
  FUN_00d50b20();
  if (*arg1 != 0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *arg1;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          iVar6 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
      lVar3 = (int64_t)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(local_48 + 0xc) <= iVar6) break;
      local_58 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      FUN_00d50b00();
      lVar3 = g_026f6f58;
      if (g_026f6f58 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar3;
      local_188 = '\x01';
      local_178 = '\0';
      local_180 = lVar5;
      FUN_000823a0();
      uVar7 = FUN_00e86210();
      lVar3 = g_026f6f60;
      if (g_026f6f60 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      FUN_00c841b0(uVar7,&local_170);
      local_88 = local_f0;
      local_80 = 0;
      if (local_e8 == '\0') {
        if (local_f0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e8 = '\0';
      }
      local_80 = '\x01';
      local_160 = local_58;
      local_158 = '\0';
      FUN_000bfbc0(&local_180,&local_190,0xa0,&local_88);
      lVar3 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = lVar3;
      local_70 = '\0';
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = local_48;
    FUN_000be170();
    param_1 = (void*)lVar3;
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x178) + 0xc) == 0) goto LAB_00231adb;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_58 + 0x450))();
  if (cVar2 == '\0') {
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_70 = '\0';
      local_78 = 0;
LAB_00231721:
      cVar2 = '\0';
    }
    else {
      FUN_006f3f00();
      if (local_78 == 0) goto LAB_00231721;
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_60 = '\0';
        local_68 = 0;
      }
      else {
        FUN_006f3f00();
      }
      cVar2 = FUN_00751ba0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_00231adb;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_00231adb;
  uVar7 = FUN_00d50b00();
  local_150 = g_026f6f68;
  if (g_026f6f68 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_148 = '\x01';
  local_138 = '\0';
  local_140 = lVar3;
  if ((g_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_02, iVar6 != 0)) {
    g_026f99d8 = FUN_00274820();
    g_026f99c0 = "MUAraAudioPlaybackRegion";
    g_026f99c8 = 0xb0;
    g_026f99d0 = FUN_00275d40;
    g_026f99e0 = 0;
    ram_00000000026f99e8 = 0;
    g_026f99f0 = 0;
    g_026f9a68 = 0;
    ram_00000000026f9a70 = 0;
    g_026f9a78 = 0;
    g_026f9a7a = 1;
    g_026f99f8 = 0;
    ram_00000000026f9a00 = 0;
    g_026f9a08 = 0;
    ram_00000000026f9a10 = 0;
    g_026f9a18 = 0;
    ram_00000000026f9a20 = 0;
    g_026f9a28 = 0;
    ram_00000000026f9a30 = 0;
    g_026f9a38 = 0;
    ram_00000000026f9a40 = 0;
    g_026f9a48 = 0;
    ram_00000000026f9a50 = 0;
    g_026f9a58 = 0;
    ram_00000000026f9a60 = 0;
    g_026f9a83 = 0;
    g_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar3 == 0) || (lVar3 = *(int64_t *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_0023189d;
LAB_0023188c:
    local_a0 = 0;
    FUN_00d50b00();
  }
  else {
    lVar3 = *(int64_t *)(lVar3 + 0x30);
    if (lVar3 != 0) goto LAB_0023188c;
LAB_0023189d:
    lVar3 = 0;
  }
  local_a0 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_a8 = lVar3;
  uVar7 = FUN_000bfbc0(&local_140,&local_150,0xa0,&local_a8);
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (this_ptr != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((g_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_03, iVar6 != 0)) {
    g_026f99d8 = FUN_00274820();
    g_026f99c0 = "MUAraAudioPlaybackRegion";
    g_026f99c8 = 0xb0;
    g_026f99d0 = FUN_00275d40;
    g_026f99e0 = 0;
    ram_00000000026f99e8 = 0;
    g_026f99f0 = 0;
    g_026f9a68 = 0;
    ram_00000000026f9a70 = 0;
    g_026f9a78 = 0;
    g_026f9a7a = 1;
    g_026f99f8 = 0;
    ram_00000000026f9a00 = 0;
    g_026f9a08 = 0;
    ram_00000000026f9a10 = 0;
    g_026f9a18 = 0;
    ram_00000000026f9a20 = 0;
    g_026f9a28 = 0;
    ram_00000000026f9a30 = 0;
    g_026f9a38 = 0;
    ram_00000000026f9a40 = 0;
    g_026f9a48 = 0;
    ram_00000000026f9a50 = 0;
    g_026f9a58 = 0;
    ram_00000000026f9a60 = 0;
    g_026f9a83 = 0;
    g_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    uVar7 = extraout_XMM0_Da_01;
    if ((lVar3 == 0) || (lVar3 = *(int64_t *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_00231a36;
LAB_00231a25:
    local_90 = 0;
    uVar7 = FUN_00d50b00();
  }
  else {
    lVar3 = *(int64_t *)(lVar3 + 0x30);
    uVar7 = extraout_XMM0_Da_00;
    if (lVar3 != 0) goto LAB_00231a25;
LAB_00231a36:
    lVar3 = 0;
  }
  local_90 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  local_98 = lVar3;
  FUN_000bfd00(uVar7,&local_120);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = plVar1;
  FUN_00d21140();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00231adb:
  FUN_00d403d0();
  local_110 = g_026e0f08;
  if (g_026e0f08 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,1,1);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

