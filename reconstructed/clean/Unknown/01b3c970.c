// Function: FUN_01b3c970
// Address: 01b3c970
// Size: 1086 bytes
// Class: Unknown

uint64_t FUN_01b3c970(void* param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void *pvVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01b06a50();
  cVar5 = FUN_01aa7eb0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_01f27fe0();
    local_78 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
    FUN_00d50b00();
    local_78 = '\x01';
    local_80 = (int64_t *)(this_ptr + 0x90);
    FUN_01f474f0();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      (**(code **)(*local_80 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01b06a50();
    FUN_01aa8280();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01aa5ff0(0);
  }
  FUN_01b06a50();
  cVar5 = FUN_01aa7eb0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    return 1;
  }
  uVar7 = FUN_01b3e280();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return 1;
    }
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return 1;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x118);
  if (lVar1 != 0) {
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = lVar1;
    cVar5 = (**(code **)(*plVar3 + 0x50))();
    uVar7 = extraout_XMM0_Da;
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      if (*(int64_t *)(this_ptr + 0x118) != 0) {
        *(void*)(this_ptr + 0x118) = 0;
        FUN_00d50b20();
      }
      goto LAB_01b3cd95;
    }
  }
  FUN_017b2910(uVar7,0);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_01b06a50();
    plVar4 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aa5e0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01aa8370();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01aaa300();
    plVar2 = *(int64_t **)(this_ptr + 0x118);
    if (plVar2 != plVar3) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x118) = plVar3;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01f27fe0();
    local_58 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
    uVar7 = FUN_00d50b00();
    local_58 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    local_60 = (int64_t *)(this_ptr + 0x90);
    FUN_01f47190(uVar7,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01b3cd95:
  FUN_00d50b20();
  return 1;
}

