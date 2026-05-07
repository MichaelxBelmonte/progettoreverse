// ===================================================================
// GNRunLoopState — Complete reconstructed pseudocode
// 6 functions
// ===================================================================


// ============================================================
// 00e880e0
// ============================================================
// Function: FUN_00e880e0
// Address: 00e880e0
// Size: 1213 bytes
// Class: GNRunLoopState
// String references:
//   "GNRunLoopState"
//   "ode.app/"
//   "/Applications/Xc?GNRunLoopWillDispatchEvent"

void FUN_00e880e0(void)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  uint8_t (*pauVar5) [16];
  int64_t lVar6;
  uint uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int *piVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint64_t local_60;
  
  FUN_00003020();
  if ((g_027890f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027890c0 = g_0238fcc0;
    ram_00000000027890c8 = _UNK_0238fcc8;
    g_027890d0 = g_0238ff10;
    ram_00000000027890d8 = _UNK_0238ff18;
    g_027890e0 = 0x900000008;
    g_027890e8 = 10;
    g_027890ec = 1;
    ___cxa_guard_release();
  }
  if ((g_02789128 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027890f8 = "GNRunLoopState";
    g_02789100 = 0xb;
    g_02789104 = g_027890ec;
    g_02789108 = &g_027890c0;
    g_02789110 = &g_02789060;
    g_02789118 = (uint8_t  [16])0x0;
    ___cxa_guard_release();
  }
  FUN_00d4ff60();
  FUN_00d50c00();
  uVar7 = 0;
  do {
    uVar2 = __dyld_image_count();
    if ((uVar2 <= uVar7) || ((g_02802648 != 0 && (g_02802638 != 0)))) {
      if ((g_02802638 == 0) ||
         (((g_02802648 == 0 || (g_02802668 == 0)) || (g_02802678 == 0)))) {
        FUN_00e82970();
      }
      if (g_02802658 == 0) {
        FUN_00e82970();
      }
      FUN_00d4ffb0();
      return;
    }
    lVar4 = __dyld_get_image_header();
    pauVar5 = (uint8_t (*) [16])__dyld_get_image_name();
    if (((*(int64_t *)*pauVar5 != 0x2f6d65747379532f) &&
        ((*pauVar5)[4] != '/' || *(int *)*pauVar5 != 0x7273752f)) &&
       ((auVar12._8_8_ = 0, auVar12._0_8_ = *(uint64_t *)pauVar5[1],
        auVar12 != _s_ode_app__023e1760 ||
        *pauVar5 != s__Applications_Xc_GNRunLoopWillDi_023e1770._0_16_ &&
        (*(int *)(lVar4 + 0x10) != 0)))) {
      piVar10 = (int *)(lVar4 + 0x20);
      uVar2 = 0;
      do {
        if (((g_02802648 != 0) && (g_02802638 != 0)) && (g_02802678 != 0)) break;
        if (*piVar10 == 0x19) {
          lVar1 = *(int64_t *)(piVar10 + 6);
          lVar6 = __dyld_get_image_vmaddr_slide();
          uVar9 = lVar6 + lVar1;
          if (((uVar9 <= local_60) && (local_60 < *(int64_t *)(piVar10 + 8) + uVar9)) &&
             (piVar10[0x10] != 0)) {
            plVar8 = (int64_t *)(piVar10 + 0x12);
            uVar11 = 0;
            do {
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802648 = lVar6 + lVar1;
                g_02802650 = g_02802648 + plVar8[5] + -1;
                if (g_02802658 != 0) break;
              }
              if (*(int *)((int64_t)plVar8 + 3) == 0x617461 && (int)*plVar8 == 0x61645f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802658 = lVar6 + lVar1;
                g_02802660 = g_02802658 + plVar8[5] + -1;
              }
              uVar11 = uVar11 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar11 < (uint)piVar10[0x10]);
          }
          if (((uVar9 < 0xe880e1) && (FUN_00e880e0 < (uVar9 + *(int64_t *)(piVar10 + 8))))
             && (piVar10[0x10] != 0)) {
            plVar8 = (int64_t *)(piVar10 + 0x12);
            uVar9 = 0;
            do {
              if (*(int *)((int64_t)plVar8 + 3) == 0x747865 && (int)*plVar8 == 0x65745f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802638 = lVar6 + lVar1;
                g_02802640 = g_02802638 + plVar8[5] + -1;
                if ((g_02802668 != 0) && (g_02802678 != 0)) break;
              }
              if ((short)plVar8[1] == 0x67 && *plVar8 == 0x6e69727473635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802668 = lVar6 + lVar1;
                g_02802670 = g_02802668 + plVar8[5] + -1;
                if ((g_02802638 != 0) && (g_02802678 != 0)) break;
              }
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                g_02802678 = lVar6 + lVar1;
                g_02802680 = g_02802678 + plVar8[5] + -1;
                if ((g_02802638 != 0) && (g_02802668 != 0)) break;
              }
              uVar9 = uVar9 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar9 < (uint)piVar10[0x10]);
          }
        }
        piVar10 = (int *)((int64_t)piVar10 + (uint64_t)(uint)piVar10[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar4 + 0x10));
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



// ============================================================
// 00e89400
// ============================================================
// Function: FUN_00e89400
// Address: 00e89400
// Size: 786 bytes
// Class: GNRunLoopState

uint64_t FUN_00e89400(void)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  do {
    lVar3 = FUN_00dac670();
    iVar2 = FUN_00dac670();
    iVar2 = iVar2 - (int)*(void*)(this_ptr + 0x18);
    iVar2 = (iVar2 + 7U & 0xfffffff8) - iVar2;
    if ((0 < iVar2) && (lVar4 = FUN_00dac6d0(), iVar2 + lVar3 < lVar4)) {
      FUN_00dac5e0();
    }
    FUN_00dabdf0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_00e89709;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_00e89709;
    lVar3 = FUN_00dac670();
    iVar2 = FUN_00dac670();
    iVar2 = iVar2 - (int)*(void*)(this_ptr + 0x18);
    iVar2 = (iVar2 + 7U & 0xfffffff8) - iVar2;
    if ((0 < iVar2) && (lVar4 = FUN_00dac6d0(), iVar2 + lVar3 < lVar4)) {
      FUN_00dac5e0();
    }
    cVar1 = FUN_00dab880();
    lVar3 = g_02789428;
    if (cVar1 == '\0') {
      if (g_02789428 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_02789450;
      if (g_02789450 != 0) {
        FUN_00d50b00();
      }
      FUN_00e972c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      iVar2 = 1;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else if (local_48 == 0) {
      iVar2 = 3;
      if (*(int *)(*(int64_t *)(this_ptr + 0x28) + 0xc) == 0) {
        if (g_02789428 != 0) {
          FUN_00d50b00();
        }
        lVar4 = g_02789458;
        if (g_02789458 != 0) {
          FUN_00d50b00();
        }
        FUN_00e972c0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        iVar2 = 1;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar5 = FUN_00dac670();
      local_38 = '\0';
      FUN_00d21140();
      lVar3 = *(int64_t *)(this_ptr + 0x30);
      iVar2 = *(int *)(lVar3 + 0x18);
      FUN_00c8e340();
      *(void*)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar2) = uVar5;
      lVar3 = *(int64_t *)(this_ptr + 0x38);
      iVar2 = *(int *)(lVar3 + 0x18);
      FUN_00c8e340();
      *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar2) = local_48;
      iVar2 = 0;
      FUN_00dac5e0();
    }
    FUN_00d50b20();
  } while (iVar2 == 0);
  if (iVar2 == 1) {
    uVar5 = 0;
  }
  else {
LAB_00e89709:
    *(void*)(this_ptr + 0x40) = 1;
    uVar5 = 1;
  }
  return uVar5;
}



// ============================================================
// 00e88a90
// ============================================================
// Function: FUN_00e88a90
// Address: 00e88a90
// Size: 569 bytes
// Class: GNRunLoopState

void FUN_00e88a90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*arg1;
  void*this_ptr;
  uint64_t local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  local_98 = g_027c24d8;
  if (cVar4 == '\0') {
    if (g_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02789420;
    local_90 = '\x01';
    if (g_02789420 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_027c24e8;
    local_88 = lVar1;
    local_80 = '\x01';
    if (g_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_a0 = *arg1;
    FUN_00083ea0(2,&local_a0);
    FUN_00e972c0();
    local_78 = (void*)&g_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
    local_38 = local_48;
    local_30 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_30 = '\x01';
    FUN_00daa940();
    puVar3 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (void*)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e88ea0();
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00e89a30
// ============================================================
// Function: FUN_00e89a30
// Address: 00e89a30
// Size: 524 bytes
// Class: GNRunLoopState

uint64_t FUN_00e89a30(uint64_t param_1,uint32_t param_2,void*param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t this_ptr;
  uint64_t local_a8;
  int64_t local_a0;
  void*local_98;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_00e89860();
  local_50 = g_02789460;
  if (iVar3 == -1) {
    if (g_02789460 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02789468;
    local_48 = '\x01';
    if (g_02789468 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02789470;
    local_40 = lVar1;
    local_38 = '\x01';
    if (g_02789470 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027d2068;
    if (g_027d2068 != 0) {
      FUN_00d50b00();
    }
    local_a8 = *arg1;
    local_a0 = lVar1;
    FUN_002bd7b0(&local_a0,&local_a8,4);
    local_98 = (void*)&g_02670890;
    local_58 = param_2;
    FUN_00e972c0();
    local_98 = (void*)&g_025df260;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (void*)&g_0253d630;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = 0xffffffffffffffff;
    if (param_3 != (void*)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3 != (void*)0x0) {
      *param_3 = *(void*)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + (int64_t)iVar3 * 8);
    }
    uVar4 = *(void*)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x30) + 0x10) + (int64_t)iVar3 * 8);
    FUN_00dac5e0();
  }
  return uVar4;
}



// ============================================================
// 00e88fc0
// ============================================================
// Function: FUN_00e88fc0
// Address: 00e88fc0
// Size: 731 bytes
// Class: GNRunLoopState

uint32_t FUN_00e88fc0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  int64_t this_ptr;
  char local_27;
  char local_26;
  char local_25;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  
  cVar4 = FUN_00dac2f0(0,6);
  lVar2 = g_02789438;
  lVar1 = g_02789428;
  if (cVar4 == '\0') {
    if (g_02789428 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02789430;
    if (g_02789430 != 0) {
      FUN_00d50b00();
    }
    FUN_00e972c0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if ((((local_27 == 'G') && (local_26 == 'N')) && (local_25 == 'B')) &&
          (((local_24 == 'C' && (local_23 == 'F')) && (local_22 == 'A')))) {
    cVar4 = FUN_00dabce0();
    if (cVar4 != '\0') {
      *(int *)(this_ptr + 0x20) = (int)local_21;
      lVar1 = g_02789438;
      if (local_21 == 1) {
        uVar5 = FUN_00dabce0();
        if ((char)uVar5 == '\0') {
          return uVar5;
        }
        FUN_00daa990();
        return uVar5;
      }
      if (g_02789438 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02789448;
      if (g_02789448 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027d2068;
      if (g_027d2068 != 0) {
        FUN_00d50b00();
        FUN_00d50b00();
      }
      FUN_00e972c0();
      if (lVar3 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (g_02789438 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02789440;
    if (g_02789440 != 0) {
      FUN_00d50b00();
    }
    FUN_00e972c0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 0;
}



// ============================================================
// 00e89df0
// ============================================================
// Function: FUN_00e89df0
// Address: 00e89df0
// Size: 603 bytes
// Class: GNRunLoopState

void FUN_00e89df0(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar2 = FUN_00e89a30(param_3,param_1,param_4);
  if (lVar2 == -1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00dac760();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00e89e88;
    }
  }
  else if (local_40 != 0) {
LAB_00e89e88:
    FUN_00daa910();
    if (local_40 == 0) {
      local_40 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    FUN_00d50b20();
    goto LAB_00e89f4f;
  }
  FUN_00dac790();
  (**(code **)(*local_80 + 0x370))();
  (**(code **)(*local_90 + 0x4d8))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa940();
  if (local_40 == 0) {
    local_40 = 0;
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00e89f4f:
  FUN_00dac5e0();
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  return;
}

