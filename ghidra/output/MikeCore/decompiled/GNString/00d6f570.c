// Function: FUN_00d6f570
// Address: 00d6f570
// Size: 1732 bytes
// Class: GNString


void FUN_00d6f570(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined4 uStack_3c;
  char local_38;
  
  FUN_00da5ad0();
  lVar3 = local_60[3];
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((char)lVar3 == '\0') {
    return;
  }
  local_138 = *param_2;
  local_130 = '\0';
  FUN_000175c0();
  local_68 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  plVar4 = local_68;
  if (plVar1 != local_68) {
    if (plVar1 == (longlong *)0x0) {
LAB_00d6f6b9:
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
      local_70 = local_68;
    }
    else {
      if (local_68 != (longlong *)0x0) {
        local_128 = local_68;
        local_120 = '\0';
        cVar2 = (**(code **)(*plVar1 + 0x50))();
        if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = local_68;
        if (cVar2 != '\0') goto LAB_00d6fc2e;
        goto LAB_00d6f6b9;
      }
      local_70 = (longlong *)0x0;
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
    }
    if (lVar3 != 0) {
      local_b0 = 0;
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_b8 = lVar3;
    FUN_01e2f100();
    local_78 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = local_78;
    if (*unaff_RSI == 0) {
      local_60 = (longlong *)*param_2;
      local_58 = '\0';
      FUN_00ca13a0();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_110 = '\0';
      local_60 = (longlong *)*param_2;
      local_58 = '\0';
      local_118 = *unaff_RSI;
      FUN_00ca0840();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar4 = *(longlong **)(unaff_RDI + 0x18);
    if (plVar4 != plVar1) {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x18) = plVar1;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x28) != 0) {
      local_58 = 0;
      local_60 = (longlong *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = *(longlong *)(unaff_RDI + 0x28);
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar3 = (longlong)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
        local_108 = *param_2;
        local_100 = '\0';
        cVar2 = (**(code **)(**(longlong **)((longlong)local_60 + 0x20) + 0x50))();
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d701a0();
        }
      }
      FUN_00d728e0();
    }
    local_60 = (longlong *)*param_2;
    local_58 = '\0';
    FUN_00d7a410();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_f8 = DAT_027e2660;
    if (DAT_027e2660 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    FUN_00d50b00();
    lVar3 = DAT_02704000;
    if (DAT_02704000 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar3;
    FUN_00083ea0(2,&local_150);
    FUN_000b4da0();
    local_88 = local_c8;
    local_80 = 0;
    if (local_c0 == '\0') {
      if (local_c8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c0 = '\0';
    }
    local_80 = '\x01';
    FUN_00d40470(&local_88,&stack0xffffffffffffff58,1,0);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    local_60 = (longlong *)&DAT_0253d630;
    if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if (((char)local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_e8 = DAT_0277e5d8;
    if (DAT_0277e5d8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    FUN_00d50b00();
    local_d8 = 0;
    local_d0 = '\0';
    FUN_00d40470(&local_d8,&stack0xffffffffffffff68,1,1);
    plVar4 = local_68;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
LAB_00d6fc2e:
  FUN_00d50b20();
  return;
}


