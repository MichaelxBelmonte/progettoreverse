// Function: FUN_01a884d0
// Address: 01a884d0
// Size: 1847 bytes
// Class: GNValue

void FUN_01a884d0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t this_ptr;
  bool bVar6;
  int64_t *local_a0;
  char local_98;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01a89190();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01a88592;
    FUN_00d50b00();
LAB_01a8852c:
    FUN_01a13070();
    if (local_40 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01a13070();
      (**(code **)(*local_60 + 0xa18))();
      bVar6 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_01a13070();
      (**(code **)(*local_60 + 0xa18))();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01912530();
      lVar2 = *(int64_t *)(this_ptr + 0xe8);
      lVar5 = lVar2;
      if (lVar2 != local_40) {
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
            goto LAB_01a88758;
          }
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0xe8);
          *(int64_t *)(this_ptr + 0xe8) = local_40;
        }
        else {
          local_38 = '\0';
LAB_01a88758:
          *(int64_t *)(this_ptr + 0xe8) = lVar5;
        }
        param_1 = (void*)lVar2;
        if (lVar2 != 0) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = *(int64_t **)(this_ptr + 0xd8);
      plVar3 = *(int64_t **)(this_ptr + 0xe8);
      FUN_01a13070();
      (**(code **)(*local_a0 + 0xa18))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      FUN_016c98e0();
      FUN_00d470c0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*plVar3 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = *(int64_t **)(this_ptr + 0xe0);
      plVar3 = *(int64_t **)(this_ptr + 0xe8);
      FUN_01a13070();
      (**(code **)(*local_a0 + 0xa18))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
      FUN_016c98e0();
      FUN_00d470c0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*plVar3 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar6 = false;
      goto LAB_01a88bb3;
    }
    bVar6 = false;
  }
  else {
    if (local_40 != 0) goto LAB_01a8852c;
LAB_01a88592:
    bVar6 = true;
  }
  plVar1 = *(int64_t **)(this_ptr + 0xd8);
  FUN_00e9aaa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x968))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xe0);
  FUN_00e9aaa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x968))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01a88bb3:
  (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
  if (!bVar6) {
    FUN_00d50b20();
  }
  return;
}

