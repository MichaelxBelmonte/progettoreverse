// Function: FUN_0013a110
// Address: 0013a110
// Size: 1501 bytes
// Class: MDMetaWindowController
// String references:
//   "_rootPart"

void FUN_0013a110(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar2 = *arg1;
  if (*(int64_t *)(this_ptr + 0xb0) == lVar2) {
    return;
  }
  if (lVar2 == 0) {
    FUN_0013bc90();
    if (*(int64_t *)(this_ptr + 0xc0) != 0) {
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        *(void*)(this_ptr + 0x80) = 0;
        FUN_00d50b20();
        if (*(int64_t *)(this_ptr + 0xc0) == 0) goto LAB_0013a1ab;
      }
      *(void*)(this_ptr + 0xc0) = 0;
      FUN_00d50b20();
    }
LAB_0013a1ab:
    if (*(int64_t *)(this_ptr + 0x70) != 0) {
      *(void*)(this_ptr + 0x70) = 0;
      FUN_00d50b20();
    }
    lVar2 = *arg1;
  }
  lVar3 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0xb0) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *arg1;
  }
  if (lVar2 == 0) {
    return;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_d0 = g_026e37d0;
    if (g_026e37d0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = FUN_00e8b990();
    local_68 = 0;
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_000be210();
    FUN_00e86210();
    local_c0 = g_026dc288;
    if (g_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    FUN_00c841b0();
    local_50 = local_90;
    local_48 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_48 = '\x01';
    local_a8 = '\0';
    local_b0 = 0;
    plVar4 = &local_70;
    FUN_000bfbc0(plVar4,&local_d0,0xa0,&local_50);
    param_1 = (void*)plVar4;
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    lVar3 = lVar2;
    if (lVar2 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar3 = 0;
          goto LAB_0013a39c;
        }
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x70);
        *(int64_t *)(this_ptr + 0x70) = local_40;
        lVar3 = local_40;
      }
      else {
        local_38 = '\0';
        lVar3 = local_40;
LAB_0013a39c:
        *(int64_t *)(this_ptr + 0x70) = lVar3;
      }
      param_1 = (void*)lVar2;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_000be210();
    lVar2 = FUN_00e85ef0();
    if (lVar2 == 0) {
      lVar2 = FUN_00e858c0();
      if ((lVar2 == 0) || (lVar2 = *(int64_t *)(lVar2 + 0x28), lVar2 == 0)) goto LAB_0013a4f7;
LAB_0013a4e9:
      local_58 = 0;
      FUN_00d50b00();
    }
    else {
      lVar2 = *(int64_t *)(lVar2 + 0x30);
      if (lVar2 != 0) goto LAB_0013a4e9;
LAB_0013a4f7:
      lVar2 = 0;
    }
    local_58 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    local_60 = lVar2;
    FUN_000bfd00();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0013bc90();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar3 = *(int64_t *)(this_ptr + 0xc0);
  if (lVar3 != lVar2) {
    if (lVar3 == 0) {
      lVar3 = 0;
      if (lVar2 == 0) goto LAB_0013a6b3;
    }
    else {
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        *(void*)(this_ptr + 0x80) = 0;
        FUN_00d50b20();
        lVar3 = *(int64_t *)(this_ptr + 0xc0);
      }
      if (lVar3 == lVar2) goto LAB_0013a6b3;
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0xc0) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
LAB_0013a6b3:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

