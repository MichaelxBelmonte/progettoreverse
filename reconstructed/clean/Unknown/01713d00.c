// Function: FUN_01713d00
// Address: 01713d00
// Size: 1431 bytes
// Class: Unknown

void FUN_01713d00(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  void* pVar4;
  void *pvVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  pVar4 = (void*)param_1;
  local_58 = this_ptr + 0x80;
  if (*(int *)(*(int64_t *)(this_ptr + 0x80) + 0xc) != 0) {
    FUN_00d23340();
    pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar4);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_012c8fb0();
    pvVar5 = _pthread_getspecific(pVar4);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_012c8fb0();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 < iVar2) {
      pvVar5 = _pthread_getspecific(pVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8fb0();
      pVar4 = FUN_01713a50();
      FUN_00d64bd0(pVar4,local_58);
      local_48 = *arg1;
      local_40[0] = '\0';
      FUN_00d23370();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d65060(pVar4,local_58);
      pvVar5 = _pthread_getspecific(pVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      local_60 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_60 = '\x01';
      local_68 = local_48;
      FUN_012e66e0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017141ae;
    }
  }
  FUN_00d649d0();
  local_48 = *arg1;
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d64e50();
  pvVar5 = _pthread_getspecific(pVar4);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar4);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  local_70 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_70 = '\x01';
  local_78 = local_48;
  FUN_012e6520();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_017141ae:
  FUN_00d403d0();
  lVar1 = g_027294e8;
  if (g_027294e8 != 0) {
    FUN_00d50b00();
  }
  local_80 = 0;
  FUN_00d50b00();
  local_80 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  local_88 = this_ptr;
  FUN_00d40470(&local_98,&local_88,3,3);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

