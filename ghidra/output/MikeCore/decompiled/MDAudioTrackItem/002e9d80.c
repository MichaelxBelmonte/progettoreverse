// Function: FUN_002e9d80
// Address: 002e9d80
// Size: 840 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Removing unreachable block (ram,0x002e9e28) */
/* WARNING: Removing unreachable block (ram,0x002ea08c) */
/* WARNING: Removing unreachable block (ram,0x002ea098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002e9d80(void)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined4 uVar9;
  longlong *local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  local_48 = puVar5;
  if (*unaff_RSI != 0) {
    local_78 = 0;
    local_80 = (longlong *)0x0;
    local_70 = *unaff_RSI;
    local_68 = 0xffffffff;
    local_60 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_68;
      iVar8 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar8);
      if (*(int *)(local_70 + 0xc) <= iVar8) break;
      plVar1 = *(longlong **)(*(longlong *)(local_70 + 0x10) + 8 + lVar6 * 8);
      local_80 = plVar1;
      if ((DAT_02700970 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar7 = &local_80;
        if (cVar3 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar7 == (longlong *)0x0) {
        local_40 = local_80;
        local_38 = '\0';
        uVar9 = FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      else {
        FUN_00075b90();
        plVar1 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = plVar1;
        local_38 = '\0';
        uVar9 = FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          uVar9 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      iVar8 = local_68._4_4_;
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar8 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690(uVar9,local_68._4_4_);
          local_60 = local_60 + iVar8;
          iVar8 = 0;
        }
        local_68 = CONCAT44(iVar8,(int)local_68);
      }
    }
    FUN_002e0650();
  }
  puVar5 = local_48;
  FUN_01bee990();
  FUN_002ea230();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


