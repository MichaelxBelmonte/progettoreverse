// Function: FUN_01eba210
// Address: 01eba210
// Size: 2210 bytes
// Class: GNModuleView


void FUN_01eba210(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar5;
  undefined4 uVar6;
  longlong local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_60 + 0x6c0))();
  if (cVar3 == '\0') {
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = FUN_00cafdf0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_01cb4790();
      local_68 = local_60;
      if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48370();
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x390))();
      FUN_00d403d0();
      local_170 = DAT_027fe478;
      if (DAT_027fe478 != 0) {
        FUN_00d50b00();
      }
      local_168 = '\x01';
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      local_160 = 0;
      local_158 = '\0';
      FUN_00d40470(&local_160,&stack0xfffffffffffffed0,3,3);
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_68 + 0x3a0))();
      lVar4 = local_88;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      (**(code **)(*local_68 + 0x3a8))();
      local_e8 = local_78;
      local_e0 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_e0 = '\x01';
      FUN_01cfd290(DAT_0239011c,&local_e8);
      plVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b0))();
      (**(code **)(*local_68 + 0x3a0))();
      local_d8 = local_60;
      local_d0 = 0;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_d0 = '\x01';
      FUN_01d488d0();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_150 = DAT_027fe480;
      if (DAT_027fe480 != 0) {
        FUN_00d50b00();
      }
      local_148 = '\x01';
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027fe488;
      if (DAT_027fe488 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      FUN_00083ea0(2,&local_178);
      FUN_000b4da0();
      local_c8 = local_78;
      local_c0 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_c0 = '\x01';
      FUN_00d40470(&local_c8,&stack0xfffffffffffffee0,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40(DAT_02390124);
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b8))();
      (**(code **)(*local_68 + 0x370))();
      local_b8 = local_60;
      local_b0 = 0;
      if (local_58 == '\0') {
        if (local_60 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_b0 = '\x01';
      FUN_01d48a10();
      if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027fe490;
      lVar4 = *(longlong *)(unaff_RDI + 0x138);
      if (lVar4 == 0) {
        if (DAT_027fe490 != 0) {
          FUN_00d50b00();
        }
        bVar5 = lVar2 != 0;
        lVar4 = lVar2;
      }
      else {
        FUN_00d50b00();
        bVar5 = true;
      }
      if (lVar4 != 0) {
        (**(code **)(*local_68 + 0x370))();
        local_a8 = local_60;
        local_a0 = 0;
        if (local_58 == '\0') {
          if (local_60 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_a0 = '\x01';
        FUN_01d48a10();
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_68 + 0x390))();
        local_98 = local_60;
        local_90 = 0;
        if (local_58 == '\0') {
          if (local_60 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_90 = '\x01';
        FUN_01d488d0();
        if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (longlong *)*unaff_RSI;
        local_138 = '\0';
        local_140 = lVar4;
        FUN_01e3f820();
        uVar6 = FUN_00d05530();
        (**(code **)(*plVar1 + 0x3f8))(uVar6,2);
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48390();
      if ((bVar5) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}


