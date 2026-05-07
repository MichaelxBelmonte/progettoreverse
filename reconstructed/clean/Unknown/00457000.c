// Function: FUN_00457000
// Address: 00457000
// Size: 776 bytes
// Class: Unknown

void FUN_00457000(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (((int)this_ptr[0xe] == 0) && (cVar3 = (**(code **)(*this_ptr + 0x4a0))(), cVar3 != '\0')) {
    FUN_01f27fe0();
    lVar6 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x108) + 0x28);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_000e2730();
    if (local_40 == 0) {
      lVar5 = 0;
      bVar2 = false;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = bVar2;
    if (lVar5 != 0) goto LAB_004570fe;
  }
  else {
    bVar2 = false;
  }
  lVar5 = this_ptr[0xc];
  if ((lVar5 != 0) || (lVar5 = this_ptr[6], lVar5 != 0)) {
    FUN_00d50b00();
  }
  bVar1 = true;
  if (lVar5 == 0) {
    bVar1 = bVar2;
  }
LAB_004570fe:
  FUN_0052f190();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264970();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_0052f190();
    FUN_012d99f0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

