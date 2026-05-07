// Function: FUN_002ea230
// Address: 002ea230
// Size: 1527 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Removing unreachable block (ram,0x002ea7dd) */
/* WARNING: Removing unreachable block (ram,0x002ea7e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ea230(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_88;
  char local_80;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01beea30();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002ea2c7;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_002ea2c7:
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar6 = -local_50._4_4_;
        }
        else {
          iVar6 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar6 = 0;
        }
        local_50 = CONCAT44(iVar6,(int)local_50);
      }
      lVar4 = (longlong)(int)local_50;
      iVar6 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar6);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar6) break;
      plVar1 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
      local_68 = plVar1;
      if ((DAT_02700970 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026d78f8 = FUN_0006e710();
        _DAT_026d78e0 = "MDAudioTrackItem";
        _DAT_026d78e8 = 0x70;
        _DAT_026d78f0 = FUN_0006e6c0;
        _DAT_026d7900 = 0;
        uRam00000000026d7908 = 0;
        _DAT_026d7910 = 0;
        _DAT_026d7988 = 0;
        uRam00000000026d7990 = 0;
        _DAT_026d7998 = 0;
        DAT_026d799a = 1;
        _DAT_026d7918 = 0;
        uRam00000000026d7920 = 0;
        _DAT_026d7928 = 0;
        uRam00000000026d7930 = 0;
        _DAT_026d7938 = 0;
        uRam00000000026d7940 = 0;
        _DAT_026d7948 = 0;
        uRam00000000026d7950 = 0;
        _DAT_026d7958 = 0;
        uRam00000000026d7960 = 0;
        _DAT_026d7968 = 0;
        uRam00000000026d7970 = 0;
        _DAT_026d7978 = 0;
        uRam00000000026d7980 = 0;
        DAT_026d79a3 = 0;
        _DAT_026d799b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_68;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 == (longlong *)0x0) {
        local_40 = local_68;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  FUN_01bf2670();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_002ea7b7;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) goto LAB_002ea7b7;
  local_60 = '\0';
  local_68 = (longlong *)0x0;
  local_58 = plVar1;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_50._4_4_ = 0;
  while( true ) {
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar6 = -local_50._4_4_;
      }
      else {
        iVar6 = (int)local_50 - local_50._4_4_;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar6 = 0;
      }
      local_50 = CONCAT44(iVar6,(int)local_50);
    }
    lVar4 = (longlong)(int)local_50;
    iVar6 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar6);
    if (*(int *)((longlong)local_58 + 0xc) <= iVar6) break;
    plVar1 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
    local_68 = plVar1;
    if ((DAT_02700970 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026d78f8 = FUN_0006e710();
      _DAT_026d78e0 = "MDAudioTrackItem";
      _DAT_026d78e8 = 0x70;
      _DAT_026d78f0 = FUN_0006e6c0;
      _DAT_026d7900 = 0;
      uRam00000000026d7908 = 0;
      _DAT_026d7910 = 0;
      _DAT_026d7988 = 0;
      uRam00000000026d7990 = 0;
      _DAT_026d7998 = 0;
      DAT_026d799a = 1;
      _DAT_026d7918 = 0;
      uRam00000000026d7920 = 0;
      _DAT_026d7928 = 0;
      uRam00000000026d7930 = 0;
      _DAT_026d7938 = 0;
      uRam00000000026d7940 = 0;
      _DAT_026d7948 = 0;
      uRam00000000026d7950 = 0;
      _DAT_026d7958 = 0;
      uRam00000000026d7960 = 0;
      _DAT_026d7968 = 0;
      uRam00000000026d7970 = 0;
      _DAT_026d7978 = 0;
      uRam00000000026d7980 = 0;
      DAT_026d79a3 = 0;
      _DAT_026d799b = 0;
      ___cxa_guard_release();
    }
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_68;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar5 != (longlong *)0x0) {
      FUN_00075b90();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        if (*unaff_RSI != 0) {
          FUN_00075b90();
          if (local_80 == '\0') {
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_40 = local_88;
          local_38 = '\0';
          cVar2 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            local_40 = local_68;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_002ea548;
          }
        }
        FUN_01bc08b0();
      }
    }
LAB_002ea548:
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002ea7b7:
  FUN_01bee990();
  if (*(longlong *)(unaff_RDI + 0x2e8) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar4 = *(longlong *)(unaff_RDI + 0x2e8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00443760();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


