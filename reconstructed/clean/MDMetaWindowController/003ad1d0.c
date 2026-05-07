// Function: FUN_003ad1d0
// Address: 003ad1d0
// Size: 1927 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint64_t FUN_003ad1d0(uint64_t param_1,char param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int64_t *plVar9;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  undefined7 uVar11;
  uint64_t uVar10;
  uint32_t uVar12;
  int64_t local_130;
  char local_128;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  char local_b0;
  char local_68;
  uint64_t local_60;
  char local_58;
  int64_t *local_50;
  uint local_48 [2];
  int64_t local_40;
  char local_38;
  
  if ((this_ptr[0xf] == 0) && (section_000002e8.addr == 0)) {
    uVar10 = 0;
    goto LAB_003ad94a;
  }
  uVar11 = (undefined7)((uint64_t)unaff_R12 >> 8);
  if (param_2 != '\0') {
    bVar1 = *(byte *)((int64_t)this_ptr + 0xd1);
    *(byte *)((int64_t)this_ptr + 0xd1) = bVar1 ^ 1;
    uVar10 = CONCAT71(uVar11,1);
    if ((bVar1 == 0) && (0.0 < (double)this_ptr[0x1b])) {
      FUN_00d48ad0();
      FUN_00d48ac0();
      plVar9 = (int64_t *)this_ptr[0x12];
      (**(code **)(*(int64_t *)this_ptr[0x18] + 0x378))((float)(double)this_ptr[0x1b]);
      local_b8 = local_50;
      local_b0 = 0;
      if ((char)local_48[0] == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48[0] = local_48[0] & 0xffffff00;
      }
      local_b0 = '\x01';
      (**(code **)(*plVar9 + 0x958))();
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
    }
    goto LAB_003ad94a;
  }
  FUN_01caeae0();
  plVar9 = local_50;
  if ((char)local_48[0] == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003ad2ec;
    }
  }
  else if (local_50 != (int64_t *)0x0) {
LAB_003ad2ec:
    local_c0 = plVar9;
    FUN_00d50b00();
    local_60._0_1_ = '\0';
    do {
      (**(code **)(*this_ptr + 0x370))();
      plVar9 = local_50;
      if (local_50 == this_ptr) {
        if ((((char)local_60 == '\0') && (local_50 != (int64_t *)0x0)) &&
           ((char)local_48[0] != '\0')) {
          local_60._0_1_ = 1;
          goto LAB_003ad377;
        }
      }
      else {
        if ((char)local_48[0] == '\0') {
          if ((char)local_60 == '\0') {
            puVar8 = (uint *)&local_60;
          }
          else {
            FUN_00d50b20();
            puVar8 = (uint *)&local_60;
          }
        }
        else {
          if ((char)local_60 != '\0') {
            FUN_00d50b20();
          }
          local_60._0_1_ = 1;
          this_ptr = plVar9;
LAB_003ad377:
          local_60._0_1_ = '\x01';
          puVar8 = local_48;
          plVar9 = this_ptr;
        }
        *(void*)puVar8 = 0;
        this_ptr = plVar9;
      }
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      plVar9 = &g_02802688;
      if (this_ptr != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = (int64_t *)&stack0xffffffffffffff90;
        if (cVar5 == '\0') {
          plVar9 = &g_02802688;
        }
      }
      if (*plVar9 != 0) {
        plVar9 = this_ptr;
        if (((char)local_60 == '\0') && (this_ptr != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_003ad4fa;
      }
    } while (this_ptr != (int64_t *)0x0);
    plVar9 = (int64_t *)0x0;
LAB_003ad4fa:
    FUN_00d50b20();
    if (plVar9 == (int64_t *)0x0) {
      uVar10 = 1;
LAB_003ad5d7:
      lVar3 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02705118;
      local_f0 = lVar3;
      local_e8 = '\x01';
      if (g_02705118 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar2;
      local_d8 = '\x01';
      local_d0 = 0;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      plVar4 = local_50;
      if ((char)local_48[0] == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48[0] = local_48[0] & 0xffffff00;
      }
      FUN_01d64eb0();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar7 = FUN_00657180((int)g_02395720);
      lVar3 = g_026f6f70;
      uVar10 = (uint64_t)uVar7;
      if ((int)uVar7 < 2) goto LAB_003ad5d7;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02705110;
      if (g_02705110 != 0) {
        FUN_00d50b00();
      }
      local_110 = lVar2;
      local_108 = '\x01';
      local_100 = 0;
      local_f8 = '\0';
      FUN_00d31230(&local_100,&local_110);
      lVar2 = CONCAT71(local_60._1_7_,(char)local_60);
      if (local_58 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      uVar12 = FUN_00d46530();
      local_48[0] = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      if (local_130 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = local_130;
      local_38 = '\x01';
      FUN_00d93690(uVar12,&local_50);
      if (local_68 == '\0') {
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_01d64eb0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (this_ptr != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar10 = 1;
    }
    FUN_01d66ab0();
    uVar10 = CONCAT71((int7)(uVar10 >> 8),(int)uVar10 != 0);
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_003ad94a;
  }
  uVar10 = CONCAT71(uVar11,1);
LAB_003ad94a:
  return uVar10 & 0xffffffff;
}

