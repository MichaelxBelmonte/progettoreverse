// Function: FUN_019be690
// Address: 019be690
// Size: 1594 bytes
// Class: MUEditorElementView

void FUN_019be690(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint32_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int local_40;
  
  if (this_ptr[0x58] == *arg1) {
    return;
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  FUN_00d46300();
  lVar2 = local_c8;
  lVar3 = g_026f6f98;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
      lVar3 = g_026f6f98;
    }
  }
  else {
    local_c0 = '\0';
  }
  g_026f6f98 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)0x0;
  if (*arg1 != 0) {
    FUN_00d403d0();
    lVar2 = g_027e13e0;
    if (g_027e13e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_100 = '\0';
    local_108 = plVar7;
    FUN_00d40470(&local_108,&stack0xffffffffffffff48,1,3);
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar8 = (int64_t *)*arg1;
  }
  FUN_00827d60();
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = arg1;
    if (cVar5 != '\0') goto LAB_019be8d2;
  }
  plVar8 = &g_02802688;
LAB_019be8d2:
  if ((bool)*(char *)((int64_t)this_ptr + 0x512) != (*plVar8 != 0)) {
    *(bool *)((int64_t)this_ptr + 0x512) = *plVar8 != 0;
    (**(code **)(*this_ptr + 0x620))();
  }
  plVar8 = (int64_t *)0x0;
  if ((int64_t *)this_ptr[0x58] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x58] + 0x450))();
    plVar8 = (int64_t *)this_ptr[0x58];
  }
  plVar1 = (int64_t *)*arg1;
  plVar4 = plVar8;
  if (plVar8 != plVar1) {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    this_ptr[0x58] = (int64_t)plVar1;
    plVar4 = plVar1;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = (int64_t *)this_ptr[0x58];
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x448))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar2 = this_ptr[0x58];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xed8))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)this_ptr[0x81];
  if ((plVar8 != (int64_t *)0x0) && ((int64_t *)this_ptr[0x58] != (int64_t *)0x0)) {
    (**(code **)(*(int64_t *)this_ptr[0x58] + 0x420))();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar8 + 0x918))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[0x4b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x4b] + 0x620))();
  }
  lVar3 = this_ptr[0x4a];
  if (lVar3 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar3 + 0xc)) {
      FUN_01981860();
      local_f8 = *arg1;
      local_f0 = '\0';
      FUN_01983f50();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a01cb0();
  }
  if ((int64_t *)this_ptr[0x80] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x80] + 0x620))();
  }
  if (this_ptr[0x7f] != 0) {
    this_ptr[0x5a] = this_ptr[0x5b];
    uVar6 = FUN_01e1f170();
    *(void*)(this_ptr + 0x5b) = uVar6;
    uVar6 = FUN_01e1f180();
    *(void*)((int64_t)this_ptr + 0x2dc) = uVar6;
  }
  FUN_00d403d0();
  local_e8 = g_026f6ed8;
  if (g_026f6ed8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  FUN_00d50b00();
  local_d0 = '\0';
  local_d8 = plVar7;
  FUN_00d40470(&local_d8,&stack0xffffffffffffff78,1,3);
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa48))();
  (**(code **)(*this_ptr + 0x620))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

