// Function: FUN_01d96f70
// Address: 01d96f70
// Size: 1450 bytes
// Class: GNMultiRulerView

void FUN_01d96f70(void)

{
  char cVar1;
  char *pcVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e44a80();
  if (*(char *)((int64_t)this_ptr + 0x19d) != '\0') {
    (**(code **)(*this_ptr + 0x640))();
    FUN_01e436c0();
    (**(code **)(*local_50 + 0x518))();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_50 == (int64_t *)0x0) {
    cVar1 = '\0';
  }
  else {
    FUN_01f27fe0();
    cVar1 = FUN_01f2fa60();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01e42030();
    FUN_01d8b220();
    local_40[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_40;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (((local_50 != (int64_t *)0x0) && (FUN_01e42030(), local_48[0] != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    FUN_01d8b200();
    local_38[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_50 == this_ptr) {
      bVar3 = true;
    }
    else {
      FUN_01cf3f40();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x7b8))();
      bVar3 = local_50 == (int64_t *)0x0;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      (**(code **)(*this_ptr + 0x640))();
      FUN_01e3f820();
      FUN_00d05530();
      (**(code **)(*local_50 + 0x508))();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

