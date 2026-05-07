// Function: FUN_01a6f360
// Address: 01a6f360
// Size: 2162 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "MUChord"

uint64_t FUN_01a6f360(void* param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void* pVar8;
  char *pcVar9;
  uint64_t uVar10;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint32_t uVar12;
  uint8_t local_d8 [4];
  int local_d4;
  uint8_t local_d0 [4];
  int local_cc;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*this_ptr + 0xa78))();
  if (cVar2 != '\0') {
    FUN_01caeae0();
    plVar1 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a6f3d3;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_01a6f3d3:
      local_70 = plVar1;
      uVar12 = FUN_01d66da0();
      local_c8 = g_027e2688;
      if (g_027e2688 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_c8);
      plVar1 = local_48;
      if ((g_02794b40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_02794a90 = FUN_00d4fe50();
        g_02794a78 = "MUChord";
        g_02794a80 = 0x20;
        param_1 = 0x1113770;
        g_02794a88 = FUN_01113770;
        g_02794a98 = 0;
        ram_0000000002794aa0 = 0;
        g_02794aa8 = 0;
        g_02794b20 = 0;
        ram_0000000002794b28 = 0;
        g_02794b30 = 0;
        g_02794b32 = 2;
        g_02794ab0 = 0;
        ram_0000000002794ab8 = 0;
        g_02794ac0 = 0;
        ram_0000000002794ac8 = 0;
        g_02794ad0 = 0;
        ram_0000000002794ad8 = 0;
        g_02794ae0 = 0;
        ram_0000000002794ae8 = 0;
        g_02794af0 = 0;
        ram_0000000002794af8 = 0;
        g_02794b00 = 0;
        ram_0000000002794b08 = 0;
        g_02794b10 = 0;
        ram_0000000002794b18 = 0;
        g_02794b3b = 0;
        g_02794b33 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (int64_t *)0x0) {
LAB_01a6f45a:
        pplVar11 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f45a;
      }
      local_68 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01d66da0();
      local_b8 = g_027e2690;
      if (g_027e2690 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_b8);
      plVar1 = local_48;
      if ((g_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d4348 = FUN_00d4fe50();
        g_026d4330 = "GNValue";
        g_026d4338 = 0x18;
        param_1 = 0x53cb0;
        g_026d4340 = FUN_00053cb0;
        g_026d4350 = 0;
        ram_00000000026d4358 = 0;
        g_026d4360 = 0;
        ram_00000000026d4368 = 0;
        g_026d4370 = 0;
        ram_00000000026d4378 = 0;
        g_026d4380 = 0;
        ram_00000000026d4388 = 0;
        g_026d4390 = 0;
        ram_00000000026d4398 = 0;
        g_026d43a0 = 0;
        ram_00000000026d43a8 = 0;
        g_026d43b0 = 0;
        ram_00000000026d43b8 = 0;
        g_026d43c0 = 0;
        ram_00000000026d43c8 = 0;
        g_026d43d0 = 0;
        ram_00000000026d43d8 = 0;
        g_026d43e0 = 0;
        ram_00000000026d43e8 = 0;
        g_026d43f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (int64_t *)0x0) {
LAB_01a6f553:
        pplVar11 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f553;
      }
      local_60 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01d66da0();
      local_a8 = g_027652e0;
      if (g_027652e0 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_a8);
      plVar1 = local_48;
      if ((g_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d4348 = FUN_00d4fe50();
        g_026d4330 = "GNValue";
        g_026d4338 = 0x18;
        param_1 = 0x53cb0;
        g_026d4340 = FUN_00053cb0;
        g_026d4350 = 0;
        ram_00000000026d4358 = 0;
        g_026d4360 = 0;
        ram_00000000026d4368 = 0;
        g_026d4370 = 0;
        ram_00000000026d4378 = 0;
        g_026d4380 = 0;
        ram_00000000026d4388 = 0;
        g_026d4390 = 0;
        ram_00000000026d4398 = 0;
        g_026d43a0 = 0;
        ram_00000000026d43a8 = 0;
        g_026d43b0 = 0;
        ram_00000000026d43b8 = 0;
        g_026d43c0 = 0;
        ram_00000000026d43c8 = 0;
        g_026d43d0 = 0;
        ram_00000000026d43d8 = 0;
        g_026d43e0 = 0;
        ram_00000000026d43e8 = 0;
        g_026d43f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (int64_t *)0x0) {
LAB_01a6f641:
        pplVar11 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f641;
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((((local_68 == (int64_t *)0x0) || (local_60 == (int64_t *)0x0)) ||
          (plVar1 == (int64_t *)0x0)) || (param_2 == '\0')) {
        if (plVar1 != (int64_t *)0x0) goto LAB_01a6f96a;
      }
      else {
        FUN_01a66e80();
        uVar10 = local_58;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_00dd6320();
        FUN_012521f0(uVar6,0,local_d8,local_d0);
        plVar1 = local_48;
        pVar8 = (void*)CONCAT71((int7)((uint64_t)uVar6 >> 8),local_40[0]);
        pcVar9 = local_38;
        if (local_40[0] != '\0') {
          pcVar9 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if ((local_50 != '\0') && (uVar10 != 0)) {
          FUN_00d50b20();
        }
        local_78 = plVar1;
        if (plVar1 == (int64_t *)0x0) {
LAB_01a6f858:
          (**(code **)(*this_ptr + 0xa48))();
          FUN_01a66e80();
          uVar10 = local_58;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_00dd6320();
          uVar7 = FUN_00dd6320();
          local_48 = local_68;
          local_40[0] = '\0';
          FUN_012502a0(uVar7,uVar6,(char)this_ptr[0x36]);
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (uVar10 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0xa50))();
          local_88 = local_68;
          local_80 = '\0';
          uVar6 = FUN_00dd6320();
          uVar7 = FUN_00dd6320();
          (**(code **)(*this_ptr + 0xa80))(uVar7,uVar6);
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_78 == (int64_t *)0x0) goto LAB_01a6f96a;
        }
        else {
          local_98 = local_68;
          local_90 = '\0';
          cVar2 = (**(code **)(*plVar1 + 0x50))();
          bVar3 = 1;
          if ((((cVar2 != '\0') && (local_48 = (int64_t *)FUN_00dd6320(), local_d4 != 0)) &&
              ((uint64_t)local_48 >> 0x20 != 0)) &&
             (((cVar2 = FUN_00e7c000(), cVar2 != '\0' && (local_58 = FUN_00dd6320(), local_cc != 0))
              && (local_58 >> 0x20 != 0)))) {
            bVar3 = FUN_00e7c000();
            bVar3 = bVar3 ^ 1;
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar3 != 0) goto LAB_01a6f858;
        }
        FUN_00d50b20();
LAB_01a6f96a:
        FUN_00d50b20();
      }
      plVar1 = local_68;
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_01a6f99c;
    }
  }
  uVar10 = 0;
LAB_01a6f99c:
  return uVar10 & 0xffffffff;
}

