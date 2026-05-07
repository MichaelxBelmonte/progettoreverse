// Function: FUN_01da59a0
// Address: 01da59a0
// Size: 797 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01da5b09) */
/* WARNING: Removing unreachable block (ram,0x01da5b15) */

undefined4 FUN_01da59a0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar4;
  longlong *local_98;
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
  longlong *local_38;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    local_70 = '\0';
    local_78 = 0;
    local_68 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10);
    local_60 = 0;
    if (0 < *(int *)(local_68 + 0xc)) {
      local_38 = plVar2;
      do {
        local_78 = *(longlong *)(*(longlong *)(local_68 + 0x10) + (longlong)local_60 * 8);
        FUN_01da5ee0((longlong)local_60,&local_78);
        lVar1 = local_48;
        if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar4 = FUN_01d42800();
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            uVar4 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        FUN_00cd2930(uVar4,&local_58);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        plVar2 = local_38;
        local_60 = local_60 + 1;
      } while (local_60 < *(int *)(local_68 + 0xc));
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *plVar3 = (longlong)&DAT_0258cea8;
  *(undefined4 *)(plVar3 + 5) = 0;
  *(undefined1 *)((longlong)plVar3 + 0x2c) = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  uVar4 = (*DAT_0258cec0)();
  local_90 = '\0';
  local_98 = plVar2;
  (**(code **)(*plVar3 + 0x5f0))(uVar4,&local_98);
  lVar1 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    local_88 = *unaff_RSI;
    local_80 = '\0';
    uVar4 = FUN_00c91c80();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}


