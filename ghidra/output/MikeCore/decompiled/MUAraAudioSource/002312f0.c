// Function: FUN_002312f0
// Address: 002312f0
// Size: 2638 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioPlaybackRegion"
//   "_startInModificationTime"
//   "_durationInModificationTime"


/* WARNING: Removing unreachable block (ram,0x00231362) */
/* WARNING: Removing unreachable block (ram,0x0023136e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002312f0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d216c0();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x980))();
  FUN_00d50b20();
  if (*unaff_RSI != 0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *unaff_RSI;
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
      lVar3 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(local_48 + 0xc) <= iVar6) break;
      local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      FUN_00d50b00();
      lVar3 = DAT_026f6f58;
      if (DAT_026f6f58 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar3;
      local_188 = '\x01';
      local_178 = '\0';
      local_180 = lVar5;
      FUN_000823a0();
      uVar7 = FUN_00e86210();
      lVar3 = DAT_026f6f60;
      if (DAT_026f6f60 != 0) {
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
      if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
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
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = local_48;
    FUN_000be170();
    param_1 = (pthread_key_t)lVar3;
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0x178) + 0xc) == 0) goto LAB_00231adb;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_58 + 0x450))();
  if (cVar2 == '\0') {
    if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
      local_70 = '\0';
      local_78 = 0;
LAB_00231721:
      cVar2 = '\0';
    }
    else {
      FUN_006f3f00();
      if (local_78 == 0) goto LAB_00231721;
      if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
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
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
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
  local_150 = DAT_026f6f68;
  if (DAT_026f6f68 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_148 = '\x01';
  local_138 = '\0';
  local_140 = lVar3;
  if ((DAT_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_02, iVar6 != 0)) {
    _DAT_026f99d8 = FUN_00274820();
    _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
    _DAT_026f99c8 = 0xb0;
    _DAT_026f99d0 = FUN_00275d40;
    _DAT_026f99e0 = 0;
    uRam00000000026f99e8 = 0;
    _DAT_026f99f0 = 0;
    _DAT_026f9a68 = 0;
    uRam00000000026f9a70 = 0;
    _DAT_026f9a78 = 0;
    DAT_026f9a7a = 1;
    _DAT_026f99f8 = 0;
    uRam00000000026f9a00 = 0;
    _DAT_026f9a08 = 0;
    uRam00000000026f9a10 = 0;
    _DAT_026f9a18 = 0;
    uRam00000000026f9a20 = 0;
    _DAT_026f9a28 = 0;
    uRam00000000026f9a30 = 0;
    _DAT_026f9a38 = 0;
    uRam00000000026f9a40 = 0;
    _DAT_026f9a48 = 0;
    uRam00000000026f9a50 = 0;
    _DAT_026f9a58 = 0;
    uRam00000000026f9a60 = 0;
    DAT_026f9a83 = 0;
    _DAT_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_0023189d;
LAB_0023188c:
    local_a0 = 0;
    FUN_00d50b00();
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x30);
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
    if (((local_58 != (longlong *)0x0) && (uVar7 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
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
  if (unaff_RDI != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((DAT_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_03, iVar6 != 0)) {
    _DAT_026f99d8 = FUN_00274820();
    _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
    _DAT_026f99c8 = 0xb0;
    _DAT_026f99d0 = FUN_00275d40;
    _DAT_026f99e0 = 0;
    uRam00000000026f99e8 = 0;
    _DAT_026f99f0 = 0;
    _DAT_026f9a68 = 0;
    uRam00000000026f9a70 = 0;
    _DAT_026f9a78 = 0;
    DAT_026f9a7a = 1;
    _DAT_026f99f8 = 0;
    uRam00000000026f9a00 = 0;
    _DAT_026f9a08 = 0;
    uRam00000000026f9a10 = 0;
    _DAT_026f9a18 = 0;
    uRam00000000026f9a20 = 0;
    _DAT_026f9a28 = 0;
    uRam00000000026f9a30 = 0;
    _DAT_026f9a38 = 0;
    uRam00000000026f9a40 = 0;
    _DAT_026f9a48 = 0;
    uRam00000000026f9a50 = 0;
    _DAT_026f9a58 = 0;
    uRam00000000026f9a60 = 0;
    DAT_026f9a83 = 0;
    _DAT_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    uVar7 = extraout_XMM0_Da_01;
    if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_00231a36;
LAB_00231a25:
    local_90 = 0;
    uVar7 = FUN_00d50b00();
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x30);
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
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00231adb:
  FUN_00d403d0();
  local_110 = DAT_026e0f08;
  if (DAT_026e0f08 != 0) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


