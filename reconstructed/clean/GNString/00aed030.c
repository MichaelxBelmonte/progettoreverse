// Function: FUN_00aed030
// Address: 00aed030
// Size: 3394 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00aed030(uint64_t param_1,int param_2,uint32_t param_3,int64_t *param_4)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int in_ECX;
  ulong uVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  int64_t local_60;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t local_40;
  char local_38;
  
  *(void*)(this_ptr + 0x78) = 0;
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
  lVar5 = g_02764880;
  if (cVar4 == '\0') {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_02764880;
  if (param_2 != 6) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_02764880;
  if (1 < in_ECX - 1U) {
    if (g_02764880 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_148 = lVar2;
    local_140 = '\x01';
    FUN_00cc78b0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar7 = *(int *)(this_ptr + 0x34) - 0x40;
  uVar8 = 0;
  if (uVar7 < 3) {
    lVar5 = (int64_t)(int)uVar7;
    uVar7 = 0x23d5194;
    uVar8 = *(void*)(&g_023d5194 + lVar5 * 4);
  }
  uVar1 = *(void*)(this_ptr + 0x30);
  uVar9 = FUN_00ccdf50(uVar7,0x616c6163);
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = *(int64_t *)(this_ptr + 0x60);
  if (lVar2 == lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x60) = lVar5;
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
  lVar2 = *(int64_t *)(this_ptr + 0x68);
  if (lVar2 == lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x68) = lVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar6 = operator_new(uVar7);
  FUN_00c67e70();
  *(int64_t **)(this_ptr + 0x78) = plVar6;
  *(void*)((int64_t)plVar6 + 0x205c) = 0x1000;
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
  lVar3 = g_027653a0;
  if (lVar2 != 0) {
    if (g_027653a0 != 0) {
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
  lVar3 = g_027653a0;
  if (lVar2 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar3;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))
                    (local_50,*(void*)(lVar5 + 0x10));
  lVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
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
  lVar2 = g_027653a0;
  if (lVar5 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))(uVar8,this_ptr + 0x40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_02765700;
  if (local_40 != 0) {
    if (g_02765700 != 0) {
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

