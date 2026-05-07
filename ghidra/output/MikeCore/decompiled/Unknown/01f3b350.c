// Function: FUN_01f3b350
// Address: 01f3b350
// Size: 2652 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f3b532) */
/* WARNING: Removing unreachable block (ram,0x01f3b53e) */
/* WARNING: Removing unreachable block (ram,0x01f3b5ef) */
/* WARNING: Removing unreachable block (ram,0x01f3b5fb) */
/* WARNING: Removing unreachable block (ram,0x01f3b8cc) */
/* WARNING: Removing unreachable block (ram,0x01f3b8d9) */
/* WARNING: Removing unreachable block (ram,0x01f3b830) */
/* WARNING: Removing unreachable block (ram,0x01f3b83d) */
/* WARNING: Removing unreachable block (ram,0x01f3b3da) */
/* WARNING: Removing unreachable block (ram,0x01f3b3e3) */
/* WARNING: Removing unreachable block (ram,0x01f3b428) */
/* WARNING: Removing unreachable block (ram,0x01f3b431) */
/* WARNING: Removing unreachable block (ram,0x01f3b8a6) */
/* WARNING: Removing unreachable block (ram,0x01f3b94a) */

bool FUN_01f3b350(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  lVar1 = *param_1;
  if (lVar1 == 0) goto LAB_01f3bd8f;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*unaff_RDI + 0x508))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_40 + 0x498))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01f3b436;
    }
LAB_01f3b4a5:
    bVar2 = true;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01f3b4a5;
LAB_01f3b436:
    lVar3 = DAT_02800138;
    if (DAT_02800138 != 0) {
      FUN_00d50b00();
    }
    FUN_01e2ad40();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x498))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  local_170 = '\0';
  local_168 = local_40;
  local_160 = '\0';
  local_178 = plVar4;
  FUN_01e4fcf0(&local_168,&local_178);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_158 = local_40;
  local_150 = '\0';
  (**(code **)(*local_40 + 0x580))();
  if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  FUN_01e5e3f0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    FUN_01e56750();
    local_148 = *param_1;
    local_140 = '\0';
    FUN_01e5e380();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e56750();
  FUN_01e5e430();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_130 = '\0';
  local_138 = plVar4;
  FUN_01e2fa60();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*local_40 + 0x488))();
  FUN_01d2e930();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    (**(code **)(MACH_HEADER._0_8_ + 0x488))();
    local_128 = local_40;
    local_120 = '\0';
    FUN_01d2e920();
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI == 0) {
    if (local_40 != (longlong *)0x0) {
      FUN_01d25f70();
      plVar4 = (longlong *)*unaff_RSI;
      if (plVar4 == local_40) {
        if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01f3ba0e;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f3ba03;
        }
LAB_01f3b9c6:
        local_50 = unaff_RSI + 1;
        *(undefined1 *)local_50 = 1;
      }
      else {
        lVar3 = unaff_RSI[1];
        if (local_38 != '\0') {
          *unaff_RSI = (longlong)local_40;
          if (((char)lVar3 != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f3b9c6;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar3 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f3ba03:
        local_50 = unaff_RSI + 1;
        *(undefined1 *)local_50 = 1;
LAB_01f3ba0e:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (*unaff_RSI != 0) goto LAB_01f3b7a7;
    }
    (**(code **)(*local_40 + 0x488))();
    FUN_01d25f70();
    plVar4 = (longlong *)*unaff_RSI;
    if (plVar4 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01f3bae8;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f3bae1;
      }
LAB_01f3ba9c:
      local_50 = unaff_RSI + 1;
      *(undefined1 *)local_50 = 1;
      local_38 = '\0';
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar3 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f3ba9c;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar3 != '\0') && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f3bae1:
      local_50 = unaff_RSI + 1;
      *(undefined1 *)local_50 = 1;
LAB_01f3bae8:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01f3b7a7:
    (**(code **)(*local_40 + 0x488))();
    local_118 = *unaff_RSI;
    local_110 = '\0';
    FUN_01d25f20();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_001d7c90();
    (**(code **)(*plVar4 + 0x18))();
    local_108 = local_40;
    local_100 = '\0';
    FUN_01ccad10();
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02800140;
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar3;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    (**(code **)(*local_40 + 0x488))();
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_40;
    (**(code **)(*plVar4 + 0x468))(&local_88,&local_e8);
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar4 + 0x478))();
    FUN_00d50b20();
  }
  if (*param_2 != 0) {
    (**(code **)(*local_40 + 0x488))();
    local_d8 = *param_2;
    local_d0 = '\0';
    FUN_01d2e9e0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x488))();
    FUN_01d2bdc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_c8 = local_40;
  local_c0 = '\0';
  (**(code **)(*unaff_RDI + 0x518))();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
LAB_01f3bd8f:
  return lVar1 != 0;
}


