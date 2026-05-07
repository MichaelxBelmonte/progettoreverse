// Function: FUN_00106380
// Address: 00106380
// Size: 2995 bytes
// Class: MDURLOpenedController


void FUN_00106380(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
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
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x978))();
  plVar3 = local_60;
  if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x7b8))();
  plVar2 = local_60;
  if (((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_1e8 = plVar2;
  if (*(char *)(unaff_RDI + 0xc) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_01a8c310();
      plVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        local_1c8 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x40);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_1c8 = '\x01';
        local_1d0 = lVar1;
        FUN_0010acd0();
        local_c0 = local_60;
        local_b8 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_b8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_1d8 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x38);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = '\x01';
        local_1e0 = lVar1;
        FUN_0010acd0();
        local_d0 = local_60;
        local_c8 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_c8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_1b8 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x48);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = '\x01';
      local_1c0 = lVar1;
      (**(code **)(*plVar3 + 0x998))();
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      local_1a8 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x58);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = '\x01';
      local_1b0 = lVar1;
      (**(code **)(*plVar3 + 0x988))();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_198 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    local_1a0 = lVar1;
    (**(code **)(*plVar2 + 0xd70))();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_188 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_188 = '\x01';
    local_190 = lVar1;
    (**(code **)(*plVar2 + 0xd68))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_178 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    local_180 = lVar1;
    (**(code **)(*plVar2 + 0xd58))();
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      FUN_01a8c310();
      plVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        if (*(char *)(unaff_RDI + 0xd) == '\0') {
          local_158 = 0;
          lVar1 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_158 = '\x01';
          local_160 = lVar1;
          FUN_0010acd0();
          local_80 = local_60;
          local_78 = 0;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_78 = '\x01';
          (**(code **)(*plVar3 + 0x9e8))();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1f0 = *(undefined8 *)(unaff_RDI + 0x40);
          FUN_00083ea0(2,&local_1f0);
          FUN_0010adc0();
          local_90 = local_70;
          local_88 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_88 = '\x01';
          (**(code **)(*plVar3 + 0x9e8))();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
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
        }
      }
      else if (*(char *)(unaff_RDI + 0xd) == '\0') {
        local_168 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x30);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_170 = lVar1;
        FUN_0010acd0();
        local_a0 = local_60;
        local_98 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_98 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_1f0 = *(undefined8 *)(unaff_RDI + 0x38);
        FUN_00083ea0(2,&local_1f0);
        FUN_0010adc0();
        local_b0 = local_70;
        local_a8 = 0;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_a8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
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
      }
      local_148 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_148 = '\x01';
      local_150 = lVar1;
      (**(code **)(*plVar3 + 0x998))();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      local_138 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      local_140 = lVar1;
      (**(code **)(*plVar3 + 0x988))();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_128 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    local_130 = lVar1;
    (**(code **)(*plVar2 + 0xd70))();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_118 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    local_120 = lVar1;
    (**(code **)(*plVar2 + 0xd68))();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_108 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_110 = lVar1;
    (**(code **)(*plVar2 + 0xd58))();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_f8 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_100 = lVar1;
    (**(code **)(*plVar2 + 0xd78))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)*unaff_RSI;
  local_e8 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_f0 = lVar1;
  (**(code **)(*plVar2 + 0xd60))();
  plVar2 = local_1e8;
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_d8 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar1;
    (**(code **)(*plVar3 + 0x990))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x7b8))();
  plVar4 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0010ae60();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


