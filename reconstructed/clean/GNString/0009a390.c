// Function: FUN_0009a390
// Address: 0009a390
// Size: 1343 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0009a390(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t lVar6;
  uint32_t uVar7;
  int64_t local_c8;
  char local_c0;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x88) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((*(int64_t *)(this_ptr + 0x10) == 0) &&
     (lVar6 = *(int64_t *)(this_ptr + 0x88), lVar6 != 0)) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x10) = lVar6;
  }
  lVar6 = *(int64_t *)(this_ptr + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(void*)(puVar4 + 6) = 0;
  *puVar4 = &g_02516280;
  (*g_02516298)();
  FUN_006c5420();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_006c5fa0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_006c5f80();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x958))();
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x948))();
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x918))();
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x928))();
  FUN_00d50b20();
  lVar6 = *(int64_t *)(this_ptr + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_026d8e48;
  lVar2 = g_026d8e40;
  if (*(char *)(this_ptr + 0xb0) == '\0') {
    if (g_026d8e48 == 0) goto LAB_0009a5f0;
    FUN_00d50b00();
  }
  else if (g_026d8e40 == 0) {
LAB_0009a5f0:
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    lVar5 = lVar2;
  }
  FUN_003b6200();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x990))();
  FUN_00d50b20();
  lVar6 = *(int64_t *)(this_ptr + 0x88);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_48 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_48 = '\x01';
  local_50 = (int64_t *)(this_ptr + 0x70);
  FUN_006c6090();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0xa0) + 0xc) == 0) {
    FUN_000b6980();
    if (local_c0 == '\0') {
      if (local_c8 == 0) goto LAB_0009a8a8;
      FUN_00d50b00();
    }
    else if (local_c8 == 0) goto LAB_0009a8a8;
    if (0 < *(int *)(local_c8 + 0xc)) {
      lVar6 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_c8 + 0x10) + lVar6 * 8);
        local_38 = 0;
        uVar7 = FUN_00d50b00();
        local_38 = '\x01';
        local_68 = '\0';
        local_70 = lVar2;
        local_40 = this_ptr;
        FUN_00016480(uVar7,&local_70);
        lVar2 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_c8 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_0009a8a8:
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x558))();
  FUN_00d50b20();
  return;
}

