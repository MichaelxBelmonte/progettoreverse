// Function: FUN_002eb350
// Address: 002eb350
// Size: 880 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_002eb350(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int unaff_ESI;
  int64_t local_c8;
  char local_c0;
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
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01bf1420();
  FUN_01beab60();
  (**(code **)(*(int64_t *)(local_c8 + 0x1e0) + 0x50))();
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    if (unaff_ESI == 2) {
      cVar4 = FUN_01cf0800();
      if (cVar4 == '\0') {
        (**(code **)(*plVar3 + 0x918))();
        FUN_01cee390();
        lVar1 = g_026f6f70;
        if (g_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_026fe488;
        if (g_026fe488 != 0) {
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
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_50 = '\x01';
        (**(code **)(*plVar3 + 0x6a8))();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
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
      lVar1 = g_026f6f70;
      if (cVar4 != '\0') {
        if (g_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_026fe490;
        local_88 = lVar1;
        local_80 = '\x01';
        if (g_026fe490 != 0) {
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
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_40 = '\x01';
        (**(code **)(*plVar3 + 0x6a8))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
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

