// Function: FUN_01d5b760
// Address: 01d5b760
// Size: 4052 bytes
// Class: GNMultipleValue
// String references:
//   "orderFrontStandardAboutPanel:"
//   "orderFrontPreferencesPanel:"
//   "hideOtherApplications:"
//   "unhideAllApplications:"
//   "terminate:"
//   "hide:"


void FUN_01d5b760(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *local_240;
  char local_238;
  longlong local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_50 = plVar1;
  (**(code **)(*plVar1 + 0x18))();
  FUN_01f27fe0();
  (**(code **)(*local_240 + 0x458))();
  local_60 = local_70;
  local_58 = 0;
  lVar4 = DAT_027f0918;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      lVar4 = DAT_027f0918;
    }
  }
  else {
    local_68 = '\0';
  }
  local_58 = '\x01';
  DAT_027f0918 = lVar4;
  if (lVar4 != 0) {
    local_58 = '\x01';
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar4;
  FUN_00ca0840();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_msgSend_024a9998)();
  lVar2 = (*(code *)PTR__objc_msgSend_024a9998)
                    (PTR_s_orderFrontStandardAboutPanel__026c97a8,*(undefined8 *)PTR__NSApp_0249c0f8
                    );
  lVar4 = DAT_027f0920;
  if (lVar2 == -1) {
    uVar6 = 0;
    lVar2 = 0;
  }
  else {
    if (DAT_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_027f0928;
    if (DAT_027f0928 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar2;
    local_218 = '\x01';
    local_210 = local_50;
    local_208 = '\0';
    FUN_00d31230(&local_210,&local_220);
    lVar2 = local_48;
    if (local_48 == 0) {
      uVar6 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      uVar6 = 1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      uVar6 = 1;
    }
    if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_200 = lVar2;
    local_1f8 = '\0';
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                    (PTR_s_orderFrontPreferencesPanel__026c97b8,*(undefined8 *)PTR__NSApp_0249c0f8);
  lVar4 = DAT_027f0920;
  if (lVar3 != -1) {
    if (DAT_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027f0930;
    local_1f0 = lVar4;
    local_1e8 = '\x01';
    if (DAT_027f0930 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar3;
    local_1d8 = '\x01';
    local_1d0 = local_50;
    local_1c8 = '\0';
    FUN_00d31230(&local_1d0,&local_1e0);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5bb70;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5bbc8:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5bbc8;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5bb70:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_1b8 = '\0';
    local_1c0 = lVar2;
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                    (PTR_s_hide__026ca0e0,*(undefined8 *)PTR__NSApp_0249c0f8);
  lVar4 = DAT_027f0920;
  if (lVar3 != -1) {
    if (DAT_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027f0938;
    local_1b0 = lVar4;
    local_1a8 = '\x01';
    if (DAT_027f0938 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar3;
    local_198 = '\x01';
    local_190 = local_50;
    local_188 = '\0';
    FUN_00d31230(&local_190,&local_1a0);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5bd71;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5bde5:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5bde5;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5bd71:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_178 = '\0';
    local_180 = lVar2;
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                    (PTR_s_hideOtherApplications__026c97c0,*(undefined8 *)PTR__NSApp_0249c0f8);
  lVar4 = DAT_027f0920;
  if (lVar3 != -1) {
    if (DAT_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027f0940;
    local_170 = lVar4;
    local_168 = '\x01';
    if (DAT_027f0940 != 0) {
      FUN_00d50b00();
    }
    local_160 = lVar3;
    local_158 = '\x01';
    local_150 = local_50;
    local_148 = '\0';
    FUN_00d31230(&local_150,&local_160);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5bf8e;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5c002:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5c002;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5bf8e:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_138 = '\0';
    local_140 = lVar2;
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                    (PTR_s_unhideAllApplications__026c97c8,*(undefined8 *)PTR__NSApp_0249c0f8);
  lVar4 = DAT_027f0920;
  if (lVar3 != -1) {
    if (DAT_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027f0948;
    local_130 = lVar4;
    local_128 = '\x01';
    if (DAT_027f0948 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar3;
    local_118 = '\x01';
    local_110 = local_50;
    local_108 = '\0';
    FUN_00d31230(&local_110,&local_120);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5c1ab;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5c21f:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5c21f;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5c1ab:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_f8 = '\0';
    local_100 = lVar2;
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                    (PTR_s_terminate__026c97d0,*(undefined8 *)PTR__NSApp_0249c0f8);
  lVar4 = DAT_027f0920;
  if (lVar3 != -1) {
    if (DAT_027f0920 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027f0950;
    local_f0 = lVar4;
    local_e8 = '\x01';
    if (DAT_027f0950 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar3;
    local_d8 = '\x01';
    local_d0 = local_50;
    local_c8 = '\0';
    FUN_00d31230(&local_d0,&local_e0);
    lVar4 = local_48;
    if (lVar2 == local_48) {
      lVar4 = lVar2;
      if (((char)uVar6 == '\0') && (lVar2 != 0)) {
        if (local_40 != '\0') goto LAB_01d5c3c8;
        local_38 = uVar6;
        FUN_00d50b00();
        uVar6 = 1;
      }
LAB_01d5c43c:
      lVar2 = lVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        local_38 = uVar6;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        uVar6 = 1;
        if (((char)local_38 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5c43c;
      }
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5c3c8:
      local_40 = '\0';
      uVar6 = 1;
      lVar2 = lVar4;
    }
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    local_b8 = '\0';
    local_c0 = lVar2;
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_027f0920;
  if (DAT_027f0920 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027f0958;
  local_b0 = lVar4;
  local_a8 = '\x01';
  if (DAT_027f0958 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar3;
  local_98 = '\x01';
  local_90 = local_50;
  local_88 = '\0';
  FUN_00d31230(&local_90,&local_a0);
  lVar4 = local_48;
  if (lVar2 == local_48) {
    if (((char)uVar6 == '\0') && (lVar2 != 0)) {
      lVar4 = lVar2;
      if (local_40 != '\0') goto LAB_01d5c5b8;
      local_38 = uVar6;
      FUN_00d50b00();
      goto LAB_01d5c5f4;
    }
  }
  else {
    if (local_40 != '\0') {
      if (((char)uVar6 != '\0') && (lVar2 != 0)) {
        local_38 = uVar6;
        FUN_00d50b20();
      }
LAB_01d5c5b8:
      local_40 = '\0';
      cVar5 = '\x01';
      lVar2 = lVar4;
      goto joined_r0x01d5c625;
    }
    local_38 = uVar6;
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_38 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01d5c5f4:
    uVar6 = 1;
    lVar2 = lVar4;
  }
  cVar5 = (char)uVar6;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01d5c625:
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  local_78 = '\0';
  local_80 = lVar2;
  FUN_00e1cfc0();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  if ((cVar5 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


