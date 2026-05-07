// Function: FUN_003bf7a0
// Address: 003bf7a0
// Size: 693 bytes
// Class: MDAudioTrackHeaderViewController


/* WARNING: Removing unreachable block (ram,0x003bf9f0) */
/* WARNING: Removing unreachable block (ram,0x003bf9fc) */

void FUN_003bf7a0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_90 = param_1;
  FUN_003ba530();
  lVar1 = local_48;
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    if ((*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x9a0))(), cVar3 != '\0')) {
      local_8c = param_2;
      FUN_01e40eb0();
      lVar1 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_003bb820();
        local_70 = local_48;
        if ((local_40[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_003bb720();
        local_78 = local_48;
        FUN_003bef50();
        local_60 = 0;
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = local_c0;
        FUN_003b7a90();
        local_58 = local_88;
        local_50 = 0;
        local_a0 = DAT_026fe4a8;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
            local_a0 = DAT_026fe4a8;
          }
        }
        else {
          local_80 = '\0';
        }
        local_50 = '\x01';
        DAT_026fe4a8 = local_a0;
        if (local_a0 != 0) {
          local_50 = '\x01';
          FUN_00d50b00();
        }
        lVar1 = local_78;
        local_98 = '\x01';
        FUN_004b1320(&local_58,unaff_SIL,&local_a0,0);
        lVar2 = local_70;
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


