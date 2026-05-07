// Function: FUN_01d75460
// Address: 01d75460
// Size: 791 bytes
// Class: GNMultipleValue

void FUN_01d75460(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar5;
  float fVar6;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar3 = local_40;
  lVar2 = g_027fff38;
  if (g_027fff38 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    FUN_00d530a0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = FUN_00d3ed20();
    local_98 = g_027295d8;
    if (g_027295d8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_000175c0(uVar5,&local_98);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    uVar5 = FUN_00d3ed20();
    local_88 = g_027092c0;
    if (g_027092c0 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_000175c0(uVar5,&local_88);
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      fVar6 = (float)FUN_00d459e0();
      if (this_ptr[3] == 0) {
        local_44 = fVar6;
        (**(code **)(*this_ptr + 0x448))();
        fVar6 = local_44;
      }
      g_028b84f0 = 0;
      if ((((double)this_ptr[0x11] == 0.0) && (!NAN((double)this_ptr[0x11]))) &&
         (g_023b2ef0 <
          (double)(float)((uint)(*(float *)(this_ptr + 0x12) - fVar6) & g_02390140))) {
        local_44 = fVar6;
        (**(code **)(*(int64_t *)this_ptr[0xf] + 0x928))();
        *(float *)(this_ptr + 0x12) = local_44;
        g_028b84f0 = 1;
      }
      FUN_01d759a0();
    }
    FUN_01d759a0();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

