// Function: FUN_002ae170
// Address: 002ae170
// Size: 1093 bytes
// Class: MDMetaWindowController

void FUN_002ae170(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  (**(code **)(*arg1 + 0x5e0))();
  FUN_01e561b0();
  FUN_01d8f0f0();
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*arg1 + 0x5e0))();
    FUN_01e561b0();
    (**(code **)(*local_40 + 0x9b0))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    (**(code **)(*arg1 + 0x5e0))();
    FUN_00643590();
    FUN_00d23310();
    plVar8 = local_40;
    pcVar7 = local_48;
    if (local_38[0] != '\0') {
      pcVar7 = local_38;
    }
    local_48[0] = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] == '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      cVar5 = FUN_00212c70();
      lVar2 = g_027259a0;
      if (cVar5 != '\0') {
        if (g_027259a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_026fe4a0;
        if (g_026fe4a0 != 0) {
          FUN_00d50b00();
        }
        FUN_01f6ca30();
        iVar6 = (**(code **)(*local_40 + 0x5e0))();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (iVar6 != 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          FUN_00d50b20();
          goto joined_r0x002ae599;
        }
        FUN_002218f0();
      }
      FUN_00d50b20();
    }
  }
  FUN_00751e50();
  plVar8 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
  }
  else {
    if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00763990();
    (**(code **)(*plVar8 + 0x498))();
    FUN_00cafd20();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00757320();
    (**(code **)(*arg1 + 0x5e0))();
    plVar4 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    FUN_002ac220();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x498))();
    (**(code **)(*local_40 + 0x3c8))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
joined_r0x002ae599:
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

