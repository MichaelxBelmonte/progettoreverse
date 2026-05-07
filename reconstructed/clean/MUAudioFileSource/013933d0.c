// Function: FUN_013933d0
// Address: 013933d0
// Size: 747 bytes
// Class: MUAudioFileSource

void FUN_013933d0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar3 = g_028acd40;
  if (g_028acd40 != (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  (**(code **)(*g_028acd10 + 0x368))();
  FUN_00d6f370();
  local_70 = g_027bf420;
  if (g_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d704d0(&local_60,&local_70);
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
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
LAB_01393581:
    bVar2 = false;
  }
  else {
    local_50 = plVar3;
    local_48 = '\0';
    FUN_00cddf30();
    plVar6 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      plVar6 = (int64_t *)0x0;
      bVar2 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        bVar1 = false;
        if ((local_38 == '\0') || (bVar1 = false, local_40 == (int64_t *)0x0)) goto LAB_0139353e;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar2 = true;
      bVar1 = false;
    }
LAB_0139353e:
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      cVar5 = (**(code **)(*plVar6 + 0x3a0))();
      if ((cVar5 != '\0') || (cVar5 = (**(code **)(*plVar6 + 0x428))(), cVar5 != '\0'))
      goto LAB_013935c7;
      if (bVar1) goto LAB_01393581;
      bVar2 = false;
      FUN_00d50b20();
    }
  }
  FUN_00b7b410();
  plVar6 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
  }
  else {
    bVar2 = true;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
  }
LAB_013935c7:
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar6 + 0x428))();
  }
  (**(code **)(*g_028acd10 + 0x378))();
  cVar5 = (**(code **)(*plVar6 + 0x3a0))();
  plVar4 = g_028acd40;
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028acd40 != plVar6) &&
       (FUN_00d50b00(), g_028acd40 = plVar6, plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (g_028acd48 == '\0') {
      g_028acd48 = '\x01';
      FUN_00e8cb90();
    }
    *(void*)(this_ptr + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    bVar2 = false;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return;
}

