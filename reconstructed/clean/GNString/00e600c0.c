// Function: FUN_00e600c0
// Address: 00e600c0
// Size: 5227 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e600c0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *arg1;
  uint64_t this_ptr;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint8_t local_5f;
  uint8_t local_5e;
  uint8_t local_5d;
  uint8_t local_5c;
  uint8_t local_5b;
  uint8_t local_5a;
  uint8_t local_59;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (*arg1 != 0) {
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = *arg1;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar8 = -local_50._4_4_;
        }
        else {
          iVar8 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar8 = 0;
        }
        local_50 = CONCAT44(iVar8,(int)local_50);
      }
      lVar6 = (int64_t)(int)local_50;
      iVar8 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if (*(int *)(local_58 + 0xc) <= iVar8) break;
      local_108 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar6 * 8);
      local_100 = '\0';
      local_68 = local_108;
      uVar9 = FUN_000175c0(this_ptr,&local_108);
      plVar1 = local_78;
      if ((g_026fd0c0 == '\0') &&
         (iVar8 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_00, iVar8 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar7 = &local_78;
        uVar9 = extraout_XMM0_Da;
        if (cVar4 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar1 == (int64_t *)0x0) {
        local_f8 = local_68;
        local_f0 = '\0';
        FUN_000175c0(uVar9,&local_f8);
        plVar1 = local_78;
        FUN_00053ac0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar7 = &local_78;
          if (cVar4 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x368))();
          plVar1 = local_b8;
          if (local_b0 == '\0') {
            if (local_b8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          local_78 = plVar1;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
        local_78 = plVar1;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  local_68 = (int64_t *)0x48476d4248673835;
  local_60 = 0x35;
  local_5f = 0x39;
  local_5e = 0x30;
  local_5d = 0x34;
  local_5c = 0x39;
  local_5b = 0x67;
  local_5a = 0x46;
  local_59 = 0x5a;
  local_58 = CONCAT17(local_58._7_1_,0x36424d433837);
  FUN_00d91a70(0x36,1);
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_68 = plVar1;
  local_60 = '\0';
  FUN_00d21140();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d9bb60();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_68 = plVar1;
  local_60 = '\0';
  FUN_00d21140();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_00d23340();
  plVar1 = local_68;
  pplVar7 = (int64_t **)&local_60;
  if (local_60 == '\0') {
    pplVar7 = &local_78;
  }
  local_78 = (int64_t *)CONCAT71(local_78._1_7_,local_60);
  *(void*)pplVar7 = 0;
  if ((local_60 != '\0') && (plVar1 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  plVar2 = g_02787800;
  if ((char)local_78 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
      plVar2 = g_02787800;
    }
  }
  else {
    local_78 = (int64_t *)((uint64_t)local_78 & 0xffffffffffffff00);
  }
  g_02787800 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = plVar2;
  uVar9 = FUN_00ca0840(uVar9,&local_68);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  lVar6 = g_027d3890;
  local_e0 = '\0';
  local_e8 = puVar5;
  if (g_027d3890 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_d8 = lVar6;
  local_d0 = '\x01';
  FUN_00d95130(uVar9,&local_d8);
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = plVar1;
  local_c0 = '\0';
  uVar9 = FUN_00e43480();
  plVar3 = local_78;
  plVar2 = g_02787810;
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
      plVar2 = g_02787810;
    }
  }
  else {
    local_70 = '\0';
  }
  g_02787810 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = plVar2;
  FUN_00ca0840(uVar9,&local_68);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

