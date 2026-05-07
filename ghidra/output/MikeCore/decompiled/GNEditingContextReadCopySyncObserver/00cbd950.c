// Function: FUN_00cbd950
// Address: 00cbd950
// Size: 765 bytes
// Class: GNEditingContextReadCopySyncObserver


bool FUN_00cbd950(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 *local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_0256bf50;
  puVar3[2] = 0;
  uVar4 = FUN_00d500e0();
  lVar1 = *unaff_RSI;
  lVar2 = puVar3[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar4 = FUN_00d50b00();
    }
    puVar3[2] = lVar1;
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_c0 = 0;
  local_c8 = puVar3;
  FUN_00cbd790(uVar4,&local_c8);
  local_58 = local_88;
  local_50 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = '\x01';
  uVar4 = FUN_00e191b0(DAT_023b2c70,&local_58);
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      uVar4 = FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_b0 = 1;
  FUN_00cbd5a0(uVar4,local_b8);
  lVar2 = local_78;
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      local_60 = 0;
      if (0 < *(int *)(local_68 + 0xc)) {
        local_38 = puVar3;
        do {
          local_78 = *(longlong *)(*(longlong *)(local_68 + 0x10) + (longlong)local_60 * 8);
          FUN_00cbde50((longlong)local_60,&local_78);
          lVar1 = local_48;
          if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_98 = FUN_00d45790();
          local_a8 = lVar1;
          local_a0 = '\0';
          local_90 = '\0';
          FUN_019b43b0(extraout_XMM0_Qa,&local_98);
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          puVar3 = local_38;
          local_60 = local_60 + 1;
        } while (local_60 < *(int *)(local_68 + 0xc));
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    if (puVar3 == (undefined8 *)0x0) goto LAB_00cbdc35;
  }
  FUN_00d50b20();
LAB_00cbdc35:
  return lVar2 != 0;
}


