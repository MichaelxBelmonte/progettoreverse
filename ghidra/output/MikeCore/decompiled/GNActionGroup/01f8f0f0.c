// Function: FUN_01f8f0f0
// Address: 01f8f0f0
// Size: 2758 bytes
// Class: GNActionGroup


/* WARNING: Removing unreachable block (ram,0x01f8f484) */
/* WARNING: Removing unreachable block (ram,0x01f8f490) */
/* WARNING: Removing unreachable block (ram,0x01f8f4e3) */
/* WARNING: Removing unreachable block (ram,0x01f8f4ef) */

void FUN_01f8f0f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_1b0;
  char local_1a8;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  int local_7c;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_68;
  lVar6 = DAT_02801020;
  if (DAT_02801020 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && ((longlong *)unaff_RDI[0x10] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x920))();
    local_b0 = 0;
    local_b8 = unaff_RDI[0x10];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*unaff_RDI + 0x5e8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d3ecc0();
  plVar2 = local_68;
  lVar6 = DAT_027f0e10;
  if (DAT_027f0e10 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_01f8fb55;
  FUN_01d77960();
  FUN_01d5e2b0();
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  FUN_01f904a0();
  local_88 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_88;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    do {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar7 = -local_50._4_4_;
        }
        else {
          iVar7 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar7);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar7 = 0;
        }
        local_50 = CONCAT44(iVar7,(int)local_50);
      }
      lVar6 = (longlong)(int)local_50;
      iVar7 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar7);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar7) goto LAB_01f8f590;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
      FUN_01d66da0();
      lVar6 = DAT_02801038;
      if (DAT_02801038 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        cVar5 = FUN_00c70bc0();
        if (cVar5 != '\0') goto LAB_01f8f585;
        FUN_00d50b20();
      }
      FUN_01d77960();
      FUN_01d5dde0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    } while( true );
  }
  goto LAB_01f8f599;
LAB_01f8f585:
  FUN_00d50b20();
LAB_01f8f590:
  FUN_002a0a30();
LAB_01f8f599:
  FUN_01da4890();
  FUN_01da7fd0();
  local_98 = local_40;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  local_140 = '\0';
  local_148 = 0;
  local_138 = 0;
  local_130 = '\0';
  local_128 = 0;
  local_120 = '\0';
  FUN_01d64d40(&local_138,&local_148,&local_128);
  plVar2 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  local_118 = plVar2;
  local_110 = '\0';
  FUN_01d5d7f0();
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_7c = 1;
  FUN_01d77960();
  plVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01f27fe0();
  (**(code **)(*local_1b0 + 0x610))();
  plVar1 = local_78;
  local_108 = DAT_02800ff0;
  if (DAT_02800ff0 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  (**(code **)(*plVar1 + 0x400))();
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d50b00();
  FUN_01f82cb0(&stack0xfffffffffffffdf0,&local_7c);
  FUN_00d50b20();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  plVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01f83aa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d50b00();
  FUN_01f82cb0(&stack0xfffffffffffffe00,&local_7c);
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_026fce10;
  if (local_7c != 0) {
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar6;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_01d64ce0();
    plVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d66c80();
    FUN_01d77960();
    local_d8 = plVar3;
    local_d0 = '\0';
    FUN_01d5d7f0();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01f8fb55:
  local_c8 = *unaff_RSI;
  local_c0 = '\0';
  FUN_00d530a0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


