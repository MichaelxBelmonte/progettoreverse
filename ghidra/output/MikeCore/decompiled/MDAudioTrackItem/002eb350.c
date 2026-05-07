// Function: FUN_002eb350
// Address: 002eb350
// Size: 880 bytes
// Class: MDAudioTrackItem


void FUN_002eb350(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int unaff_ESI;
  longlong local_c8;
  char local_c0;
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
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01bf1420();
  FUN_01beab60();
  (**(code **)(*(longlong *)(local_c8 + 0x1e0) + 0x50))();
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    if (unaff_ESI == 2) {
      cVar4 = FUN_01cf0800();
      if (cVar4 == '\0') {
        (**(code **)(*plVar3 + 0x918))();
        FUN_01cee390();
        lVar1 = DAT_026f6f70;
        if (DAT_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_026fe488;
        if (DAT_026fe488 != 0) {
          FUN_00d50b00();
        }
        local_a8 = lVar2;
        local_a0 = '\x01';
        local_98 = 0;
        local_90 = '\0';
        FUN_00d31230(&local_98,&local_a8);
        local_58 = local_38;
        local_50 = 0;
        if (local_30 == '\0') {
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_50 = '\x01';
        (**(code **)(*plVar3 + 0x6a8))();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      cVar4 = FUN_01cf0800();
      lVar1 = DAT_026f6f70;
      if (cVar4 != '\0') {
        if (DAT_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_026fe490;
        local_88 = lVar1;
        local_80 = '\x01';
        if (DAT_026fe490 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar2;
        local_70 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00d31230(&local_68,&local_78);
        local_48 = local_38;
        local_40 = 0;
        if (local_30 == '\0') {
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_40 = '\x01';
        (**(code **)(*plVar3 + 0x6a8))();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        FUN_01cee390();
      }
      if (unaff_ESI == 0) {
        (**(code **)(*plVar3 + 0x918))();
      }
      else {
        (**(code **)(*plVar3 + 0x918))();
      }
    }
    FUN_00d50b20();
  }
  return;
}


