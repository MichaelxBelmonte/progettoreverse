// Function: FUN_00aed030
// Address: 00aed030
// Size: 3394 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00aed27e) */
/* WARNING: Removing unreachable block (ram,0x00aed28a) */

void FUN_00aed030(undefined8 param_1,int param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int in_ECX;
  ulong uVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
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
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong local_40;
  char local_38;
  
  *(undefined8 *)(unaff_RDI + 0x78) = 0;
  local_68 = param_1;
  local_54 = param_3;
  FUN_00bb9440();
  lVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar5;
  FUN_00d46530();
  lVar5 = CONCAT44(uStack_4c,local_50);
  if (local_48 == '\0') {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38 = '\0';
  local_40 = lVar5;
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_02764880;
  if (cVar4 == '\0') {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02764880;
  if (param_2 != 6) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02764880;
  if (1 < in_ECX - 1U) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  local_1a8 = *param_4;
  local_1a0 = '\0';
  FUN_00bba180((int)local_68,param_2,local_54,&local_1a8);
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00ccce80();
  uVar8 = FUN_00ccdf50(uVar8,0x63616666);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_198 = lVar2;
    local_190 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_190 != '\0') && (local_198 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf10(uVar8,1);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar2;
    local_180 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf10(uVar8,0);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_178 = lVar2;
    local_170 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_170 != '\0') && (local_178 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar8,0x64657363);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar2;
    local_160 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_160 != '\0') && (local_168 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  FUN_00ccdf90(uVar8,0x20);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_158 = lVar2;
    local_150 = '\x01';
    FUN_00cc78b0();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00cce010((int)local_68);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_148 = lVar2;
    local_140 = '\x01';
    FUN_00cc78b0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar7 = *(int *)(unaff_RDI + 0x34) - 0x40;
  uVar8 = 0;
  if (uVar7 < 3) {
    lVar5 = (longlong)(int)uVar7;
    uVar7 = 0x23d5194;
    uVar8 = *(undefined4 *)(&DAT_023d5194 + lVar5 * 4);
  }
  uVar1 = *(undefined4 *)(unaff_RDI + 0x30);
  uVar9 = FUN_00ccdf50(uVar7,0x616c6163);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar2;
    local_130 = '\x01';
    uVar9 = FUN_00cc78b0();
    if ((local_130 != '\0') && (local_138 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar9,uVar8);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar2;
    local_120 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_120 != '\0') && (local_128 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar8,0);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_118 = lVar2;
    local_110 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar8,0x1000);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar2;
    local_100 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar8,uVar1);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar2;
    local_f0 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  FUN_00ccdf50(uVar8,0);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar2;
    local_e0 = '\x01';
    FUN_00cc78b0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ae7f20();
  FUN_00c8e690();
  lVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  lVar2 = *(longlong *)(unaff_RDI + 0x60);
  if (lVar2 == lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x60) = lVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  lVar2 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar2 == lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x68) = lVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar6 = operator_new(uVar7);
  FUN_00c67e70();
  *(longlong **)(unaff_RDI + 0x78) = plVar6;
  *(undefined4 *)((longlong)plVar6 + 0x205c) = 0x1000;
  (**(code **)(*plVar6 + 0x20))();
  local_50 = FUN_00c6a340();
  FUN_00c8e690();
  lVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00c92170();
  uVar8 = FUN_00c6a360(uVar8,&local_50);
  uVar8 = FUN_00ccdf50(uVar8,0x6b756b69);
  lVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (lVar2 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar3;
    local_d0 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  FUN_00ccdf90(uVar8,local_50);
  lVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (lVar2 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar3;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar8 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))
                    (local_50,*(undefined8 *)(lVar5 + 0x10));
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar8,0x64617461);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf90(uVar8,0xffffffffffffffff);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar2;
    local_90 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_00ccdf50(uVar8,0);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar5 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(uVar8,unaff_RDI + 0x40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_02765700;
  if (local_40 != 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar5;
    local_70 = '\x01';
    FUN_00cc78b0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return;
}


