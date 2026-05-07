// Function: FUN_0039f0d0
// Address: 0039f0d0
// Size: 562 bytes
// Class: MDMetaWindowController

void FUN_0039f0d0(void)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  uint uVar5;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar2 = local_40;
  (**(code **)(*this_ptr + 0xe28))();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_003231a0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = *(uint *)(local_40 + 0xc);
  if (0 < (int)uVar5) {
    lVar4 = (uint64_t)uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      if (*arg1 == 0) {
LAB_0039f1a0:
        FUN_00d23620();
      }
      else {
        local_40 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (uint64_t)uVar5 * 8);
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        cVar3 = FUN_00d23d70();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_0039f1a0;
      }
      lVar4 = lVar4 + -1;
    } while (1 < lVar4);
    uVar5 = *(uint *)(lVar2 + 0xc);
  }
  (**(code **)(*this_ptr + 0xe28))();
  uVar1 = *(uint *)(local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (uVar5 != uVar1) {
    (**(code **)(*this_ptr + 0xde8))();
  }
  if (*(char *)((int64_t)this_ptr + 0x541) == '\0') {
    FUN_019a40d0();
  }
  FUN_00d50b20();
  return;
}

