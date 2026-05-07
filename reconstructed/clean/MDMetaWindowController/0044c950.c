// Function: FUN_0044c950
// Address: 0044c950
// Size: 636 bytes
// Class: MDMetaWindowController

void FUN_0044c950(void* param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01240660();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01240660();
      FUN_00d23310();
      pcVar5 = local_38;
      if (local_40[0] != '\0') {
        pcVar5 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
      }
      if ((local_50 != '\0') && (bVar2 = bVar3, local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0044cb9b;
    }
LAB_0044cb62:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012407c0();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) goto LAB_0044cb62;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012407c0();
    FUN_00d23310();
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      bVar3 = false;
      bVar2 = false;
    }
    else {
      bVar3 = true;
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (bVar2 = bVar3, local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_0044cb9b:
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) goto LAB_0044cbb2;
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_0044cbb2;
    }
  }
  local_48 = 0;
LAB_0044cbb2:
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return;
}

