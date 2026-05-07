// Function: FUN_0051da80
// Address: 0051da80
// Size: 1108 bytes
// Class: MDPluginDocument

void FUN_0051da80(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      FUN_0051b4f0();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_000ba510();
      local_38 = local_68;
      if (local_68 == 0) {
        local_38 = 0;
        bVar2 = false;
      }
      else if (local_60 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_60 = '\0';
        bVar2 = true;
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (*(int *)(*(int64_t *)(this_ptr + 0x310) + 0xc) == 0) {
      bVar2 = false;
      local_38 = 0;
    }
    else {
      FUN_00323290();
      local_38 = local_68;
      if (local_68 == 0) {
        local_38 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      cVar3 = FUN_0078cda0();
      lVar1 = *(int64_t *)(this_ptr + 0x310);
      if (lVar1 != 0) {
        local_60 = '\0';
        local_68 = 0;
        local_50 = -1;
        while( true ) {
          lVar4 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_50) break;
          local_68 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
          pVar6 = (void*)*(int64_t *)(lVar1 + 0x10);
          if (cVar3 == '\0') {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a070();
          }
          else {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a0b0();
          }
          lVar4 = local_a8;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          FUN_00d21140();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00277f20();
      }
    }
    FUN_012d1fd0();
    FUN_00d403d0();
    lVar1 = g_0270b7f0;
    if (g_0270b7f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d40470(&local_b8,&stack0xffffffffffffff68,1,3);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

