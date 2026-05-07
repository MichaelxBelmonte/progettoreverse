// Function: FUN_00b45910
// Address: 00b45910
// Size: 1372 bytes
// Class: GNDate


void FUN_00b45910(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  bool bVar5;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
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
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar4 = FUN_00b45830();
  lVar1 = DAT_027653a0;
  if (*(ulonglong *)(unaff_RDI + 0x40) <= lVar4 + 0x400U) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))(param_1,lVar4);
  lVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (lVar1 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar3;
    local_b0 = '\x01';
    FUN_00cc78b0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x40) - lVar4;
  iVar2 = (int)lVar4;
  if (*(longlong *)(unaff_RDI + 0x48) + 8U >> 0x20 == 0) {
    FUN_00ccdf50(param_1,iVar2 + -8);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x66726565);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      FUN_00cc78b0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(param_1,&local_d8);
    bVar5 = true;
    if (local_38 == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))
                (param_1,(ulonglong)(iVar2 - 0x10) + local_d8);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(unaff_RDI + 0x48) + 8);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x6d646174);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar1;
      local_50 = '\x01';
      FUN_00cc78b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00ccdf50(param_1,iVar2 + -0x10);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x66726565);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      FUN_00cc78b0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(param_1,&local_e0);
    bVar5 = true;
    if (local_38 == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))
                (param_1,(lVar4 + 0xffffffe8U & 0xffffffff) + local_e0);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_00cc78b0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    FUN_00ccdf50(param_1,1);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf90(param_1,lVar1 + 0x10);
      bVar5 = true;
      if (local_48 == 0) {
        FUN_00ccdf50(param_1,0x6d646174);
        bVar5 = local_d8 != 0;
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar1;
      local_80 = '\x01';
      FUN_00cc78b0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


