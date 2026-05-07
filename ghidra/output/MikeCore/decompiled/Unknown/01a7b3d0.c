// Function: FUN_01a7b3d0
// Address: 01a7b3d0
// Size: 1400 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a7b83c) */
/* WARNING: Removing unreachable block (ram,0x01a7b848) */
/* WARNING: Removing unreachable block (ram,0x01a7b7cf) */
/* WARNING: Removing unreachable block (ram,0x01a7b7db) */
/* WARNING: Removing unreachable block (ram,0x01a7b56f) */
/* WARNING: Removing unreachable block (ram,0x01a7b57b) */
/* WARNING: Removing unreachable block (ram,0x01a7b431) */
/* WARNING: Removing unreachable block (ram,0x01a7b43d) */
/* WARNING: Removing unreachable block (ram,0x01a7b6fd) */
/* WARNING: Removing unreachable block (ram,0x01a7b70d) */
/* WARNING: Removing unreachable block (ram,0x01a7b911) */
/* WARNING: Removing unreachable block (ram,0x01a7b91a) */
/* WARNING: Removing unreachable block (ram,0x01a7b78e) */
/* WARNING: Removing unreachable block (ram,0x01a7b79b) */
/* WARNING: Removing unreachable block (ram,0x01a7b732) */
/* WARNING: Removing unreachable block (ram,0x01a7b73f) */
/* WARNING: Removing unreachable block (ram,0x01a7b63a) */
/* WARNING: Removing unreachable block (ram,0x01a7b643) */
/* WARNING: Removing unreachable block (ram,0x01a7b4f7) */
/* WARNING: Removing unreachable block (ram,0x01a7b520) */
/* WARNING: Removing unreachable block (ram,0x01a7b4f9) */
/* WARNING: Removing unreachable block (ram,0x01a7b522) */

void FUN_01a7b3d0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01a78a20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if (local_58 != 0) {
    lVar4 = *(longlong *)(local_58 + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01a80920();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4 * 8);
        cVar3 = FUN_01a87be0();
        if (cVar3 != '\0') {
          FUN_01a80590();
        }
      }
      lVar4 = lVar2;
      FUN_01a80d20();
      param_1 = (pthread_key_t)lVar4;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126e7e0();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 3) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126dd90();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2ec0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126de80();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a5f0();
    FUN_0039e8b0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_0152eef0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


